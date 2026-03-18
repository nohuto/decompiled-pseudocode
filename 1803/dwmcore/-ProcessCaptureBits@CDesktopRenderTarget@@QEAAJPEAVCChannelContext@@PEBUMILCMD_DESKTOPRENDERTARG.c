/*
 * XREFs of ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180045378
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18001E1CC (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x180020410 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCaptureBits(
        CDesktopRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CAPTUREBITS *a3)
{
  volatile signed __int32 *v3; // rdi
  struct IRenderTargetResource *v5; // r15
  unsigned int v6; // edx
  struct CaptureBitsResponse *v7; // rbp
  float v10; // xmm6_4
  CaptureBitsResponse *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  CVisual *Resource; // rax
  bool v16; // r8
  float v17; // xmm2_4
  int VisualTree; // eax
  WICRect v19; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CVisualTree *v21; // [rsp+A8h] [rbp+10h] BYREF

  v3 = 0LL;
  v19.X = *((_DWORD *)a3 + 4);
  v5 = 0LL;
  v6 = *((_DWORD *)a3 + 11);
  v7 = 0LL;
  v19.Y = *((_DWORD *)a3 + 5);
  v19.Width = *((_DWORD *)a3 + 6);
  v10 = FLOAT_1_0;
  v19.Height = *((_DWORD *)a3 + 7);
  v21 = 0LL;
  if ( !v6 )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
    v21 = (struct CVisualTree *)v3;
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v3 = (volatile signed __int32 *)v21;
    }
    v5 = (CDesktopRenderTarget *)((char *)this + 168);
LABEL_5:
    v11 = (CaptureBitsResponse *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v7 = CaptureBitsResponse::CaptureBitsResponse(
           v11,
           *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 80LL),
           a2,
           v5,
           (struct CVisualTree *)v3,
           v10,
           &v19,
           (enum DXGI_FORMAT)*((_DWORD *)a3 + 8),
           *(_QWORD *)((char *)a3 + 36));
    if ( !v7 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8C1u);
      goto LABEL_11;
    }
    v12 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 96LL),
            v7);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x8C7u);
    goto LABEL_9;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 3), v6, 0x97u);
  if ( Resource )
  {
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a3 + 1)) & _xmm);
    if ( v17 >= 0.0000011920929 )
    {
      VisualTree = CVisual::GetVisualTree(Resource, &v21, v16);
      v13 = VisualTree;
      if ( VisualTree < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0x8AFu);
        v3 = (volatile signed __int32 *)v21;
        goto LABEL_11;
      }
      v3 = (volatile signed __int32 *)v21;
      v10 = 1.0 / *((double *)a3 + 1);
      goto LABEL_5;
    }
  }
  v13 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x8ABu);
LABEL_9:
  if ( v7 )
    CResponseItem::ReleaseResponseRef(v7);
LABEL_11:
  if ( v3 )
    CMILRefCountBase::Release((CMILRefCountBase *)v3);
  return v13;
}
