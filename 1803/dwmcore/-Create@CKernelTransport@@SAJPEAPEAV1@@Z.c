/*
 * XREFs of ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800C21F4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1801436A4 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CKernelTransport::Create(struct CKernelTransport **a1)
{
  struct CKernelTransport *v2; // rdi
  int v3; // ebx
  HANDLE EventW; // rax
  int Connection; // eax
  unsigned int v6; // edx
  int v8; // ebx
  unsigned int v9; // eax
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct CKernelTransport *)WPF::ProcessHeapImpl::AllocClear(0x10uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v2 + 1) = EventW;
  if ( EventW )
  {
    Connection = NtDCompositionCreateConnection(EventW, v2);
    if ( Connection >= 0 )
    {
LABEL_4:
      *a1 = v2;
      goto LABEL_5;
    }
    v8 = Connection;
    v9 = 84;
    v3 = v8 | 0x10000000;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v9 = 79;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v9);
  if ( v3 >= 0 )
    goto LABEL_4;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3Cu);
LABEL_5:
  if ( v3 < 0 )
    CKernelTransport::`scalar deleting destructor'(v2, v6);
  return (unsigned int)v3;
}
