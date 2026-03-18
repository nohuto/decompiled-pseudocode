/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014AE08
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015A1A4 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CDrawingContext::CombineMove(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  bool v5; // zf
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edx
  _QWORD *v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ebx
  __int64 v14; // rsi
  int v15; // eax
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float *v23; // rcx
  int v24; // eax
  CBitmapOfDeviceBitmaps *v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]
  __int128 v28; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v26 = (CBitmapOfDeviceBitmaps *)a2;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v27 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 6576), v7 = 0LL, !v6) )
  {
LABEL_7:
    v9 = (unsigned int)v26;
    v10 = (_QWORD *)(a1 + 6552);
    v11 = *(unsigned int *)(a1 + 6576);
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
      v9 = v11 + 1;
    v13 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
    if ( v12 < (unsigned int)v11 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v9 > *(_DWORD *)(a1 + 6572) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10, 8u, 1, &v26);
      v13 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v10 + 8 * v11) = v26;
      *(_DWORD *)(a1 + 6576) = v9;
    }
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1F0Fu);
    else
      CBitmapOfDeviceBitmaps::AddRef(v26);
  }
  else
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 6552) + 8 * v7);
      if ( *(_QWORD *)(v8 + 48) )
      {
        if ( *(float *)(v8 + 24) == *(float *)(a2 + 24) && *(float *)(v8 + 28) == *(float *)(a2 + 28) )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_7;
    }
    v14 = (unsigned int)v7;
    v15 = CDwmMetaRegion::CombineRegions(*(HRGN *)(v8 + 48), *(HRGN *)(a2 + 48));
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1EFCu);
    }
    else
    {
      LODWORD(v16) = *((_DWORD *)v26 + 6) ^ _xmm;
      LODWORD(v17) = *((_DWORD *)v26 + 7) ^ _xmm;
      v18 = *(float *)&v27 + v16;
      v19 = *((float *)&v27 + 1) + v17;
      v20 = *((float *)&v27 + 3);
      v21 = *((float *)&v27 + 2) + v16;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 6552) + 8 * v14) + 32LL) = v28;
      v22 = v20 + v17;
      v23 = *(float **)(*(_QWORD *)(a1 + 6552) + 8 * v14);
      if ( v18 > v23[8] )
        v23[8] = v18;
      if ( v19 > v23[9] )
        v23[9] = v19;
      if ( v23[10] > v21 )
        v23[10] = v21;
      if ( v23[11] > v22 )
        v23[11] = v22;
      if ( v23[10] <= v23[8] || v23[11] <= v23[9] )
      {
        v23[11] = 0.0;
        v23[10] = 0.0;
        v23[9] = 0.0;
        v23[8] = 0.0;
      }
    }
  }
  return (unsigned int)v13;
}
