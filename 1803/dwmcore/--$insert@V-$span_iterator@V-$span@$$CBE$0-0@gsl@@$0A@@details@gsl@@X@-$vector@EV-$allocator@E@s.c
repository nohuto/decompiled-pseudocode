/*
 * XREFs of ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180208984
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x180208FE0 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18020B4DC (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180208720 (--$_Insert_range@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@@-$vector@EV-$allocat.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        __m128i *a4,
        __m128i *a5)
{
  char *v5; // rbx
  _QWORD *result; // rax
  __m128i v9; // [rsp+30h] [rbp-28h] BYREF
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = *a4;
  v5 = &a3[-*a1];
  v9 = *a5;
  std::vector<unsigned char>::_Insert_range<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>>(
    (__int64)a1,
    a3,
    &v10,
    &v9);
  result = a2;
  *a2 = &v5[*a1];
  return result;
}
