/*
 * XREFs of ?_Tidy@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@AEAAXXZ @ 0x18014BE30
 * Callers:
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU____::_1_::catch$57 @ 0x18014A6B9 (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel-_ea_18014A6B9.c)
 *     ??1?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@XZ @ 0x18014A82C (--1-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18014ADF4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2, 4uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
