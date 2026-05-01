/*
 * XREFs of ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18008C53C
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008AB7C (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  void *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  size_t v9; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v5 = 4 * v4;
    if ( 4 * v4 < 0x1000 )
    {
      v7 = operator new(4 * v4);
    }
    else
    {
      if ( v5 + 39 < v5 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v6 = operator new(v5 + 39);
      v7 = (_QWORD *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v7 - 1) = v6;
    }
    *a1 = (__int64)v7;
    a1[1] = (__int64)v7;
    a1[2] = v5 + *a1;
    v8 = *a1;
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove((void *)*a1, *(const void **)a2, v9);
    a1[1] = v9 + v8;
  }
  return a1;
}
