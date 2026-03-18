/*
 * XREFs of ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180016EA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18007F4A8 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18007FDF8 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCaptureBits(
        CDesktopRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CAPTUREBITS *a3)
{
  volatile signed __int32 *v3; // rdi
  struct IRenderTargetResource *v5; // r15
  __int64 v6; // rdx
  struct CaptureBitsResponse *v7; // rbp
  float v10; // xmm6_4
  CaptureBitsResponse *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  CVisual *Resource; // rax
  bool v16; // r8
  float v17; // xmm2_4
  int VisualTree; // eax
  struct WICRect v19; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CVisualTree *v21; // [rsp+A8h] [rbp+10h] BYREF

  v3 = 0LL;
  v19.X = *((_DWORD *)a3 + 4);
  v5 = 0LL;
  v6 = *((unsigned int *)a3 + 11);
  v7 = 0LL;
  v19.Y = *((_DWORD *)a3 + 5);
  v19.Width = *((_DWORD *)a3 + 6);
  v10 = FLOAT_1_0;
  v19.Height = *((_DWORD *)a3 + 7);
  v21 = 0LL;
  if ( !(_DWORD)v6 )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    v21 = (struct CVisualTree *)v3;
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v3 = (volatile signed __int32 *)v21;
    }
    v5 = (CDesktopRenderTarget *)((char *)this + 112);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x948u);
      goto LABEL_11;
    }
    v12 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 96LL),
            v7);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x94Eu);
    goto LABEL_9;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 3), v6, 134LL);
  if ( Resource )
  {
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a3 + 1)) & _xmm);
    if ( v17 >= 0.0000011920929 )
    {
      VisualTree = CVisual::GetVisualTree(Resource, &v21, v16);
      v13 = VisualTree;
      if ( VisualTree < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0x936u);
        v3 = (volatile signed __int32 *)v21;
        goto LABEL_11;
      }
      v3 = (volatile signed __int32 *)v21;
      v10 = 1.0 / *((double *)a3 + 1);
      goto LABEL_5;
    }
  }
  v13 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x932u);
LABEL_9:
  if ( v7 )
    CResponseItem::ReleaseResponseRef(v7);
LABEL_11:
  if ( v3 )
    CMILRefCountBase::Release((CMILRefCountBase *)v3);
  return v13;
}
