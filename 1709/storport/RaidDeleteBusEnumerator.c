/*
 * XREFs of RaidDeleteBusEnumerator @ 0x1C00131A4
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012868 (RaidAdapterRescanBus.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C0012990 (RaUnitWaitForRemoveLock.c)
 *     RaidBusEnumeratorFreeUnitResources @ 0x1C00129C4 (RaidBusEnumeratorFreeUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0015E8C (StorDeleteScsiIdentity.c)
 *     RaidDeleteUnit @ 0x1C001842C (RaidDeleteUnit.c)
 */

void __fastcall RaidDeleteBusEnumerator(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    RaUnitWaitForRemoveLock(*(_QWORD *)(a1 + 56));
    RaidDeleteUnit(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  RaidBusEnumeratorFreeUnitResources(a1);
  v3 = a1 + 120;
  while ( *(_QWORD *)v3 != v3 )
  {
    v4 = *(__int64 **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    StorDeleteScsiIdentity(v4 + 2);
    ExFreePoolWithTag(v4 - 2, 0x74456152u);
  }
}
