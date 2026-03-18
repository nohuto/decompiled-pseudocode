/*
 * XREFs of PnpProcessDependencyRelations @ 0x14055C6B8
 * Callers:
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1405529AC (PiGetDependentList.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PiEnumerateDependentListEntry @ 0x1406BE75C (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR a5)
{
  __int64 v5; // rbx
  int v9; // edi
  __int64 *DependentList; // rsi
  __int64 *v11; // rbx
  ULONG_PTR BugCheckParameter3; // rbp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  PnpAcquireDependencyRelationsLock(0);
  DependentList = PiGetDependentList(v5);
  v11 = (__int64 *)*DependentList;
  if ( (__int64 *)*DependentList != DependentList )
  {
    BugCheckParameter3 = a5;
    while ( 1 )
    {
      PiEnumerateDependentListEntry(v11, &v16, &v17);
      v11 = (__int64 *)*v11;
      if ( v16 )
        break;
LABEL_12:
      if ( v11 == DependentList )
        goto LABEL_2;
    }
    v14 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
    v15 = *(_DWORD *)(v14 + 300);
    if ( v15 < 782 || v15 > 783 )
    {
      if ( !PipIsDevNodeDNStarted(v14) )
        goto LABEL_11;
    }
    else if ( ((*(_DWORD *)(v14 + 304) - 786) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_11;
    }
    v9 = PnpProcessRelation(v14, a2, a3, a4, BugCheckParameter3);
LABEL_11:
    if ( v9 < 0 )
      goto LABEL_2;
    goto LABEL_12;
  }
LABEL_2:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return (unsigned int)v9;
}
