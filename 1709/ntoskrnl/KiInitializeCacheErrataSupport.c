/*
 * XREFs of KiInitializeCacheErrataSupport @ 0x14086BD34
 * Callers:
 *     KiInitMachineDependent @ 0x1401433D4 (KiInitMachineDependent.c)
 * Callees:
 *     KeStartProfile @ 0x14020834C (KeStartProfile.c)
 *     KiDisableCacheErrataSource @ 0x14020B584 (KiDisableCacheErrataSource.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x1406D8620 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1406D8798 (KeSetIntervalProfile.c)
 */

char __fastcall KiInitializeCacheErrataSupport(char a1)
{
  unsigned int v2; // ebx
  int *PoolWithTag; // rax
  int *v4; // rdi
  unsigned int v6; // r9d
  _QWORD *i; // r8

  if ( KiTLBCOverride )
  {
    KiDisableCacheErrataSource();
    if ( a1 )
LABEL_3:
      KiCacheErrataMonitor = 0LL;
  }
  else
  {
    if ( !a1 )
      return 1;
    v2 = KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
    {
      KiTLBCOverride = 1;
      KiDisableCacheErrataSource();
      goto LABEL_3;
    }
    PoolWithTag = (int *)ExAllocatePoolWithTag(
                           NonPagedPoolNx,
                           16 * ((unsigned int)KeNumberProcessors_0 + 16LL),
                           0x2020654Bu);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    *PoolWithTag = 0x393870 / v2;
    KeInitializeProfileCallback(PoolWithTag + 2, (__int64)KiMonitorCacheErrata, 0LL, 0);
    v6 = 0;
    for ( i = v4 + 64; v6 < v2; *((_DWORD *)i - 1) = v6 % v2 )
    {
      *i = 0LL;
      i[1] = 0LL;
      *i = -1LL;
      *((_DWORD *)i + 2) = 0;
      i += 2;
      ++v6;
    }
    _InterlockedExchange64(&KiCacheErrataMonitor, (__int64)v4);
    KeSetIntervalProfile(*v4, 0);
    if ( !KeStartProfile((ULONG_PTR)(v4 + 2)) )
      return 0;
  }
  return 1;
}
