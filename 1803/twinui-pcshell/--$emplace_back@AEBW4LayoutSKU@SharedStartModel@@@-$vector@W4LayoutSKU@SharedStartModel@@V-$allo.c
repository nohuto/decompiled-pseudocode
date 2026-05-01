/*
 * XREFs of ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18014A27C
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18014AA84 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18014ACC8 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x18019BCB0 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1802FCD2C (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@AEAAXQEAW4LayoutSKU@SharedStartModel@@_K1@Z @ 0x18014BCFC (-_Change_array@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@.c)
 */

__int64 __fastcall std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // r15
  char *v13; // [rsp+70h] [rbp+18h]

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
    if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
    v9 = v8 >> 1;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 4uLL);
    v12 = v11;
    v13 = v11;
    try
    {
      *(_DWORD *)&v11[4 * v7] = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v10, 4uLL);
      throw;
    }
    return std::vector<enum SharedStartModel::LayoutSKU>::_Change_array(a1, v12, v7 + 1, v10, -2LL);
  }
  else
  {
    result = (unsigned int)*a2;
    *v5 = result;
    *(_QWORD *)(a1 + 8) += 4LL;
  }
  return result;
}
