/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x140034DD8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned __int16 v11; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v12[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-88h]

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = v1;
    *(_QWORD *)&UserData.Size = 2LL;
    v4 = (unsigned int)PopDeepSleepDisengageReasonMask
       - (((unsigned __int64)(unsigned int)PopDeepSleepDisengageReasonMask >> 1) & 0x5555555555555555LL);
    v11 = (0x101010101010101LL
         * (((v4 & 0x3333333333333333LL)
           + ((v4 >> 2) & 0x3333333333333333LL)
           + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    UserDataCount = v11 + 1;
    UserData.Ptr = (ULONGLONG)&v11;
    v6 = !_BitScanForward(&v1, PopDeepSleepDisengageReasonMask);
    v12[0] = v1;
    if ( !v6 )
    {
      v7 = 0LL;
      v8 = v12;
      do
      {
        v9 = 2 * v7;
        ++v0;
        v2 &= v2 - 1;
        v6 = !_BitScanForward(&v10, v2);
        v14[v9] = v8;
        v14[v9 + 1] = 4LL;
        v7 = v0;
        v8 = &v12[v0];
        *v8 = v10;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    __writecr8(v3);
  }
}
