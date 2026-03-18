/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180150820
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800113A0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x1801518A8 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r14d
  int v7; // r12d
  enum DXGI_MODE_ROTATION v9; // esi
  char v10; // di
  unsigned int v11; // r10d
  int v12; // r11d
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

  v5 = *((_DWORD *)this + 35);
  v7 = v5 & 6;
  v9 = DXGI_MODE_ROTATION_IDENTITY;
  v10 = 0;
  if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
  {
    v13 = *(float *)a2;
    if ( *(float *)a2 >= 0.0 && *((float *)a2 + 5) >= 0.0 )
    {
      v10 = v12;
LABEL_31:
      *a3 = v9;
      *a5 = v12;
      *a4 = v11;
      return v10;
    }
    if ( v7 == 6 )
    {
      v10 = v12;
      if ( v13 < 0.0 )
        v11 = 2;
      if ( *((float *)a2 + 5) < 0.0 )
        v11 |= v12;
      goto LABEL_31;
    }
    if ( (v5 & 0x8001) != 0
      && v13 < 0.0
      && *((float *)a2 + 5) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, a2) )
    {
      v9 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_29:
      v10 = v12;
LABEL_30:
      LOBYTE(v12) = ((unsigned __int8)v12 & (unsigned __int8)v5) != 0 ? v12 : 0;
      goto LABEL_31;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v14 = *((_DWORD *)a2 + 2);
    v15 = *((float *)a2 + 1);
    v16 = *((_DWORD *)a2 + 4);
    v23[1] = *(_DWORD *)a2;
    v23[3] = *((_DWORD *)a2 + 3);
    v17 = *(_OWORD *)((char *)a2 + 24);
    v28 = v11;
    v23[2] = v14;
    v18 = *((_DWORD *)a2 + 5);
    v24 = v17;
    v19 = *(_OWORD *)((char *)a2 + 40);
    v23[4] = v18;
    v20 = *((_DWORD *)a2 + 15);
    v25 = v19;
    v26 = *((_DWORD *)a2 + 14);
    *(float *)v23 = v15;
    v23[5] = v16;
    v27 = v20;
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v23)
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v23) )
    {
      if ( v7 == 6 )
      {
        v10 = v12;
        v9 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v21 > 0.0 )
          v11 = 2;
        if ( v15 < 0.0 )
          v11 |= v12;
        goto LABEL_30;
      }
      if ( v21 > 0.0 && v15 < 0.0 )
      {
        v9 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_29;
      }
      if ( v21 < 0.0 && v15 > 0.0 )
      {
        v9 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_29;
      }
    }
  }
  return v10;
}
