/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18004AE20 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180066ECC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x18006A400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x1801490B4 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180149374 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180149730 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180149748 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(COverlayContext *this, bool *a2, bool *a3)
{
  int v5; // edi
  char v6; // r12
  bool v7; // r15
  unsigned int v8; // ebp
  char i; // si
  CDirectFlipInfo **v10; // r14
  __int64 v11; // rcx
  void (*v12)(void); // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v15; // r9
  int v16; // eax
  int Candidate; // eax
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  bool *v22; // [rsp+78h] [rbp+10h]

  v22 = a2;
  v5 = 0;
  v6 = 0;
  v21 = 0LL;
  v7 = 0;
  if ( *((_BYTE *)this + 1190) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 26));
  v8 = 0;
  for ( i = 1; v8 < *((_DWORD *)this + 68); ++v8 )
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(248LL * v8 + *((_QWORD *)this + 31) + 24), 1, 1);
  v10 = (CDirectFlipInfo **)((char *)this + 1048);
  v11 = *((_QWORD *)this + 131);
  if ( v11
    && *(_QWORD *)(v11 + 24) == *((_QWORD *)this + 118)
    && *(_QWORD *)(v11 + 32) == *((_QWORD *)this + 119)
    && *(_QWORD *)(v11 + 64) == *((_QWORD *)this + 123) )
  {
    v7 = *(_DWORD *)(v11 + 92) == *((_DWORD *)this + 253);
  }
  if ( *((int *)this + 244) > 0 && !*((_DWORD *)this + 68) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 119));
    v6 = 1;
    if ( RenderingRealizationNoRef )
      (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
        RenderingRealizationNoRef,
        &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
        &v21);
    if ( v21 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21) )
    {
      v6 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v15 = 0LL;
LABEL_47:
        McTemplateU0xq(
          *(unsigned int *)(*((_QWORD *)this + 119) + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
          *(unsigned int *)(*((_QWORD *)this + 119) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 119) + 40LL)) << 32),
          v15);
      }
    }
    else if ( *((int *)this + 245) < 2
           || v7 && !*((_BYTE *)*v10 + 78)
           || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 384LL))(*((_QWORD *)this + 2)) )
    {
      if ( v7 && !CDirectFlipInfo::RenderingRealizationChanged(*v10) )
      {
        v16 = *((_DWORD *)this + 245);
        if ( v16 >= 2 && v16 != 3 )
        {
          v6 = 0;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v15 = 1LL;
            goto LABEL_47;
          }
        }
      }
    }
    else
    {
      v6 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v15 = 2LL;
        goto LABEL_47;
      }
    }
  }
  if ( *v10 && (*((int *)*v10 + 14) < 4 || !v6 || !v7) )
  {
    COverlayContext::ClearDirectFlip(this);
    *((_BYTE *)this + 1191) = 1;
  }
  if ( !*v10 && v6 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 920),
                  (struct CDirectFlipInfo **)this + 131);
    v5 = Candidate;
    if ( Candidate < 0 )
    {
      v20 = 789;
      goto LABEL_64;
    }
    v18 = CDirectFlipInfo::EnsurePinnedResources(*v10);
    v5 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x317u);
    if ( v5 == -2005532292 )
    {
      COverlayContext::ClearDirectFlip(this);
      v5 = 0;
    }
    else if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x323u);
      goto LABEL_16;
    }
    if ( *v10 )
    {
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(*((_QWORD *)*v10 + 4) + 48LL, 1LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xq(v19, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 1LL);
    }
  }
  if ( *v10 )
  {
    Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v10, (COverlayContext *)((char *)this + 920));
    v5 = Candidate;
    if ( Candidate >= 0 )
    {
      if ( *((int *)*v10 + 15) >= 2 )
        *((_BYTE *)this + 1191) = 1;
      goto LABEL_10;
    }
    v20 = 818;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Candidate, v20);
    goto LABEL_16;
  }
LABEL_10:
  v12 = *(void (**)(void))(*((_QWORD *)this + 115) + 8LL);
  if ( (char *)v12 == (char *)CDirectFlipInfo::Reset )
    CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 920));
  else
    v12();
  if ( !*((_BYTE *)this + 1191) && !*((_BYTE *)this + 1190) )
    i = 0;
  *v22 = i;
  *a3 = *((_BYTE *)this + 1190);
LABEL_16:
  if ( v5 < 0 )
    COverlayContext::Reset(this);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  *((_WORD *)this + 595) = 0;
  return (unsigned int)v5;
}
