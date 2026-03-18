/*
 * XREFs of ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1801436A4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800C21F4 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
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
  operator delete(this);
  return this;
}
