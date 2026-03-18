/*
 * XREFs of ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180123E10
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x180120720 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ?Initialize@CKernelTransport@@AEAAJXZ @ 0x180123E90 (-Initialize@CKernelTransport@@AEAAJXZ.c)
 */

__int64 __fastcall CKernelTransport::Create(struct CKernelTransport **a1)
{
  CKernelTransport *v2; // rax
  struct CKernelTransport *v3; // rdi
  signed int v4; // eax
  int v5; // ebx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CKernelTransport *)WPF::ProcessHeapImpl::AllocClear(0x10uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v4 = CKernelTransport::Initialize(v2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x3Cu);
  else
    *a1 = v3;
  if ( v5 < 0 )
    CKernelTransport::`scalar deleting destructor'(v3);
  return (unsigned int)v5;
}
