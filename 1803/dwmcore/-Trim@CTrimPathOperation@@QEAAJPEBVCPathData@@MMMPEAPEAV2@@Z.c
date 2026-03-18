/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18020C1D8
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18018FC4C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800DD3CB (fmodf_0.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18018FB94 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1802089EC (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180208CB0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180209330 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18020B4A4 (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18020B674 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18020C008 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  __int64 v6; // r15
  unsigned int v8; // esi
  struct CPathData *v9; // rbx
  float v10; // xmm6_4
  float v11; // xmm10_4
  int v13; // r9d
  float v14; // xmm2_4
  float v15; // xmm1_4
  LPVOID v16; // rax
  __int64 v17; // rax
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  CPathLengthOperation *v22; // rax
  float Length; // xmm0_4
  char *v24; // rbx
  char *v25; // rdi
  float v26; // xmm1_4
  char v27; // al
  int v28; // xmm1_4
  const struct Path::Segment *v29; // rdx
  char v30; // al
  LPVOID v31; // rax
  __int64 v32; // rax
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  struct CPathData *v35; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  char *i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v39[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = *((_QWORD *)a2 + 6);
  v8 = 0;
  v9 = 0LL;
  v10 = fminf(1.0, fmaxf(a3, 0.0));
  v35 = 0LL;
  v11 = fminf(1.0, fmaxf(a4, 0.0));
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v13 = -2003304315;
    v34 = 162;
LABEL_35:
    v8 = v13;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v34);
    goto LABEL_36;
  }
  v14 = v11 - v10;
  if ( (float)(v11 - v10) < 0.0 )
    v14 = v14 + 1.0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v35, (__int64)a2);
    v9 = v35;
    goto LABEL_36;
  }
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
  if ( v15 >= 0.0000011920929 )
  {
    v18 = fmodf_0(v10 + a5, 1.0);
    v19 = fmodf_0(v11 + a5, 1.0);
    v20 = v19;
    if ( v18 < 0.0 )
      v18 = v18 + 1.0;
    if ( v19 < 0.0 )
      v20 = v19 + 1.0;
    *((_BYTE *)this + 396) = 0;
    if ( v18 > v20 )
    {
      v21 = v18;
      *((_BYTE *)this + 396) = 1;
      v18 = v20;
      v20 = v21;
    }
    v22 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v39);
    Length = CPathLengthOperation::GetLength(v22, a2);
    *((float *)this + 7) = Length * v20;
    *((float *)this + 6) = Length * v18;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 11) = 0;
    *((_BYTE *)this + 397) = 1;
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    v24 = (char *)*((_QWORD *)a2 + 3);
    v25 = (char *)*((_QWORD *)a2 + 4);
    for ( i = v24; v24 != v25; v24 = i )
    {
      if ( *v24 == 1 && v24[2] )
      {
        v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v24 + 1)) & _xmm);
        if ( v26 >= 0.0000011920929 )
        {
          Path::Segment::Segment(&v37, 2);
          v27 = v24[1];
          v28 = *((_DWORD *)this + 14);
          DWORD1(v37) = *((_DWORD *)v24 + 1);
          HIDWORD(v37) = *((_DWORD *)this + 15);
          DWORD2(v37) = v28;
          BYTE1(v37) = v27;
          CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v37);
        }
        v29 = (const struct Path::Segment *)&v36;
        v36 = *(_QWORD *)v24;
        v30 = *((_BYTE *)this + 397);
        HIDWORD(v36) = 0;
        BYTE2(v36) = v30;
      }
      else
      {
        v29 = (const struct Path::Segment *)v24;
      }
      if ( !CTrimPathOperation::ProcessSegment(this, v29) )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v31 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v31 )
      v32 = CPathData::CPathData((__int64)v31, v6, this);
    else
      v32 = 0LL;
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v35, v32);
    v9 = v35;
    if ( !v35 )
    {
      v34 = 242;
      goto LABEL_34;
    }
  }
  else
  {
    v16 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v16 )
    {
      v37 = 0LL;
      v17 = CPathData::CPathData((__int64)v16, v6, &v37);
    }
    else
    {
      v17 = 0LL;
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v35, v17);
    v9 = v35;
    if ( !v35 )
    {
      v34 = 179;
LABEL_34:
      v13 = -2147024882;
      goto LABEL_35;
    }
  }
LABEL_36:
  *a6 = v9;
  return v8;
}
