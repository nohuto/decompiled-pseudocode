/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180142220
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18011BC18 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18013FFC4 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$DynArray@PEAVOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180140054 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180141714 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned int *a7,
        __int64 a8)
{
  unsigned int v9; // r8d
  DWORD v12; // r15d
  unsigned int v13; // esi
  char v14; // r12
  char CanFastDisableDesktopPlane; // al
  bool v16; // zf
  char v17; // al
  bool v18; // al
  char v19; // dl
  int v20; // eax
  int v21; // eax
  LONG v22; // xmm0_4
  LONG v23; // xmm0_4
  LONG v24; // xmm0_4
  float v25; // xmm0_4
  LONG v26; // xmm0_4
  LONG v27; // xmm0_4
  LONG v28; // xmm0_4
  LONG v29; // xmm0_4
  LONG v30; // xmm0_4
  LONG v31; // xmm0_4
  LONG v32; // xmm0_4
  __int64 v33; // rcx
  __int128 *v34; // rdx
  __int64 v35; // r8
  __int128 v36; // xmm1
  LONG left; // r10d
  LONG v38; // xmm0_4
  LONG v39; // xmm0_4
  LONG v40; // xmm0_4
  unsigned int v43; // [rsp+34h] [rbp-75h] BYREF
  unsigned int *v44; // [rsp+38h] [rbp-71h]
  COverlayContext *v45; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-61h] BYREF
  struct tagRECT v47; // [rsp+90h] [rbp-19h] BYREF
  char v48; // [rsp+A0h] [rbp-9h] BYREF

  v9 = 0;
  *(_QWORD *)&v47.left = a3;
  v12 = 0;
  v44 = a7;
  v13 = 0;
  if ( *(_DWORD *)(a2 + 24) || *(_DWORD *)(a3 + 24) || (v14 = 0, a5) )
    v14 = 1;
  if ( !a4
    || (CanFastDisableDesktopPlane = COverlayContext::CanFastDisableDesktopPlane((__int64)this, (__int64 **)a2),
        v9 = 0,
        v16 = CanFastDisableDesktopPlane == 0,
        v17 = 1,
        v16) )
  {
    v17 = 0;
  }
  if ( !v14 || v17 )
    goto LABEL_36;
  v13 = 1;
  v43 = 1;
  if ( !*(_DWORD *)(a2 + 24)
    || (v18 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(**(COverlayContext::OverlayPlaneInfo ***)a2),
        v19 = 1,
        !v18) )
  {
    v19 = v9;
  }
  if ( *((_DWORD *)this + 41) <= v9 || (v16 = !COverlayContext::OverlaysEnabled(this), v20 = 4, !v16) )
    v20 = v9;
  *(_DWORD *)a8 = v20;
  *(_DWORD *)(a8 + 52) = 1;
  if ( v19 || (v21 = 1, !(*(_DWORD *)(a2 + 24) + *(_DWORD *)(*(_QWORD *)&v47.left + 24LL))) )
    v21 = v9;
  *(_DWORD *)(a8 + 56) = v21;
  *(_DWORD *)(a8 + 76) = v9;
  *(_DWORD *)(a8 + 96) = 2;
  if ( a5 == (_BYTE)v9 )
  {
    *(float *)&v26 = *((float *)this + 10) + 6291456.25;
    v47.left = v26;
    *(_DWORD *)(a8 + 4) = v26 << 10 >> 11;
    *(float *)&v27 = *((float *)this + 11) + 6291456.25;
    v47.left = v27;
    *(_DWORD *)(a8 + 8) = v27 << 10 >> 11;
    *(float *)&v28 = *((float *)this + 12) + 6291456.25;
    v47.left = v28;
    *(_DWORD *)(a8 + 12) = v28 << 10 >> 11;
    *(float *)&v29 = *((float *)this + 13) + 6291456.25;
    v47.left = v29;
    *(_DWORD *)(a8 + 16) = v29 << 10 >> 11;
    *(float *)&v30 = *((float *)this + 10) + 6291456.25;
    v47.left = v30;
    *(_DWORD *)(a8 + 20) = v30 << 10 >> 11;
    *(float *)&v31 = *((float *)this + 11) + 6291456.25;
    v47.left = v31;
    *(_DWORD *)(a8 + 24) = v31 << 10 >> 11;
    *(float *)&v32 = *((float *)this + 12) + 6291456.25;
    v47.left = v32;
    *(_DWORD *)(a8 + 28) = v32 << 10 >> 11;
    v25 = *((float *)this + 13);
  }
  else
  {
    *(_QWORD *)(a8 + 4) = 0LL;
    *(_DWORD *)(a8 + 12) = *((_DWORD *)this + 18);
    *(_DWORD *)(a8 + 16) = *((_DWORD *)this + 19);
    *(float *)&v22 = *((float *)this + 14) + 6291456.25;
    v47.left = v22;
    *(_DWORD *)(a8 + 20) = v22 << 10 >> 11;
    *(float *)&v23 = *((float *)this + 15) + 6291456.25;
    v47.left = v23;
    *(_DWORD *)(a8 + 24) = v23 << 10 >> 11;
    *(float *)&v24 = *((float *)this + 16) + 6291456.25;
    v47.left = v24;
    *(_DWORD *)(a8 + 28) = v24 << 10 >> 11;
    v25 = *((float *)this + 17);
  }
  *(float *)&v47.left = v25 + 6291456.25;
  *(_DWORD *)(a8 + 32) = v47.left << 10 >> 11;
  if ( a4 == (_BYTE)v9 || v19 )
  {
    *(float *)&v38 = *((float *)this + 14) + 6291456.25;
    v47.left = v38;
    *(_DWORD *)(a8 + 36) = v38 << 10 >> 11;
    *(float *)&v39 = *((float *)this + 15) + 6291456.25;
    v47.left = v39;
    *(_DWORD *)(a8 + 40) = v39 << 10 >> 11;
    *(float *)&v40 = *((float *)this + 16) + 6291456.25;
    v47.left = v40;
    *(_DWORD *)(a8 + 44) = v40 << 10 >> 11;
    *(float *)&v47.left = *((float *)this + 17) + 6291456.25;
    *(_DWORD *)(a8 + 48) = v47.left << 10 >> 11;
LABEL_36:
    *v44 = v13;
    return v12;
  }
  v46 = v9;
  v45 = (COverlayContext *)&v46;
  memset_0(&v47, 0, 0x20uLL);
  v12 = COverlayContext::ComputeDesktopClip((float *)this, a2, &v45);
  if ( (v12 & 0x80000000) == 0 )
  {
    if ( *(_DWORD *)v45 )
    {
      if ( a6 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v45, &v45, &v43, &v47);
        v13 = v43;
        *(struct tagRECT *)(a8 + 36) = v47;
        if ( v13 > 1 )
        {
          v33 = 112LL;
          v34 = (__int128 *)&v48;
          v35 = v13 - 1;
          do
          {
            *(_OWORD *)(a8 + v33) = *(_OWORD *)a8;
            v33 += 112LL;
            *(_OWORD *)(a8 + v33 - 96) = *(_OWORD *)(a8 + 16);
            *(_OWORD *)(a8 + v33 - 80) = *(_OWORD *)(a8 + 32);
            *(_OWORD *)(a8 + v33 - 64) = *(_OWORD *)(a8 + 48);
            *(_OWORD *)(a8 + v33 - 48) = *(_OWORD *)(a8 + 64);
            *(_OWORD *)(a8 + v33 - 32) = *(_OWORD *)(a8 + 80);
            v36 = *v34++;
            *(_OWORD *)(a8 + v33 - 16) = *(_OWORD *)(a8 + 96);
            *(_OWORD *)(a8 + v33 - 76) = v36;
            --v35;
          }
          while ( v35 );
        }
      }
      else
      {
        *(_QWORD *)&v47.right = 0LL;
        *(_QWORD *)&v47.left = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v45, &v47);
        left = v47.left;
        *(_DWORD *)(a8 + 40) = v47.top;
        *(_QWORD *)(a8 + 44) = *(_QWORD *)&v47.right;
        *(_DWORD *)(a8 + 36) = left;
      }
    }
    else
    {
      v13 = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v45);
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xD67u);
  FastRegion::CRegion::FreeMemory((void **)&v45);
  return v12;
}
