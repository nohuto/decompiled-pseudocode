/*
 * XREFs of ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180178A58
 * Callers:
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DA1A8 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18007FCC8 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801CD110 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

void __fastcall CDwmMetaRegion::ClipRect(float *a1, float *a2)
{
  float v4; // xmm0_4
  float v5; // r9d
  float v6; // xmm0_4
  int v7; // r8d
  float v8; // xmm0_4
  HRGN RectRgn; // rsi
  signed int LastError; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  bool v14; // sf
  float v15; // xmm0_4
  float v16; // r9d
  float v17; // xmm0_4
  int v18; // r8d
  float v19; // xmm0_4
  HRGN v20; // rbp
  signed int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  int v24; // r8d
  bool v25; // sf
  int v26; // eax
  unsigned int *v27; // r8
  signed int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // r8d
  bool v32; // sf
  int v33; // eax
  _DWORD *v34; // rdi
  unsigned int v35; // eax
  int v36; // r8d
  _DWORD *v37; // rdx
  __int64 v38; // r9
  int v39; // ecx
  int v40; // rcx^4
  unsigned __int64 v41; // rax
  __m128i v42; // xmm1
  float v43; // [rsp+30h] [rbp-48h]
  float v44; // [rsp+30h] [rbp-48h]
  void *lpMem[2]; // [rsp+38h] [rbp-40h] BYREF

  lpMem[0] = 0LL;
  SetLastError(0);
  v4 = a1[3] + 6291456.25;
  v5 = v4;
  v6 = a1[2] + 6291456.25;
  v7 = (int)(LODWORD(v6) << 10) >> 11;
  v8 = a1[1] + 6291456.25;
  v43 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v43) << 10) >> 11,
              (int)(LODWORD(v8) << 10) >> 11,
              v7,
              (int)(LODWORD(v5) << 10) >> 11);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v14 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v14 = LastError < 0;
    }
    if ( !v14 )
      LastError = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x23Eu);
    return;
  }
  SetLastError(0);
  v15 = a2[3] + 6291456.25;
  v16 = v15;
  v17 = a2[2] + 6291456.25;
  v18 = (int)(LODWORD(v17) << 10) >> 11;
  v19 = a2[1] + 6291456.25;
  v44 = *a2 + 6291456.25;
  v20 = CreateRectRgn(
          (int)(LODWORD(v44) << 10) >> 11,
          (int)(LODWORD(v19) << 10) >> 11,
          v18,
          (int)(LODWORD(v16) << 10) >> 11);
  if ( !v20 )
  {
    v21 = GetLastError();
    v25 = v21 < 0;
    if ( v21 > 0 )
    {
      v21 = (unsigned __int16)v21 | 0x80070000;
      v25 = v21 < 0;
    }
    if ( !v25 )
      v21 = CheckGUIHandleQuota(v23, v22, v24);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x243u);
    goto LABEL_35;
  }
  SetLastError(0);
  v26 = CombineRgn(RectRgn, RectRgn, v20, 4);
  if ( !v26 )
  {
    v28 = GetLastError();
    v32 = v28 < 0;
    if ( v28 > 0 )
    {
      v28 = (unsigned __int16)v28 | 0x80070000;
      v32 = v28 < 0;
    }
    if ( !v32 )
      v28 = CheckGUIHandleQuota(v30, v29, v31);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x248u);
    goto LABEL_35;
  }
  if ( v26 == 1 )
  {
    *a1 = 0.0;
    a1[2] = 0.0;
    a1[1] = 0.0;
    a1[3] = 0.0;
    goto LABEL_35;
  }
  v33 = HrgnToRgnData(RectRgn, (struct _RGNDATA **)lpMem, v27);
  v34 = lpMem[0];
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x254u);
LABEL_33:
    if ( v34 )
      operator delete(v34);
    goto LABEL_35;
  }
  if ( lpMem[0] )
  {
    v35 = *((_DWORD *)lpMem[0] + 2);
    if ( v35 )
    {
      v36 = 0;
      *(_OWORD *)lpMem = *((_OWORD *)lpMem[0] + 2);
      v37 = v34 + 9;
      v38 = v35;
      do
      {
        v39 = (v37[1] - *(v37 - 1)) * (v37[2] - *v37);
        if ( v39 > v36 )
          *(_OWORD *)lpMem = *(_OWORD *)(v37 - 1);
        v37 += 4;
        if ( v39 <= v36 )
          v39 = v36;
        v36 = v39;
        --v38;
      }
      while ( v38 );
      v40 = HIDWORD(lpMem[1]);
      v41 = (unsigned __int64)lpMem[0] >> 32;
      v42 = _mm_cvtsi32_si128((unsigned int)lpMem[1]);
      *a1 = (float)SLODWORD(lpMem[0]);
      a1[1] = (float)(int)v41;
      *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v42).m128_u32[0];
      a1[3] = (float)v40;
    }
    goto LABEL_33;
  }
LABEL_35:
  DeleteObject(RectRgn);
  if ( v20 )
    DeleteObject(v20);
}
