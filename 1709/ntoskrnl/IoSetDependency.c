/*
 * XREFs of IoSetDependency @ 0x1406BE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipSetDependency @ 0x1406BF0BC (PipSetDependency.c)
 */

__int64 __fastcall IoSetDependency(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  if ( a1 && a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 == a2 )
      return 3221225473LL;
    v5 = 0;
    v7 = 0;
    v6 = a1;
    v8 = a2;
    v9 = a3;
    PnpAcquireDependencyRelationsLock(1);
    v4 = PipSetDependency(&v5, &v7);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    if ( v4 >= 0 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
