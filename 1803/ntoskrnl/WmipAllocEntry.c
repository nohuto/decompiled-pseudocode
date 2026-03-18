/*
 * XREFs of WmipAllocEntry @ 0x1405FF70C
 * Callers:
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x1405FF6BC (WmipAllocDataSource.c)
 *     WmipAddMofResource @ 0x140620EBC (WmipAddMofResource.c)
 *     WmipAllocGuidEntry @ 0x140642BE8 (WmipAllocGuidEntry.c)
 *     WmipUpdateAddGuid @ 0x1407A4DC4 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A51EC (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
