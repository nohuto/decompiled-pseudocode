/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18013E7C8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180163BE0 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$DynArray@PEAVOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180163C70 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180165374 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
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
  unsigned int v9; // r15d
  unsigned int v10; // esi
  bool v12; // r12
  bool v13; // al
  bool v14; // r12
  int v15; // eax
  BOOL v16; // eax
  float v17; // xmm0_4
  LONG v18; // xmm0_4
  LONG v19; // xmm0_4
  LONG v20; // xmm0_4
  float v21; // xmm0_4
  LONG v22; // xmm0_4
  LONG v23; // xmm0_4
  LONG v24; // xmm0_4
  LONG v25; // xmm0_4
  LONG v26; // xmm0_4
  LONG v27; // xmm0_4
  LONG v28; // xmm0_4
  int v29; // eax
  __int64 v30; // rcx
  __int128 *v31; // rdx
  __int64 v32; // r8
  __int128 v33; // xmm1
  LONG left; // r10d
  LONG v35; // xmm0_4
  LONG v36; // xmm0_4
  LONG v37; // xmm0_4
  unsigned int v40; // [rsp+34h] [rbp-75h] BYREF
  unsigned int *v41; // [rsp+38h] [rbp-71h]
  COverlayContext *v42; // [rsp+40h] [rbp-69h] BYREF
  int v43; // [rsp+48h] [rbp-61h] BYREF
  struct tagRECT v44; // [rsp+90h] [rbp-19h] BYREF
  char v45; // [rsp+A0h] [rbp-9h] BYREF

  v9 = 0;
  v10 = 0;
  v41 = a7;
  *(_QWORD *)&v44.left = a3;
  v12 = *(_DWORD *)(a2 + 24) || *(_DWORD *)(a3 + 24) || a5;
  v13 = a4 && COverlayContext::CanFastDisableDesktopPlane((__int64)this, (__int64 **)a2);
  if ( !v12 || v13 )
    goto LABEL_41;
  v10 = 1;
  v40 = 1;
  v14 = *(_DWORD *)(a2 + 24)
     && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(**(COverlayContext::OverlayPlaneInfo ***)a2);
  if ( !*((_DWORD *)this + 42) || COverlayContext::OverlaysEnabled(this) )
    v15 = 0;
  else
    v15 = 4;
  *(_DWORD *)a8 = v15;
  *(_DWORD *)(a8 + 52) = 1;
  v16 = !v14 && *(_DWORD *)(a2 + 24) + *(_DWORD *)(*(_QWORD *)&v44.left + 24LL);
  *(_DWORD *)(a8 + 56) = v16;
  *(_DWORD *)(a8 + 76) = *((_DWORD *)this + 25);
  v17 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 168LL))(*((_QWORD *)this + 2));
  *(_DWORD *)(a8 + 104) = ConvertSDRBoostToSDRWhiteLevel(v17, (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 25));
  *(_DWORD *)(a8 + 96) = 2;
  if ( a5 )
  {
    *(_DWORD *)(a8 + 4) = 0;
    *(_DWORD *)(a8 + 8) = 0;
    *(_DWORD *)(a8 + 12) = *((_DWORD *)this + 18);
    *(_DWORD *)(a8 + 16) = *((_DWORD *)this + 19);
    *(float *)&v18 = *((float *)this + 14) + 6291456.25;
    v44.left = v18;
    *(_DWORD *)(a8 + 20) = v18 << 10 >> 11;
    *(float *)&v19 = *((float *)this + 15) + 6291456.25;
    v44.left = v19;
    *(_DWORD *)(a8 + 24) = v19 << 10 >> 11;
    *(float *)&v20 = *((float *)this + 16) + 6291456.25;
    v44.left = v20;
    *(_DWORD *)(a8 + 28) = v20 << 10 >> 11;
    v21 = *((float *)this + 17);
  }
  else
  {
    *(float *)&v22 = *((float *)this + 10) + 6291456.25;
    v44.left = v22;
    *(_DWORD *)(a8 + 4) = v22 << 10 >> 11;
    *(float *)&v23 = *((float *)this + 11) + 6291456.25;
    v44.left = v23;
    *(_DWORD *)(a8 + 8) = v23 << 10 >> 11;
    *(float *)&v24 = *((float *)this + 12) + 6291456.25;
    v44.left = v24;
    *(_DWORD *)(a8 + 12) = v24 << 10 >> 11;
    *(float *)&v25 = *((float *)this + 13) + 6291456.25;
    v44.left = v25;
    *(_DWORD *)(a8 + 16) = v25 << 10 >> 11;
    *(float *)&v26 = *((float *)this + 10) + 6291456.25;
    v44.left = v26;
    *(_DWORD *)(a8 + 20) = v26 << 10 >> 11;
    *(float *)&v27 = *((float *)this + 11) + 6291456.25;
    v44.left = v27;
    *(_DWORD *)(a8 + 24) = v27 << 10 >> 11;
    *(float *)&v28 = *((float *)this + 12) + 6291456.25;
    v44.left = v28;
    *(_DWORD *)(a8 + 28) = v28 << 10 >> 11;
    v21 = *((float *)this + 13);
  }
  *(float *)&v44.left = v21 + 6291456.25;
  *(_DWORD *)(a8 + 32) = v44.left << 10 >> 11;
  if ( !a4 || v14 )
  {
    *(float *)&v35 = *((float *)this + 14) + 6291456.25;
    v44.left = v35;
    *(_DWORD *)(a8 + 36) = v35 << 10 >> 11;
    *(float *)&v36 = *((float *)this + 15) + 6291456.25;
    v44.left = v36;
    *(_DWORD *)(a8 + 40) = v36 << 10 >> 11;
    *(float *)&v37 = *((float *)this + 16) + 6291456.25;
    v44.left = v37;
    *(_DWORD *)(a8 + 44) = v37 << 10 >> 11;
    *(float *)&v44.left = *((float *)this + 17) + 6291456.25;
    *(_DWORD *)(a8 + 48) = v44.left << 10 >> 11;
LABEL_41:
    *v41 = v10;
    return v9;
  }
  v43 = 0;
  v42 = (COverlayContext *)&v43;
  memset_0(&v44, 0, 0x20uLL);
  v29 = COverlayContext::ComputeDesktopClip((float *)this, a2, &v42);
  v9 = v29;
  if ( v29 >= 0 )
  {
    if ( *(_DWORD *)v42 )
    {
      if ( a6 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v42, &v42, &v40, &v44);
        v10 = v40;
        *(struct tagRECT *)(a8 + 36) = v44;
        if ( v10 > 1 )
        {
          v30 = 112LL;
          v31 = (__int128 *)&v45;
          v32 = v10 - 1;
          do
          {
            *(_OWORD *)(a8 + v30) = *(_OWORD *)a8;
            v30 += 112LL;
            *(_OWORD *)(a8 + v30 - 96) = *(_OWORD *)(a8 + 16);
            *(_OWORD *)(a8 + v30 - 80) = *(_OWORD *)(a8 + 32);
            *(_OWORD *)(a8 + v30 - 64) = *(_OWORD *)(a8 + 48);
            *(_OWORD *)(a8 + v30 - 48) = *(_OWORD *)(a8 + 64);
            *(_OWORD *)(a8 + v30 - 32) = *(_OWORD *)(a8 + 80);
            v33 = *v31++;
            *(_OWORD *)(a8 + v30 - 16) = *(_OWORD *)(a8 + 96);
            *(_OWORD *)(a8 + v30 - 76) = v33;
            --v32;
          }
          while ( v32 );
        }
      }
      else
      {
        v44.bottom = 0;
        v44.right = 0;
        v44.top = 0;
        v44.left = 0;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v42, &v44);
        left = v44.left;
        *(_DWORD *)(a8 + 40) = v44.top;
        *(_DWORD *)(a8 + 44) = v44.right;
        *(_DWORD *)(a8 + 48) = v44.bottom;
        *(_DWORD *)(a8 + 36) = left;
      }
    }
    else
    {
      v10 = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v42);
    goto LABEL_41;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xDBCu);
  FastRegion::CRegion::FreeMemory((void **)&v42);
  return v9;
}
