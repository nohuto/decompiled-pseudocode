/*
 * XREFs of PsTerminateVsmEnclave @ 0x14071C150
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x1406E917C (MiTerminateEnclave.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r14
  int v6; // eax
  _QWORD *v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-A0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 48);
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v6 )
  {
    if ( (a2 & 4) == 0 && v6 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      *(_DWORD *)(a1 + 72) = 0;
      v7 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v8 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 == v7 )
          break;
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = 0LL;
        *((_DWORD *)v8 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v8 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        v15 = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 43LL, 0, (__int64)v14);
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
  v12 = v13;
  if ( (a2 & 5) != 0 )
    v12 = 0LL;
  v13 = v12;
  result = KeWaitForSingleObject(
             (PVOID)(a1 + 80),
             Executive,
             KeGetCurrentThread()->PreviousMode,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v13 & -(__int64)((a2 & 5) != 0)));
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
