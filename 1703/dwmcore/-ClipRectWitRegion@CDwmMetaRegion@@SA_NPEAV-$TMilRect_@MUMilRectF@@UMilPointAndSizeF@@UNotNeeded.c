/*
 * XREFs of ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180159F48
 * Callers:
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

char __fastcall CDwmMetaRegion::ClipRectWitRegion(float *a1, HRGN a2, HRGN *a3)
{
  char v6; // bp
  float v7; // xmm0_4
  float v8; // r9d
  float v9; // xmm0_4
  int v10; // r8d
  float v11; // xmm0_4
  HRGN RectRgn; // rdi
  signed int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r8d
  bool v17; // sf
  int v18; // eax
  unsigned int *v19; // r8
  signed int LastError; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  bool v24; // sf
  int v25; // eax
  _DWORD *v26; // rbx
  unsigned int v27; // eax
  int v28; // r9d
  _DWORD *v29; // rcx
  __int64 v30; // r8
  int v31; // rcx^4
  unsigned __int64 v32; // rax
  __m128i v33; // xmm1
  float v35; // [rsp+30h] [rbp-48h]
  void *lpMem[2]; // [rsp+38h] [rbp-40h] BYREF

  lpMem[0] = 0LL;
  v6 = 0;
  SetLastError(0);
  v7 = a1[3] + 6291456.25;
  v8 = v7;
  v9 = a1[2] + 6291456.25;
  v10 = (int)(LODWORD(v9) << 10) >> 11;
  v11 = a1[1] + 6291456.25;
  v35 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v35) << 10) >> 11,
              (int)(LODWORD(v11) << 10) >> 11,
              v10,
              (int)(LODWORD(v8) << 10) >> 11);
  if ( RectRgn )
  {
    SetLastError(0);
    v18 = CombineRgn(RectRgn, RectRgn, a2, 1);
    if ( v18 )
    {
      if ( v18 == 1 )
        goto LABEL_26;
      v25 = HrgnToRgnData(RectRgn, (struct _RGNDATA **)lpMem, v19);
      v26 = lpMem[0];
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x34Fu);
      }
      else
      {
        if ( !lpMem[0] )
          goto LABEL_26;
        v27 = *((_DWORD *)lpMem[0] + 2);
        if ( v27 )
        {
          v28 = 0;
          v6 = 1;
          *(_OWORD *)lpMem = *((_OWORD *)lpMem[0] + 2);
          v29 = v26 + 9;
          v30 = v27;
          do
          {
            if ( (v29[1] - *(v29 - 1)) * (v29[2] - *v29) > v28 )
            {
              v28 = (v29[1] - *(v29 - 1)) * (v29[2] - *v29);
              *(_OWORD *)lpMem = *(_OWORD *)(v29 - 1);
            }
            v29 += 4;
            --v30;
          }
          while ( v30 );
          v31 = HIDWORD(lpMem[1]);
          v32 = (unsigned __int64)lpMem[0] >> 32;
          v33 = _mm_cvtsi32_si128((unsigned int)lpMem[1]);
          *a1 = (float)SLODWORD(lpMem[0]);
          a1[1] = (float)(int)v32;
          *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v33).m128_u32[0];
          a1[3] = (float)v31;
        }
      }
      if ( v26 )
        WPF::ProcessHeapImpl::Free(v26);
    }
    else
    {
      LastError = GetLastError();
      v24 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v24 = LastError < 0;
      }
      if ( !v24 )
        LastError = CheckGUIHandleQuota(v22, v21, v23);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x347u);
    }
  }
  else
  {
    v13 = GetLastError();
    v17 = v13 < 0;
    if ( v13 > 0 )
    {
      v13 = (unsigned __int16)v13 | 0x80070000;
      v17 = v13 < 0;
    }
    if ( !v17 )
      v13 = CheckGUIHandleQuota(v15, v14, v16);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x342u);
  }
LABEL_26:
  if ( a3 )
  {
    *a3 = RectRgn;
  }
  else if ( RectRgn )
  {
    DeleteObject(RectRgn);
  }
  return v6;
}
