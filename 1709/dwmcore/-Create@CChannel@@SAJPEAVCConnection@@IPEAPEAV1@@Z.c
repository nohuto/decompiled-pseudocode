/*
 * XREFs of ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1801216F0
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180120898 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1801205A8 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x180120FE4 (--0CChannel@@AEAA@PEAVCConnection@@I@Z.c)
 */

__int64 __fastcall CChannel::Create(struct CConnection *a1, int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  CChannel *v7; // rdi
  signed int v8; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]
  CChannel *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CChannel *)WPF::ProcessHeapImpl::AllocClear(0xD8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v13 = CChannel::CChannel(v6, a1, a2);
  v7 = v13;
  if ( v13 )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v7 + 10) = EventW;
    if ( EventW )
    {
      v8 = 0;
      *a3 = v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x41u);
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x187u);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x182u);
  }
  ReleaseInterface<CChannel>(&v13);
  return (unsigned int)v8;
}
