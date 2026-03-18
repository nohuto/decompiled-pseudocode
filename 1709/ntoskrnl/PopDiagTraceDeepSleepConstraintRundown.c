/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x14000F374
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PopDiagTraceDeepSleepConstraintRundown()
{
  unsigned __int16 v0; // bx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  unsigned __int64 v4; // rcx
  ULONG UserDataCount; // r9d
  bool v6; // zf
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned __int16 v10; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v11[10]; // [rsp+48h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-A8h] BYREF

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = v1;
    *(_QWORD *)&UserData.Size = 2LL;
    v4 = (unsigned int)PopDeepSleepDisengageReasonMask
       - (((unsigned __int64)(unsigned int)PopDeepSleepDisengageReasonMask >> 1) & 0x5555555555555555LL);
    v10 = (0x101010101010101LL
         * (((v4 & 0x3333333333333333LL)
           + ((v4 >> 2) & 0x3333333333333333LL)
           + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    UserDataCount = v10 + 1;
    UserData.Ptr = (ULONGLONG)&v10;
    v6 = !_BitScanForward(&v1, PopDeepSleepDisengageReasonMask);
    v11[0] = v1;
    if ( !v6 )
    {
      v7 = v11;
      do
      {
        v8 = (unsigned int)v0++ + 1;
        v8 *= 2LL;
        v2 &= v2 - 1;
        *(&UserData.Ptr + v8) = (ULONGLONG)v7;
        v7 = &v11[v0];
        *((_QWORD *)&UserData.Size + v8) = 4LL;
        v6 = !_BitScanForward(&v9, v2);
        *v7 = v9;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    __writecr8(v3);
  }
}
