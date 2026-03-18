/*
 * XREFs of ??$rotate@PEAPEAVCColorGradientStop@@@std@@YAPEAPEAVCColorGradientStop@@PEAPEAV1@00@Z @ 0x1801673D8
 * Callers:
 *     ??$_Insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@std@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800722B0 (--$_Insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCColorGradientStop@@@std@@@st.c)
 * Callees:
 *     ??$_Rotate@PEAPEAVCColorGradientStop@@_JPEAV1@@std@@YAXPEAPEAVCColorGradientStop@@00PEA_J0@Z @ 0x180167320 (--$_Rotate@PEAPEAVCColorGradientStop@@_JPEAV1@@std@@YAXPEAPEAVCColorGradientStop@@00PEA_J0@Z.c)
 */

__int64 *__fastcall std::rotate<CColorGradientStop * *>(__int64 *a1, __int64 a2, __int64 *a3)
{
  if ( a1 != (__int64 *)a2 && (__int64 *)a2 != a3 )
    std::_Rotate<CColorGradientStop * *,__int64,CColorGradientStop *>(a1, a2, a3);
  return &a1[((__int64)a3 - a2) >> 3];
}
