/*
 * XREFs of ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801A4584
 * Callers:
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801A50D0 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORS.c)
 * Callees:
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801A4250 (--$_Insert_range@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@@-$vector@MV-$allocat.c)
 */

_QWORD *__fastcall std::vector<float>::insert<gsl::details::span_iterator<gsl::span<float const,-1>,0>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        __m128i *a4,
        __m128i *a5)
{
  __int64 v6; // rbx
  __m128i v9; // [rsp+30h] [rbp-28h] BYREF
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = *a4;
  v6 = ((__int64)a3 - *a1) >> 2;
  v9 = *a5;
  std::vector<float>::_Insert_range<gsl::details::span_iterator<gsl::span<float const,-1>,0>>(
    (__int64)a1,
    a3,
    &v10,
    &v9);
  *a2 = *a1 + 4 * v6;
  return a2;
}
