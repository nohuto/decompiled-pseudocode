/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000A6C8 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800715B0 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180073580 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x18015153C (-IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180154EAC (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x18015515C (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180155520 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18015553C (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(
        COverlayContext *this,
        bool *a2,
        bool *a3,
        enum DirectFlipMode::Enum *a4)
{
  int v7; // edi
  unsigned int v8; // ebp
  char i; // si
  char v10; // r15
  CDirectFlipInfo **v11; // r14
  int *v12; // rdx
  void (*v13)(void); // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct CDirectFlipInfo *v20; // rdx
  __int64 v21; // rax
  struct CDirectFlipInfo *v22; // r8
  __int64 v23; // r8
  int Candidate; // eax
  int v25; // eax
  __int64 v26; // rcx
  CDirectFlipInfo *v27; // rcx
  unsigned int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  bool *v30; // [rsp+78h] [rbp+10h]

  v30 = a2;
  v7 = 0;
  v29 = 0LL;
  *(_DWORD *)a4 = 0;
  if ( *((_BYTE *)this + 1104) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 152LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 23));
  v8 = 0;
  for ( i = 1; v8 < *((_DWORD *)this + 66); ++v8 )
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(240LL * v8 + *((_QWORD *)this + 30) + 24), 1, 1);
  if ( *((int *)this + 232) <= 0 || *((_DWORD *)this + 66) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 1;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                    + 112));
  if ( RenderingRealizationNoRef )
    (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
      RenderingRealizationNoRef,
      &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
      &v29);
  if ( !v29 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29) )
  {
    if ( !*((_BYTE *)this + 912) && !*((_BYTE *)this + 913)
      || (v20 = (struct CDirectFlipInfo *)*((_QWORD *)this + 121)) != 0LL
      && CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), v20)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 376LL))(*((_QWORD *)this + 2)) )
    {
      if ( !*((_QWORD *)this + 121)
        || CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 121))
        || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), v22)
        || !*(_BYTE *)(v23 + 48) && !*((_BYTE *)this + 912) )
      {
        goto LABEL_6;
      }
      v10 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_6;
      v19 = 1LL;
    }
    else
    {
      v10 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_6;
      v19 = 2LL;
    }
    v21 = *((_QWORD *)this + 112);
    v17 = *(unsigned int *)(v21 + 40);
    v18 = v17 | ((__int64)(int)HIDWORD(*(_QWORD *)(v21 + 40)) << 32);
    goto LABEL_40;
  }
  v10 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = *((_QWORD *)this + 112);
    v17 = *(unsigned int *)(v16 + 40);
    v18 = v17 | ((__int64)(int)HIDWORD(*(_QWORD *)(v16 + 40)) << 32);
    v19 = 0LL;
LABEL_40:
    Template_xd(v17, &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL, v18, v19);
  }
LABEL_6:
  v11 = (CDirectFlipInfo **)((char *)this + 968);
  v12 = (int *)*((_QWORD *)this + 121);
  if ( v12
    && (v12[16] < 4
     || !v10
     || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), (struct CDirectFlipInfo *)v12)) )
  {
    COverlayContext::ClearDirectFlip(this);
    *((_BYTE *)this + 1105) = 1;
  }
  if ( !*v11 && v10 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 864),
                  (struct CDirectFlipInfo **)this + 121);
    v7 = Candidate;
    if ( Candidate < 0 )
    {
      v28 = 737;
LABEL_64:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Candidate, v28);
      goto LABEL_17;
    }
    v25 = CDirectFlipInfo::EnsurePinnedResources(*v11);
    v7 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x2E3u);
    if ( v7 == -2005532292 )
    {
      COverlayContext::ClearDirectFlip(this);
      v7 = 0;
    }
    else if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2F0u);
      goto LABEL_17;
    }
    if ( *v11 )
    {
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)*v11 + 4) + 48LL), 1, 1);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(v26, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 1LL);
    }
  }
  if ( !*v11 )
    goto LABEL_10;
  Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v11, (COverlayContext *)((char *)this + 864));
  v7 = Candidate;
  if ( Candidate < 0 )
  {
    v28 = 768;
    goto LABEL_64;
  }
  v27 = *v11;
  if ( *((_BYTE *)*v11 + 48) )
  {
    *(_DWORD *)a4 = 2;
  }
  else if ( *((_BYTE *)v27 + 49) )
  {
    *(_DWORD *)a4 = CDirectFlipInfo::RenderingRealizationChanged(v27) + 1;
  }
  else
  {
    *(_DWORD *)a4 = 1;
  }
LABEL_10:
  v13 = *(void (**)(void))(*((_QWORD *)this + 108) + 8LL);
  if ( (char *)v13 == (char *)CDirectFlipInfo::Reset )
    CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 864));
  else
    v13();
  if ( !*((_BYTE *)this + 1105) && !*((_BYTE *)this + 1104) && *(_DWORD *)a4 != 2 )
    i = 0;
  *v30 = i;
  *a3 = *((_BYTE *)this + 1104);
LABEL_17:
  if ( v7 < 0 )
    COverlayContext::Reset(this);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  *((_WORD *)this + 552) = 0;
  return (unsigned int)v7;
}
