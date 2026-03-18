/*
 * XREFs of ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x180042324
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x18000CC10 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x180042460 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801568D4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?SetRoot@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_SETROOT@@@Z @ 0x18015C1A0 (-SetRoot@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDER.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTarget::SetRoot(CRenderTarget *this, struct CVisual *a2, bool a3)
{
  CMILRefCountBase *v3; // rbx
  int VisualTree; // eax
  unsigned int v6; // edi
  int v7; // eax
  struct CVisualTree *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v9, a3);
    v6 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0xB5u);
      v3 = v9;
      goto LABEL_6;
    }
    v3 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(CRenderTarget *, CMILRefCountBase *))(*(_QWORD *)this + 192LL))(this, v3);
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB8u);
LABEL_6:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v6;
}
