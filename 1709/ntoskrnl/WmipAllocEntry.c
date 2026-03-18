/*
 * XREFs of WmipAllocEntry @ 0x1404689D0
 * Callers:
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140545D68 (WmipAllocGuidEntry.c)
 *     WmipAllocDataSource @ 0x140545E04 (WmipAllocDataSource.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x140743190 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407435C4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140192F40 (memset.c)
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
