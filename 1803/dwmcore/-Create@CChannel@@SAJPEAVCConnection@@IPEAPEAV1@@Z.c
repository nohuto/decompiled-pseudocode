/*
 * XREFs of ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800C9224
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x18005EADC (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x1800878F4 (--0CChannel@@AEAA@PEAVCConnection@@I@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800C92B8 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::Create(struct CConnection *a1, int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  CChannel *v7; // rdi
  HANDLE EventW; // rax
  signed int v9; // ebx
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  CChannel *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CChannel *)WPF::ProcessHeapImpl::AllocClear(0xD8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v13 = CChannel::CChannel(v6, a1, a2);
  v7 = v13;
  if ( v13 )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v7 + 10) = EventW;
    if ( EventW )
    {
      v9 = 0;
      *a3 = v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( v9 >= 0 )
        v9 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x41u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x186u);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x181u);
  }
  ReleaseInterface<CChannel>(&v13);
  return (unsigned int)v9;
}
