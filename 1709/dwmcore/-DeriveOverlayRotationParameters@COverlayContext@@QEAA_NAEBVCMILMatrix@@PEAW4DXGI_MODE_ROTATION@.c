/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801426B4
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x180143A88 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18018F334 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // edi
  enum DXGI_MODE_ROTATION v7; // ebx
  int v8; // r14d
  bool v10; // r15
  unsigned int v11; // r10d
  __int64 v12; // r11
  float v13; // xmm2_4
  int v14; // xmm1_4
  float v15; // xmm6_4
  int v16; // xmm5_4
  __int128 v17; // xmm0
  int v18; // xmm1_4
  __int128 v19; // xmm0
  int v20; // xmm1_4
  float v21; // xmm5_4
  _DWORD v23[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v24; // [rsp+38h] [rbp-48h]
  __int128 v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  unsigned int v28; // [rsp+60h] [rbp-20h]

  v5 = *((_DWORD *)this + 38);
  v7 = DXGI_MODE_ROTATION_IDENTITY;
  v8 = v5 & 6;
  v10 = 1;
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v13 = *(float *)v12;
    if ( *(float *)v12 >= 0.0 && *(float *)(v12 + 20) >= 0.0 )
      goto LABEL_29;
    if ( v8 == 6 )
    {
      if ( v13 < 0.0 )
        v11 = 2;
      if ( *(float *)(v12 + 20) < 0.0 )
        v11 |= 1u;
      goto LABEL_29;
    }
    if ( (v5 & 0x8001) != 0
      && v13 < 0.0
      && *(float *)(v12 + 20) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v12) )
    {
      v7 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_28:
      v10 = (v5 & 1) != 0;
LABEL_29:
      *a4 = v11;
      LOBYTE(v11) = 1;
      *a3 = v7;
      *a5 = v10;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v14 = *(_DWORD *)(v12 + 8);
    v15 = *(float *)(v12 + 4);
    v16 = *(_DWORD *)(v12 + 16);
    v23[1] = *(_DWORD *)v12;
    v23[3] = *(_DWORD *)(v12 + 12);
    v17 = *(_OWORD *)(v12 + 24);
    v28 = v11;
    v23[2] = v14;
    v18 = *(_DWORD *)(v12 + 20);
    v24 = v17;
    v19 = *(_OWORD *)(v12 + 40);
    v23[4] = v18;
    v20 = *(_DWORD *)(v12 + 60);
    v25 = v19;
    v26 = *(_DWORD *)(v12 + 56);
    *(float *)v23 = v15;
    v23[5] = v16;
    v27 = v20;
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v23) )
    {
      if ( !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v23) )
      {
        if ( v8 == 6 )
        {
          v7 = DXGI_MODE_ROTATION_ROTATE90;
          if ( v21 > 0.0 )
            v11 = 2;
          if ( v15 < 0.0 )
            v11 |= 1u;
          goto LABEL_28;
        }
        if ( v21 > 0.0 && v15 < 0.0 )
        {
          v7 = DXGI_MODE_ROTATION_ROTATE270;
          goto LABEL_28;
        }
        if ( v21 < 0.0 && v15 > 0.0 )
        {
          v7 = DXGI_MODE_ROTATION_ROTATE90;
          goto LABEL_28;
        }
      }
    }
  }
  return v11;
}
