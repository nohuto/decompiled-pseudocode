/*
 * XREFs of ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x180126458
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180125ACC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801262E0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180126520 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Create(
        struct CKernelTransport *a1,
        struct CConnection *a2,
        struct CoRenderHost *a3,
        struct ICompositorScheduler **a4)
{
  CPartitionVerticalBlankScheduler *v8; // rax
  CPartitionVerticalBlankScheduler *v9; // rax
  CPartitionVerticalBlankScheduler *v10; // rdi
  unsigned int v11; // ebx
  signed int v12; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CPartitionVerticalBlankScheduler *)WPF::ProcessHeapImpl::AllocClear(0x7368uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v9 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v8, a1, a2, a3);
  v10 = v9;
  if ( v9 )
  {
    v12 = CPartitionVerticalBlankScheduler::Initialize(v9);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x23u);
      CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v10, 1);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x22u);
  }
  return v11;
}
