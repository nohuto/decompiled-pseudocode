/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x140235D08
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 */

char PpmEventPlatformVetoRundown()
{
  _UNKNOWN **v0; // rax
  KIRQL v1; // al
  _DWORD *v2; // r9
  __int64 v3; // r8
  KIRQL i; // si
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  int v8; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD *v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+6Ch] [rbp+2Bh]
  char *v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  v0 = &retaddr;
  if ( PpmPlatformStates )
  {
    LOBYTE(v0) = 0;
    v8 = 0;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        UserData.Reserved = 0;
        UserData.Size = 4;
        UserData.Ptr = (ULONGLONG)&v8;
        PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
        LODWORD(v0) = v8 + 1;
        v8 = (int)v0;
      }
      while ( (unsigned int)v0 < *(_DWORD *)PpmPlatformStates );
    }
    if ( PpmEtwRegistered )
    {
      LOBYTE(v0) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN);
      if ( (_BYTE)v0 )
      {
        v1 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        v2 = (_DWORD *)PpmPlatformStates;
        v3 = 0LL;
        v8 = 0;
        for ( i = v1; (unsigned int)v3 < *v2; v8 = v3 )
        {
          UserData.Reserved = 0;
          v5 = (_QWORD **)&v2[96 * v3 + 22];
          UserData.Size = 4;
          UserData.Ptr = (ULONGLONG)&v8;
          v6 = *v5;
          if ( *v5 != v5 )
          {
            do
            {
              v12 = 0;
              v15 = 0;
              v10 = v6 + 2;
              v11 = 4;
              v13 = (char *)v6 + 20;
              v14 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 3u, &UserData);
              v6 = (_QWORD *)*v6;
            }
            while ( v6 != v5 );
            LODWORD(v3) = v8;
            v2 = (_DWORD *)PpmPlatformStates;
          }
          v3 = (unsigned int)(v3 + 1);
        }
        KxReleaseSpinLock(&PpmIdleVetoLock);
        LOBYTE(v0) = i;
        __writecr8(i);
      }
    }
  }
  return (char)v0;
}
