/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E9B0
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179018 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CDrawingContext::CombineMove(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  bool v5; // zf
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // eax
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float *v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  int v26; // eax
  CMILCOMBase *v28; // [rsp+30h] [rbp-40h] BYREF
  __int128 v29; // [rsp+38h] [rbp-38h]
  __int128 v30; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v28 = (CMILCOMBase *)a2;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v29 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 6640), v7 = 0LL, !v6) )
  {
LABEL_8:
    v11 = (_QWORD *)(a1 + 6616);
    v12 = *(_DWORD *)(a1 + 6640);
    v13 = v12 + 1;
    v14 = v12 + 1 < v12 ? 0x80070216 : 0;
    if ( v12 + 1 < v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
    }
    else if ( v13 > *(_DWORD *)(a1 + 6636) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 8u, 1, &v28);
      v14 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v11 + 8LL * v12) = v28;
      *(_DWORD *)(a1 + 6640) = v13;
    }
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1DC2u);
    else
      CMILCOMBase::InternalAddRef(v28);
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
    v15 = CDwmMetaRegion::CombineRegions(*(HRGN *)(v9 + 48), *(HRGN *)(a2 + 48));
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1DAFu);
    }
    else
    {
      LODWORD(v16) = *((_DWORD *)v28 + 7) ^ _xmm;
      LODWORD(v17) = *((_DWORD *)v28 + 6) ^ _xmm;
      v18 = *(float *)&v29 + v17;
      v19 = *((float *)&v29 + 1) + v16;
      v20 = *((float *)&v29 + 3);
      v21 = *((float *)&v29 + 2) + v17;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 6616) + 8 * v10) + 32LL) = v30;
      v22 = v20 + v16;
      v23 = *(float **)(*(_QWORD *)(a1 + 6616) + 8 * v10);
      if ( v18 > v23[8] )
        v23[8] = v18;
      if ( v19 > v23[9] )
        v23[9] = v19;
      v24 = v23[10];
      if ( v24 > v21 )
      {
        v23[10] = v21;
        v24 = v21;
      }
      v25 = v23[11];
      if ( v25 > v22 )
      {
        v23[11] = v22;
        v25 = v22;
        v24 = v23[10];
      }
      if ( v24 <= v23[8] || v25 <= v23[9] )
      {
        v23[11] = 0.0;
        v23[10] = 0.0;
        v23[9] = 0.0;
        v23[8] = 0.0;
      }
    }
  }
  return (unsigned int)v14;
}
