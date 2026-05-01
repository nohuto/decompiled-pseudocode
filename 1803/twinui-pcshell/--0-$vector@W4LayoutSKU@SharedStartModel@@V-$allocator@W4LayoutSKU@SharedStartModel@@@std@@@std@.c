/*
 * XREFs of ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18014A5F4
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18014ADF4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

void **__fastcall std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
        void **a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbx
  void *v5; // rax
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx

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
      std::_Xlength_error("vector<T> too long");
    v5 = std::_Allocate<std::_Default_allocate_traits<1>>(v4, 4uLL);
    *a1 = v5;
    a1[1] = v5;
    v6 = (char *)*a1;
    a1[2] = (char *)*a1 + 4 * v4;
    try
    {
      v7 = v6;
      v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      memmove(v6, *(const void **)a2, v8);
      a1[1] = &v7[v8];
    }
    catch ( ... )
    {
      std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
