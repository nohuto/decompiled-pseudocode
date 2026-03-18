/*
 * XREFs of IoReserveDependency @ 0x140692970
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PipSetDependency @ 0x140693418 (PipSetDependency.c)
 */

__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v6 = a1;
    v7 = 1;
    v5 = 0;
    v8 = a2;
    v9 = a3;
    PnpAcquireDependencyRelationsLock(1);
    v3 = PipSetDependency(&v5, &v7);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
