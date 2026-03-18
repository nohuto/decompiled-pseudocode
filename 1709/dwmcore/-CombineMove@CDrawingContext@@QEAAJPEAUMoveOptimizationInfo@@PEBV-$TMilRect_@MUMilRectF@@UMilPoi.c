/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013C240
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003B1F4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18013EA64 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F7D4 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CDrawingContext::CombineMove(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  bool v5; // zf
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // edx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed int v15; // ebx
  signed int v16; // eax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float *v24; // rcx
  signed int v25; // eax
  CMILCOMBase *v27; // [rsp+30h] [rbp-40h] BYREF
  __int128 v28; // [rsp+38h] [rbp-38h]
  __int128 v29; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v27 = (CMILCOMBase *)a2;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v28 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 6640), v7 = 0LL, !v6) )
  {
LABEL_8:
    v11 = (unsigned int)v27;
    v12 = (_QWORD *)(a1 + 6616);
    v13 = *(unsigned int *)(a1 + 6640);
    v14 = v13 + 1;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
      v11 = v13 + 1;
    v15 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
    if ( v14 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xB5u);
    }
    else if ( v11 > *(_DWORD *)(a1 + 6636) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 8u, 1, &v27);
      v15 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v12 + 8 * v13) = v27;
      *(_DWORD *)(a1 + 6640) = v11;
    }
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1CBFu);
    else
      CMILCOMBase::InternalAddRef(v27);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 6616);
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8 * v7);
      v10 = (unsigned int)v7;
      if ( *(_QWORD *)(v9 + 48) )
      {
        if ( *(float *)(v9 + 24) == *(float *)(a2 + 24) && *(float *)(v9 + 28) == *(float *)(a2 + 28) )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_8;
    }
    v16 = CDwmMetaRegion::CombineRegions(*(HRGN *)(v9 + 48), *(HRGN *)(a2 + 48));
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x1CACu);
    }
    else
    {
      LODWORD(v17) = *((_DWORD *)v27 + 6) ^ _xmm;
      LODWORD(v18) = *((_DWORD *)v27 + 7) ^ _xmm;
      v19 = *(float *)&v28 + v17;
      v20 = *((float *)&v28 + 1) + v18;
      v21 = *((float *)&v28 + 3);
      v22 = *((float *)&v28 + 2) + v17;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 6616) + 8 * v10) + 32LL) = v29;
      v23 = v21 + v18;
      v24 = *(float **)(*(_QWORD *)(a1 + 6616) + 8 * v10);
      if ( v19 > v24[8] )
        v24[8] = v19;
      if ( v20 > v24[9] )
        v24[9] = v20;
      if ( v24[10] > v22 )
        v24[10] = v22;
      if ( v24[11] > v23 )
        v24[11] = v23;
      if ( v24[10] <= v24[8] || v24[11] <= v24[9] )
      {
        v24[11] = 0.0;
        v24[10] = 0.0;
        v24[9] = 0.0;
        v24[8] = 0.0;
      }
    }
  }
  return (unsigned int)v15;
}
