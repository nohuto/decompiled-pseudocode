/*
 * XREFs of ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800CB878
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068E00 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D0C8 (-Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180036A78 (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
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
  int v13; // eax
  unsigned int v14; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CCrossThreadComposition *)WPF::ProcessHeapImpl::AllocClear(0x578uLL);
  if ( !v10 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v11 = (struct CMonitorTreeAssociation **)CCrossThreadComposition::CCrossThreadComposition(v10, a1, a2, a3, a4, a5);
  v12 = (CMILRefCountBase *)v11;
  if ( v11 )
  {
    v13 = CComposition::Initialize(v11);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x68u);
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
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x66u);
  }
  return v14;
}
