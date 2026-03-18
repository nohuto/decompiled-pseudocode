/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000FD68 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18007B250 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008DF3C (-Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C5FC4 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z @ 0x1800C92FC (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCHWCallbackRenderer@@@@QEAAXI@Z @ 0x1800C9FF8 (-Optimize@-$ShrinkableReferenceArray@PEAVCHWCallbackRenderer@@@@QEAAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z @ 0x1800CA1EC (-Optimize@-$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        unsigned __int64 this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  unsigned __int64 v4; // rdi
  struct ID2D1PrivateCompositorRenderer **v5; // rbx
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebp
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  enum DXGI_COLOR_SPACE_TYPE v17; // esi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  signed int v21; // ebx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  CD2DTarget *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // [rsp+50h] [rbp+8h] BYREF
  __int64 v33; // [rsp+60h] [rbp+18h] BYREF

  v4 = this;
  if ( *(_QWORD *)(this + 464) )
  {
    v13 = *(_DWORD *)(this + 360);
    v14 = 0LL;
    if ( v13 )
      v14 = *(_QWORD *)(*(_QWORD *)(v4 + 336) + 8LL * (unsigned int)(v13 - 1));
    v15 = (*(__int64 (__fastcall **)(_QWORD, const struct ID2DContextOwner *))(**(_QWORD **)(v14 + 24) + 120LL))(
            *(_QWORD *)(v14 + 24),
            a2);
    v16 = 0LL;
    v17 = *(_DWORD *)(v15 + 196);
    v18 = *(_DWORD *)(v4 + 360);
    if ( v18 )
      v16 = *(_QWORD *)(*(_QWORD *)(v4 + 336) + 8LL * (unsigned int)(v18 - 1));
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 24) + 120LL))(*(_QWORD *)(v16 + 24));
    v20 = 0LL;
    v21 = *(_DWORD *)(v19 + 152);
    v22 = *(_DWORD *)(v4 + 360);
    if ( v22 )
      v20 = *(_QWORD *)(*(_QWORD *)(v4 + 336) + 8LL * (unsigned int)(v22 - 1));
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 24) + 120LL))(*(_QWORD *)(v20 + 24));
    CHWCallbackRenderer::Set(
      *(CHWCallbackRenderer **)(v4 + 464),
      *(_DWORD *)(v4 + 32),
      (const struct RenderTargetInfo *)(v4 + 440),
      *(_DWORD *)(v23 + 148),
      v21,
      v17);
    v24 = *(_QWORD *)(v4 + 464);
    CD2DContext::EnsureBeginDraw((CD2DContext *)v4);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 184) + 120LL))(*(_QWORD *)(v4 + 184), v24);
    this = *(_QWORD *)(v4 + 464);
    if ( this )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(this + 8));
      *(_QWORD *)(v4 + 464) = 0LL;
    }
  }
  else
  {
    v5 = (struct ID2D1PrivateCompositorRenderer **)(this + 472);
    v6 = *(_QWORD *)(this + 472);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 44) = *(_DWORD *)(this + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(this + 440);
      *(_DWORD *)(v6 + 64) = *(_DWORD *)(this + 456);
      *(_BYTE *)(v6 + 68) = 1;
      v31 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)this, *v5);
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x3EEu);
      else
        ReleaseInterface<CWARPCallbackRenderer>(v5);
    }
  }
  v7 = *(_DWORD *)(v4 + 360);
  v8 = 0;
  v9 = 0LL;
  v32 = 0;
  if ( v7 )
  {
    this = (unsigned int)(v7 - 1);
    v9 = *(__int64 **)(*(_QWORD *)(v4 + 336) + 8 * this);
  }
  *(_DWORD *)(v4 + 360) = v7 - 1;
  if ( a3 )
    *a3 = 0LL;
  if ( *(_DWORD *)(v4 + 360) )
  {
    v25 = *(_DWORD *)(v4 + 360);
    v26 = 0LL;
    if ( v25 )
      v26 = *(CD2DTarget **)(*(_QWORD *)(v4 + 336) + 8LL * (unsigned int)(v25 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v26 + 3) + 8LL))(*((_QWORD **)v26 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v26 + 3);
    }
    CD2DTarget::ApplyState(v26, (struct CD2DContext *)v4);
  }
  else
  {
    if ( *(_BYTE *)(v4 + 480) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 176) + 392LL))(
              *(_QWORD *)(v4 + 176),
              0LL,
              0LL);
      v32 = v10;
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x496u);
      *(_WORD *)(v4 + 480) = 0;
      if ( !*(_DWORD *)(v4 + 120) )
      {
        v28 = *(unsigned int *)(v4 + 124);
        *(_DWORD *)(v4 + 120) = 512;
        ShrinkableReferenceArray<CDrawListEntry *>::Optimize(v4 + 8, v28);
        v29 = *(unsigned int *)(v4 + 132);
        *(_DWORD *)(v4 + 124) = 0;
        ShrinkableReferenceArray<CHWCallbackRenderer *>::Optimize(v4 + 40, v29);
        v30 = *(unsigned int *)(v4 + 140);
        *(_QWORD *)(v4 + 128) = *(unsigned int *)(v4 + 64);
        ShrinkableReferenceArray<CWARPCallbackRenderer *>::Optimize(v4 + 72, v30);
        *(_QWORD *)(v4 + 136) = *(unsigned int *)(v4 + 96);
      }
      --*(_DWORD *)(v4 + 120);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v11, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9[3])(
           v9[3],
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v33) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      *(_QWORD *)(v4 + 432) = v9;
      goto LABEL_19;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 184) + 56LL))(*(_QWORD *)(v4 + 184), 0LL, 0LL);
  }
  if ( v9 )
  {
    v27 = v9[5];
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    ReleaseInterfaceNoNULL<CD2DPencil>(v9[4]);
    ReleaseInterfaceNoNULL<CD2DPencil>(v9[3]);
    WPF::ProcessHeapImpl::Free(v9);
  }
LABEL_19:
  TranslateDXGIorD3DErrorInContext(v8, 0, &v32);
  return v32;
}
