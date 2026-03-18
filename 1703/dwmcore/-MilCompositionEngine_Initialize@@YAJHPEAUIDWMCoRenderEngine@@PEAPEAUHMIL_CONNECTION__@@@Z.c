/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800CB680
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x180065288 (--0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800654EC (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801388A0 (--_GCConnection@@EEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180138A50 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(
        int nPriority,
        struct IDWMCoRenderEngine *a2,
        struct HMIL_CONNECTION__ **a3)
{
  struct HMIL_CONNECTION__ *v3; // rbp
  CConnection *v7; // rax
  CConnection *v8; // rax
  CConnection *v9; // rsi
  int started; // eax
  int v11; // ebx
  int v12; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  if ( !a3 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801F23E0, 1u, -2147024809, 0x2Bu);
    return (unsigned int)v11;
  }
  v7 = (CConnection *)WPF::ProcessHeapImpl::AllocClear(0xC0uLL);
  if ( !v7 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v8 = CConnection::CConnection(v7, a2);
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
    v11 = -2147024882;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, &dword_1801F23E0, 1u, v12, 0x2Fu);
    return (unsigned int)v11;
  }
  started = CConnection::StartCompositionThread(v8, nPriority);
  v11 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x64u);
  else
    _InterlockedIncrement(&dword_18023E548);
  if ( v11 < 0 )
    CConnection::Disconnect(v9);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x22u);
    CConnection::`scalar deleting destructor'(v9, 1u);
  }
  else
  {
    v3 = v9;
  }
  if ( v11 < 0 )
    goto LABEL_16;
  *a3 = v3;
  return (unsigned int)v11;
}
