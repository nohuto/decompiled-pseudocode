/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180008F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001AA24 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007A658 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180172414 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801726F8 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180172AE0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180172AF8 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(COverlayContext *this, bool *a2, bool *a3)
{
  int v3; // edi
  char v4; // r15
  char v5; // r12
  unsigned int v8; // ecx
  unsigned int v9; // esi
  char i; // bp
  CDirectFlipInfo **v11; // r14
  __int64 v12; // rdx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v14; // r9
  int v15; // eax
  CDirectFlipInfo *v16; // rax
  int Candidate; // eax
  int v18; // eax
  __int64 v19; // rcx
  char v20; // al
  _BYTE *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  bool *v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v3 = 0;
  v4 = 0;
  v24 = 0LL;
  v5 = 0;
  if ( *((_BYTE *)this + 1202) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 27));
  v8 = *((_DWORD *)this + 70);
  v9 = 0;
  for ( i = 1; v9 < v8; ++v9 )
  {
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(248LL * v9 + *((_QWORD *)this + 32) + 24), 1, 1);
    v8 = *((_DWORD *)this + 70);
  }
  v11 = (CDirectFlipInfo **)((char *)this + 1056);
  v12 = *((_QWORD *)this + 132);
  if ( v12
    && *(_QWORD *)(v12 + 24) == *((_QWORD *)this + 119)
    && *(_QWORD *)(v12 + 32) == *((_QWORD *)this + 120)
    && *(_QWORD *)(v12 + 64) == *((_QWORD *)this + 124)
    && *(_DWORD *)(v12 + 92) == *((_DWORD *)this + 255) )
  {
    v5 = 1;
  }
  if ( *((int *)this + 246) > 0 && !v8 && !*((_DWORD *)this + 292) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 120));
    v4 = 1;
    if ( RenderingRealizationNoRef )
      (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
        RenderingRealizationNoRef,
        &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
        &v24);
    if ( v24 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24) )
    {
      v4 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v14 = 0LL;
LABEL_32:
        McTemplateU0xq(
          *(_QWORD *)(*((_QWORD *)this + 120) + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
          (unsigned int)*(_QWORD *)(*((_QWORD *)this + 120) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 120) + 40LL)) << 32),
          v14);
      }
    }
    else if ( *((int *)this + 247) < 2
           || v5 && !*((_BYTE *)*v11 + 78)
           || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 432LL))(*((_QWORD *)this + 2)) )
    {
      if ( v5 )
      {
        if ( !CDirectFlipInfo::RenderingRealizationChanged(*v11) )
        {
          v15 = *((_DWORD *)this + 247);
          if ( v15 >= 2 && v15 != 3 )
          {
            v4 = 0;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v14 = 1LL;
              goto LABEL_32;
            }
          }
        }
      }
    }
    else
    {
      v4 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v14 = 2LL;
        goto LABEL_32;
      }
    }
  }
  v16 = *v11;
  if ( *v11 && (*((int *)v16 + 14) < 4 || !v4 || !v5) )
  {
    COverlayContext::ClearDirectFlip(this);
    v16 = *v11;
    *((_BYTE *)this + 1203) = 1;
  }
  if ( !v16 && v4 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 928),
                  (struct CDirectFlipInfo **)this + 132);
    v3 = Candidate;
    if ( Candidate < 0 )
    {
      v23 = 809;
      goto LABEL_64;
    }
    v18 = CDirectFlipInfo::EnsurePinnedResources(*v11);
    v3 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x32Bu);
    if ( v3 == -2005532292 )
    {
      COverlayContext::ClearDirectFlip(this);
      v3 = 0;
    }
    else if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x337u);
      goto LABEL_57;
    }
    if ( *v11 )
    {
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)*v11 + 4) + 48LL), 1, 1);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xq(v19, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 1LL);
    }
  }
  if ( *v11 )
  {
    Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v11, (COverlayContext *)((char *)this + 928));
    v3 = Candidate;
    if ( Candidate >= 0 )
    {
      if ( *((int *)*v11 + 15) >= 2 )
        *((_BYTE *)this + 1203) = 1;
      goto LABEL_53;
    }
    v23 = 838;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Candidate, v23);
    goto LABEL_57;
  }
LABEL_53:
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 116) + 8LL))((char *)this + 928);
  v20 = *((_BYTE *)this + 1202);
  if ( !*((_BYTE *)this + 1203) && !v20 )
  {
    v20 = 0;
    i = 0;
  }
  v21 = v25;
  *a3 = v20;
  *v21 = i;
LABEL_57:
  if ( v3 < 0 )
    COverlayContext::Reset(this);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  *((_WORD *)this + 601) = 0;
  return (unsigned int)v3;
}
