/*
 * XREFs of ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18008CB9C
 * Callers:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008AE6C (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18008B774 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1800CE198 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x180174FB4 (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rdi
  size_t v12; // rcx
  void *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rcx

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
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
    if ( v10 )
    {
      if ( v10 > 0x3FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 4 * v10;
      if ( 4 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = (_DWORD *)v11 + v6;
      if ( v14 )
        *v14 = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(v15, (char *)v11, v10);
      throw;
    }
    if ( *(_QWORD *)a1 )
      std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2, 4uLL);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = (char *)v11 + 4 * v7;
    *(_QWORD *)(a1 + 16) = (char *)v11 + 4 * v10;
  }
  else
  {
    if ( v5 )
      *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 4LL;
  }
}
