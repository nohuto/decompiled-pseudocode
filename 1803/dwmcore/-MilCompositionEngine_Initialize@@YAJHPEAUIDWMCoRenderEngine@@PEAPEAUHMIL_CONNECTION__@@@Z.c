/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800C9A50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x18005E4E8 (--0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x18005E7B0 (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x180143660 (--_GCConnection@@EEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180143824 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(
        int nPriority,
        struct IDWMCoRenderEngine *a2,
        struct HMIL_CONNECTION__ **a3)
{
  struct HMIL_CONNECTION__ *v3; // rsi
  CConnection *v7; // rax
  CConnection *v8; // rax
  CConnection *v9; // rdi
  int started; // eax
  int v11; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  if ( !a3 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180275688, 1u, -2147024809, 0x2Bu);
    return (unsigned int)v11;
  }
  v7 = (CConnection *)WPF::ProcessHeapImpl::AllocClear(0xC0uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8 = CConnection::CConnection(v7, a2);
  v9 = v8;
  if ( !v8 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180275688, 1u, v11, 0x2Fu);
    return (unsigned int)v11;
  }
  started = CConnection::StartCompositionThread(v8, nPriority);
  v11 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x64u);
  else
    _InterlockedIncrement(&dword_1802D6448);
  if ( v11 < 0 )
  {
    CConnection::Disconnect(v9);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x22u);
    CConnection::`scalar deleting destructor'(v9, 1u);
  }
  else
  {
    v3 = v9;
  }
  if ( v11 < 0 )
    goto LABEL_14;
  *a3 = v3;
  return (unsigned int)v11;
}
