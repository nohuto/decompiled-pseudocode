/*
 * XREFs of ?ProcessCreate@CPlaneCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015C0C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CPlaneCaptureRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x18015B530 (--0CPlaneCaptureRenderTargetEngine@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CPlaneCaptureRenderTargetEngine@@QEAAJPEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015B638 (-Create@CPlaneCaptureRenderTargetEngine@@QEAAJPEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::ProcessCreate(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_PLANECAPTURERENDERTARGET_CREATE *a3)
{
  CPlaneCaptureRenderTargetEngine *v5; // rax
  CPlaneCaptureRenderTargetEngine *v6; // rax
  CPlaneCaptureRenderTargetEngine *v7; // rcx
  struct CComposition *v8; // rbx
  struct CComposition *v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (CPlaneCaptureRenderTargetEngine *)WPF::ProcessHeapImpl::AllocClear(0x1E8uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v6 = CPlaneCaptureRenderTargetEngine::CPlaneCaptureRenderTargetEngine(v5, this[2]);
  v7 = this[7];
  v8 = v6;
  if ( v7 != v6 )
  {
    v9 = this[7];
    if ( v6 )
    {
      (*(void (__fastcall **)(CPlaneCaptureRenderTargetEngine *, struct CComposition *))(*(_QWORD *)v6 + 8LL))(v6, v9);
      v9 = this[7];
    }
    this[7] = v8;
    v7 = v8;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v9 + 16LL))(v9);
      v7 = this[7];
    }
  }
  if ( v7 )
  {
    v11 = CPlaneCaptureRenderTargetEngine::Create(v7, a3);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14Eu);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14Cu);
  }
  return v10;
}
