/*
 * XREFs of ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18008EB84
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008D1F4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

unsigned __int64 *__fastcall std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbx
  void *v5; // rax
  void *v6; // rax
  void *v7; // rdi
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
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v5 = std::_Allocate(v4, 4uLL);
    *a1 = (unsigned __int64)v5;
    a1[1] = (unsigned __int64)v5;
    v6 = (void *)*a1;
    a1[2] = *a1 + 4 * v4;
    try
    {
      v7 = v6;
      v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      memmove(v6, *(const void **)a2, v8);
      a1[1] = (unsigned __int64)v7 + v8;
    }
    catch ( ... )
    {
      std::vector<enum SharedStartModel::LayoutSKU>::~vector<enum SharedStartModel::LayoutSKU>(a1);
      throw;
    }
  }
  return a1;
}
