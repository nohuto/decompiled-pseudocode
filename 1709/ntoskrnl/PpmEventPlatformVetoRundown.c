/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x14024ADA8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x14024B918 (PpmEventTracePreVetoAccounting.c)
 */

void PpmEventPlatformVetoRundown()
{
  KIRQL v0; // al
  __int64 v1; // r9
  __int64 v2; // r8
  KIRQL j; // si
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  unsigned int i; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  char *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  if ( PpmPlatformStates )
  {
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      UserData.Reserved = 0;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v1 = PpmPlatformStates;
      v2 = 0LL;
      i = 0;
      for ( j = v0; (unsigned int)v2 < *(_DWORD *)PpmPlatformStates; i = v2 )
      {
        UserData.Reserved = 0;
        v4 = (_QWORD **)(384 * v2 + v1 + 88);
        UserData.Size = 4;
        UserData.Ptr = (ULONGLONG)&i;
        v5 = *v4;
        if ( *v4 != v4 )
        {
          do
          {
            v10 = 0;
            v13 = 0;
            v8 = v5 + 2;
            v9 = 4;
            v11 = (char *)v5 + 20;
            v12 = 4;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            v5 = (_QWORD *)*v5;
          }
          while ( v5 != v4 );
          LODWORD(v2) = i;
        }
        v1 = PpmPlatformStates;
        v2 = (unsigned int)(v2 + 1);
      }
      KxReleaseSpinLock(&PpmIdleVetoLock);
      __writecr8(j);
    }
  }
}
