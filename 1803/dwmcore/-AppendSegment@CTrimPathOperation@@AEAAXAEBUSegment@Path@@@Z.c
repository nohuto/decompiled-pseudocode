/*
 * XREFs of ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18020B4DC
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18020C008 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18020C564 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18020C610 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1802086C4 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180208984 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 */

void __fastcall CTrimPathOperation::AppendSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  unsigned int Size; // eax
  char *v5; // r8
  __m128i v6; // xmm0
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v8; // [rsp+40h] [rbp-20h] BYREF
  __m128i v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF

  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  v5 = (char *)*((_QWORD *)this + 1);
  v8.m128i_i64[0] = (__int64)v7;
  v8.m128i_i64[1] = Size;
  v6 = v8;
  v7[0] = Size;
  v8 = (__m128i)(unsigned __int64)v7;
  v9 = v6;
  v7[1] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
    this,
    &v10,
    v5,
    &v8,
    &v9);
}
