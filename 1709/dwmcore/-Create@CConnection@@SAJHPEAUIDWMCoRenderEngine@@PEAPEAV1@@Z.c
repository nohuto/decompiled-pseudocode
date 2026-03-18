/*
 * XREFs of ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1801207A8
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x180120410 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x1801205C8 (--0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z.c)
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801206F0 (--_GCConnection@@EEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180120A88 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x180120BFC (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 */

__int64 __fastcall CConnection::Create(int nPriority, struct IDWMCoRenderEngine *a2, struct CConnection **a3)
{
  CConnection *v6; // rax
  CConnection *v7; // rax
  struct CConnection *v8; // rdi
  signed int v9; // ebx
  signed int started; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (CConnection *)WPF::ProcessHeapImpl::AllocClear(0xC0uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = CConnection::CConnection(v6, a2);
  v8 = v7;
  if ( v7 )
  {
    started = CConnection::StartCompositionThread(v7, nPriority);
    v9 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, started, 0x64u);
    else
      _InterlockedIncrement(&dword_18026EEC8);
    if ( v9 >= 0 )
    {
      *a3 = v8;
    }
    else
    {
      CConnection::Disconnect(v8);
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x22u);
      CConnection::`scalar deleting destructor'(v8, 1);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Fu);
  }
  return (unsigned int)v9;
}
