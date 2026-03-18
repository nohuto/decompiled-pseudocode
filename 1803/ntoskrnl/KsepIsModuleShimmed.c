/*
 * XREFs of KsepIsModuleShimmed @ 0x1405FE494
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x1405FB58C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD **v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v14; // rcx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
  v11 = (_QWORD **)(a1 + 32);
  v12 = *v11;
  while ( v12 != v11 )
  {
    v14 = v12;
    v12 = (_QWORD *)*v12;
    if ( v14[2] == a2 )
    {
      *a3 = v14;
      v3 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
  KeLeaveCriticalRegion();
  return v3;
}
