/*
 * XREFs of WmipAllocEntry @ 0x1405A125C
 * Callers:
 *     WmipAllocDataSource @ 0x1405A0150 (WmipAllocDataSource.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x1405A11C0 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x140709170 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407095A4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
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
