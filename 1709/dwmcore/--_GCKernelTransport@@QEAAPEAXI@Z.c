/*
 * XREFs of ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x180120720
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180123E10 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CKernelTransport *__fastcall CKernelTransport::`scalar deleting destructor'(CKernelTransport *this)
{
  void *v2; // rcx

  if ( *(_QWORD *)this )
  {
    NtDCompositionDestroyConnection();
    *(_QWORD *)this = 0LL;
  }
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
