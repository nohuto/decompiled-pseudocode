/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180150374
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180075BB8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x180131E50 (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18014EA28 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18014EAC8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801500EC (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        unsigned int *a6,
        __int64 a7)
{
  unsigned int v8; // r9d
  int v11; // r15d
  unsigned int v12; // esi
  char v13; // r12
  char CanFastDisableDesktopPlane; // al
  bool v15; // zf
  char v16; // al
  bool v17; // al
  char v18; // dl
  char v19; // al
  int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // rcx
  __int128 *v33; // rdx
  __int64 v34; // r8
  __int128 v35; // xmm1
  LONG left; // r10d
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v41; // [rsp+30h] [rbp-81h]
  float v42; // [rsp+30h] [rbp-81h]
  char v43; // [rsp+34h] [rbp-7Dh]
  unsigned int v45; // [rsp+38h] [rbp-79h] BYREF
  unsigned int *v46; // [rsp+40h] [rbp-71h]
  COverlayContext *v47; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-59h] BYREF
  struct tagRECT v49; // [rsp+A0h] [rbp-11h] BYREF
  char v50; // [rsp+B0h] [rbp-1h] BYREF

  v8 = 0;
  v43 = a4;
  v11 = 0;
  v46 = a6;
  v12 = 0;
  if ( *(_DWORD *)(a2 + 24) || (v13 = 0, a4) )
    v13 = 1;
  if ( !a3
    || (CanFastDisableDesktopPlane = COverlayContext::CanFastDisableDesktopPlane((__int64)this, a2),
        v8 = 0,
        v15 = CanFastDisableDesktopPlane == 0,
        v16 = 1,
        v15) )
  {
    v16 = 0;
  }
  if ( !v13 || v16 )
    goto LABEL_35;
  v12 = 1;
  v45 = 1;
  if ( !*(_DWORD *)(a2 + 24)
    || (v17 = COverlayContext::RequiresFrontPlane(**(struct COverlayContext::OverlayPlaneInfo ***)a2), v18 = 1, !v17) )
  {
    v18 = v8;
  }
  if ( *((_DWORD *)this + 38) <= v8 || (v15 = !COverlayContext::OverlaysEnabled(this), v19 = 1, !v15) )
    v19 = v8;
  *(_DWORD *)(a7 + 52) = 1;
  *(_DWORD *)a7 = v19 != 0 ? 4 : 0;
  if ( v18 || (v20 = 1, *(_DWORD *)(a2 + 24) == v8) )
    v20 = v8;
  *(_DWORD *)(a7 + 56) = v20;
  *(_DWORD *)(a7 + 76) = v8;
  *(_DWORD *)(a7 + 96) = 2;
  if ( v43 == (_BYTE)v8 )
  {
    v25 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 4) = (int)(LODWORD(v25) << 10) >> 11;
    v26 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 8) = (int)(LODWORD(v26) << 10) >> 11;
    v27 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 12) = (int)(LODWORD(v27) << 10) >> 11;
    v28 = *((float *)this + 9) + 6291456.25;
    *(_DWORD *)(a7 + 16) = (int)(LODWORD(v28) << 10) >> 11;
    v29 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v29) << 10) >> 11;
    v30 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v30) << 10) >> 11;
    v31 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v31) << 10) >> 11;
    v24 = *((float *)this + 9);
  }
  else
  {
    *(_QWORD *)(a7 + 4) = 0LL;
    *(_DWORD *)(a7 + 12) = *((_DWORD *)this + 14);
    *(_DWORD *)(a7 + 16) = *((_DWORD *)this + 15);
    v21 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v22) << 10) >> 11;
    v23 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v23) << 10) >> 11;
    v24 = *((float *)this + 13);
  }
  v41 = v24 + 6291456.25;
  *(_DWORD *)(a7 + 32) = (int)(LODWORD(v41) << 10) >> 11;
  if ( a3 == (_BYTE)v8 || v18 )
  {
    v37 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 36) = (int)(LODWORD(v37) << 10) >> 11;
    v38 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 40) = (int)(LODWORD(v38) << 10) >> 11;
    v39 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 44) = (int)(LODWORD(v39) << 10) >> 11;
    v42 = *((float *)this + 13) + 6291456.25;
    *(_DWORD *)(a7 + 48) = (int)(LODWORD(v42) << 10) >> 11;
LABEL_35:
    *v46 = v12;
    return (unsigned int)v11;
  }
  v48 = v8;
  v47 = (COverlayContext *)&v48;
  memset_0(&v49, 0, 0x20uLL);
  v11 = COverlayContext::ComputeDesktopClip((float *)this, a2, &v47);
  if ( v11 >= 0 )
  {
    if ( *(_DWORD *)v47 )
    {
      if ( a5 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v47, &v47, &v45, &v49);
        v12 = v45;
        *(struct tagRECT *)(a7 + 36) = v49;
        if ( v12 > 1 )
        {
          v32 = 104LL;
          v33 = (__int128 *)&v50;
          v34 = v12 - 1;
          do
          {
            *(_OWORD *)(a7 + v32) = *(_OWORD *)a7;
            v32 += 104LL;
            *(_OWORD *)(a7 + v32 - 88) = *(_OWORD *)(a7 + 16);
            *(_OWORD *)(a7 + v32 - 72) = *(_OWORD *)(a7 + 32);
            *(_OWORD *)(a7 + v32 - 56) = *(_OWORD *)(a7 + 48);
            *(_OWORD *)(a7 + v32 - 40) = *(_OWORD *)(a7 + 64);
            *(_OWORD *)(a7 + v32 - 24) = *(_OWORD *)(a7 + 80);
            *(_QWORD *)(a7 + v32 - 8) = *(_QWORD *)(a7 + 96);
            v35 = *v33++;
            *(_OWORD *)(a7 + v32 - 68) = v35;
            --v34;
          }
          while ( v34 );
        }
      }
      else
      {
        *(_QWORD *)&v49.right = 0LL;
        *(_QWORD *)&v49.left = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v47, &v49);
        left = v49.left;
        *(_DWORD *)(a7 + 40) = v49.top;
        *(_QWORD *)(a7 + 44) = *(_QWORD *)&v49.right;
        *(_DWORD *)(a7 + 36) = left;
      }
    }
    else
    {
      v12 = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v47);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC1Eu);
  FastRegion::CRegion::FreeMemory((void **)&v47);
  return (unsigned int)v11;
}
