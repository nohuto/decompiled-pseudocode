/*
 * XREFs of ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800AFD44
 * Callers:
 *     ?_Getcat@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800AE548 (-_Getcat@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@SA_KPEAPEBVfacet@.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800AFD80 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x1800AD368 (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     _Getdateorder @ 0x1800B3114 (_Getdateorder.c)
 */

__int64 __fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Init(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  try
  {
    std::time_get<char,std::istreambuf_iterator<char>>::_Getvals<char>(a1, 0LL, a2);
    result = Getdateorder(v3);
    *(_DWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Tidy(a1);
    throw;
  }
  return result;
}
