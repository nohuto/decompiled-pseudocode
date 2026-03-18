/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BDE44 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D26B4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x180208654 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1802086C4 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180208984 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1802089EC (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x180208C00 (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x180208C34 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180208C58 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180208CB0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180209824 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  float v9; // xmm9_4
  float v10; // xmm1_4
  char *v11; // rbx
  char *v12; // rdi
  __int64 v13; // xmm7_8
  __m128i v14; // xmm8
  char *v15; // r12
  __int64 Size; // r15
  bool v17; // al
  __int64 v18; // r15
  __int64 i; // rbx
  __int64 v20; // rbx
  LPVOID v21; // rax
  char *v22; // rbx
  _BYTE *v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h]
  int v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __m128i v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  _QWORD v31[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v32; // [rsp+98h] [rbp-70h]
  _QWORD *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  _QWORD v35[2]; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v36; // [rsp+C8h] [rbp-40h] BYREF
  __m128i v37; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-20h]
  __m128i v39; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v40; // [rsp+108h] [rbp+0h]
  char *v41; // [rsp+188h] [rbp+80h] BYREF
  __int64 v42; // [rsp+190h] [rbp+88h] BYREF

  v41 = (char *)this;
  v6 = 0;
  v7 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 3);
  v27 = 0LL;
  v28 = 0LL;
  std::vector<unsigned char>::reserve(&v27, v7);
  v24 = (_BYTE *)*((_QWORD *)a3 + 3);
  v25 = *((_QWORD *)a3 + 4);
  v26 = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0));
  v29.m128i_i64[0] = v25;
  v29.m128i_i64[1] = v25;
  LODWORD(v30) = 0;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v10 >= 0.0000011920929 )
  {
    v11 = (char *)*((_QWORD *)a2 + 3);
    v12 = (char *)*((_QWORD *)a2 + 4);
    v13 = v30;
    v14 = v29;
    v15 = (char *)*((_QWORD *)&v27 + 1);
    v41 = v11;
    while ( v11 != v12 )
    {
      Size = (unsigned int)Path::Segment::GetSize(*v11);
      v32.m128i_i64[1] = Size;
      v32.m128i_i64[0] = (__int64)v31;
      v33 = v31;
      v36 = v32;
      v34 = 0LL;
      v29 = (__m128i)(unsigned __int64)v31;
      v31[0] = Size;
      v31[1] = v11;
      std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
        &v27,
        &v42,
        v15,
        &v29,
        &v36);
      v38 = v13;
      v37 = v14;
      v17 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v24, &v37);
      v15 = (char *)*((_QWORD *)&v27 + 1);
      if ( v17 )
      {
        Path::Segment::GetControlPoints((_BYTE *)(*((_QWORD *)&v27 + 1) - Size), v35);
        v18 = v35[1];
        for ( i = 0LL; i != v35[0]; ++i )
        {
          v40 = v13;
          v39 = v14;
          if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v24, &v39) )
          {
            *(float *)(v18 + 8 * i) = (float)((float)(1.0 - v9) * *(float *)(v18 + 8 * i))
                                    + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v24)
                                            * v9);
            *(float *)(v18 + 8 * i + 4) = (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v24)
                                                           + 4)
                                                * v9)
                                        + (float)((float)(1.0 - v9) * *(float *)(v18 + 8 * i + 4));
            Path::ControlPointCollection::const_iterator::operator++(&v24);
          }
        }
      }
      Path::SegmentCollection::const_iterator::operator++(&v41);
      v11 = v41;
    }
    v20 = *((_QWORD *)a2 + 6);
    v21 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v21 )
      v22 = (char *)CPathData::CPathData((__int64)v21, v20, &v27);
    else
      v22 = 0LL;
    v41 = v22;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v41);
    if ( v22 )
    {
      *a5 = (struct CPathData *)v22;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C9u);
    }
  }
  else
  {
    v41 = (char *)a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v41);
    *a5 = a2;
  }
  std::vector<unsigned char>::_Tidy((__int64)&v27);
  return v6;
}
