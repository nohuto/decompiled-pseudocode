/*
 * XREFs of ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x18012FB90
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180126520 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18012FB0C (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 */

__int64 __fastcall CCrossThreadComposition::Create(
        struct CKernelTransport *a1,
        struct ICompositorScheduler *a2,
        struct CConnection *a3,
        struct CDebugFrameCounter *a4,
        struct CoRenderHost *a5,
        struct CCrossThreadComposition **a6)
{
  CCrossThreadComposition *v10; // rcx
  struct CMonitorTreeAssociation **v11; // rax
  CMILRefCountBase *v12; // rdi
  unsigned int v13; // ebx
  signed int v14; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CCrossThreadComposition *)WPF::ProcessHeapImpl::AllocClear(0x548uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v11 = (struct CMonitorTreeAssociation **)CCrossThreadComposition::CCrossThreadComposition(v10, a1, a2, a3, a4, a5);
  v12 = (CMILRefCountBase *)v11;
  if ( v11 )
  {
    v14 = CComposition::Initialize(v11);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x6Fu);
      CMILRefCountBase::Release(v12);
    }
    else
    {
      g_pComposition = v12;
      *a6 = v12;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x6Du);
  }
  return v13;
}
