/*
 * XREFs of PsTerminateVsmEnclave @ 0x14077FC80
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x140752D34 (MiTerminateEnclave.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r15
  int v6; // eax
  LARGE_INTEGER *Timeout; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  NTSTATUS result; // eax
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-A0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 48);
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  Timeout = 0LL;
  if ( v6 )
  {
    if ( (a2 & 4) == 0 && v6 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      *(_DWORD *)(a1 + 72) = 0;
      v11 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v12 = (_QWORD *)*v11;
        if ( (_QWORD *)*v11 == v11 )
          break;
        v13 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *v12 = 0LL;
        *((_DWORD *)v12 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v12 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112), v8, v9, v10);
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        v18 = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 43LL, 0, (__int64)v17);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  if ( (a2 & 5) != 0 )
  {
    v16 = 0LL;
    Timeout = (LARGE_INTEGER *)&v16;
  }
  result = KeWaitForSingleObject((PVOID)(a1 + 80), Executive, KeGetCurrentThread()->PreviousMode, 0, Timeout);
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
