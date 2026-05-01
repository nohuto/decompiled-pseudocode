/*
 * XREFs of ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18008F20C
 * Callers:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008D420 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18008DD44 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1800F1100 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1801C0714 (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // r14
  char *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // [rsp+70h] [rbp+18h]

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = v6 + 1;
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
    v9 = v8 >> 1;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate(v10, 4uLL);
    v12 = v11;
    v18 = v11;
    try
    {
      v13 = &v11[4 * v6];
      if ( v13 )
        *(_DWORD *)v13 = *a2;
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(v14, v18, v10);
      throw;
    }
    v15 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_24;
    v16 = (__int64)(*(_QWORD *)(a1 + 16) - v15) >> 2;
    if ( v16 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v16 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v15);
LABEL_24:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = &v12[4 * v7];
        *(_QWORD *)(a1 + 16) = &v12[4 * v10];
        return;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v17 = *(_QWORD *)(v15 - 8);
        if ( v17 < v15 )
        {
          v15 = v15 - v17 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v17;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15);
    __debugbreak();
  }
  if ( v5 )
    *v5 = *a2;
  *(_QWORD *)(a1 + 8) += 4LL;
}
