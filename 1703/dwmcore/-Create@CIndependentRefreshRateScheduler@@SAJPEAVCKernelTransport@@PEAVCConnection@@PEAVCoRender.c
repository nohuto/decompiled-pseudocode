/*
 * XREFs of ?Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x18013CBC4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800653A8 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104 (--0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??_GCIndependentRefreshRateScheduler@@UEAAPEAXI@Z @ 0x18013C540 (--_GCIndependentRefreshRateScheduler@@UEAAPEAXI@Z.c)
 *     ?Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D0C8 (-Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::Create(
        struct CKernelTransport *a1,
        struct CConnection *a2,
        struct CoRenderHost *a3,
        struct ICompositorScheduler **a4)
{
  CIndependentRefreshRateScheduler *v8; // rax
  CIndependentRefreshRateScheduler *refreshed; // rax
  CIndependentRefreshRateScheduler *v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CIndependentRefreshRateScheduler *)WPF::ProcessHeapImpl::AllocClear(0x75E8uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  refreshed = CIndependentRefreshRateScheduler::CIndependentRefreshRateScheduler(v8, a1, a2, a3);
  v10 = refreshed;
  if ( refreshed )
  {
    v12 = CIndependentRefreshRateScheduler::Initialize(refreshed);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x22u);
      CIndependentRefreshRateScheduler::`scalar deleting destructor'(v10, 1);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v11;
}
