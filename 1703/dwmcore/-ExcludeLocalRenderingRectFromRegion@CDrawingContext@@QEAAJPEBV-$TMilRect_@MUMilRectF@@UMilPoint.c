/*
 * XREFs of ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18014C4E4
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDrawingContext::ExcludeLocalRenderingRectFromRegion(__int64 a1, __int64 a2, __int64 a3, HRGN a4)
{
  __m128 v4; // xmm2
  signed int v5; // ebx
  __int128 *v8; // r11
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  unsigned __int32 v12; // ecx
  HRGN RectRgn; // rdi
  signed int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r8d
  signed int LastError; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r8d
  float v23; // [rsp+30h] [rbp-30h]
  float v24; // [rsp+30h] [rbp-30h]
  float v25; // [rsp+30h] [rbp-30h]
  float v26; // [rsp+30h] [rbp-30h]
  float v27; // [rsp+38h] [rbp-28h] BYREF
  float v28; // [rsp+3Ch] [rbp-24h]
  float v29; // [rsp+40h] [rbp-20h]
  float v30; // [rsp+44h] [rbp-1Ch]
  __int128 v31; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0;
  if ( *(_BYTE *)(a1 + 6772) && qword_18023E528 && CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
  {
    v31 = *v8;
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)&v31, &v27);
    SetLastError(0);
    if ( (LODWORD(v30) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4.m128_f32[0] = (float)(int)v30 - v30;
      v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
      v9 = (int)v30 - v4.m128_i32[0];
    }
    else
    {
      v23 = v30 + 6291456.25;
      v9 = (int)(LODWORD(v23) << 10) >> 11;
    }
    if ( (LODWORD(v29) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4.m128_f32[0] = (float)(int)v29 - v29;
      v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
      v10 = (int)v29 - v4.m128_i32[0];
    }
    else
    {
      v24 = v29 + 6291456.25;
      v10 = (int)(LODWORD(v24) << 10) >> 11;
    }
    if ( (LODWORD(v28) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4.m128_f32[0] = (float)(int)v28 - v28;
      v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
      v11 = (int)v28 - v4.m128_i32[0];
    }
    else
    {
      v25 = v28 + 6291456.25;
      v11 = (int)(LODWORD(v25) << 10) >> 11;
    }
    if ( (LODWORD(v27) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4.m128_f32[0] = (float)(int)v27 - v27;
      v12 = (int)v27 - _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v26 = v27 + 6291456.25;
      v12 = (int)(LODWORD(v26) << 10) >> 11;
    }
    RectRgn = CreateRectRgn(v12, v11, v10, v9);
    if ( RectRgn )
    {
      SetLastError(0);
      if ( !CombineRgn(a4, a4, RectRgn, 4) )
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        if ( v5 >= 0 )
          v5 = CheckGUIHandleQuota(v20, v19, v21);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1F9Cu);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v14 = GetLastError();
      v5 = v14;
      if ( v14 > 0 )
        v5 = (unsigned __int16)v14 | 0x80070000;
      if ( v5 >= 0 )
        v5 = CheckGUIHandleQuota(v16, v15, v17);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1F97u);
    }
  }
  return (unsigned int)v5;
}
