/*
 * XREFs of ?ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_CREATE@@@Z @ 0x18012D310
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CC240 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?AddRemotingRenderTarget@CComposition@@QEAAJPEAVCRemotingRenderTarget@@@Z @ 0x18013F250 (-AddRemotingRenderTarget@CComposition@@QEAAJPEAVCRemotingRenderTarget@@@Z.c)
 */

__int64 __fastcall CRemotingRenderTarget::ProcessCreate(
        CRemotingRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTINGRENDERTARGET_CREATE *a3)
{
  __int64 v3; // rsi
  CManipulationFrame *v5; // rax
  CManipulationFrame *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  v5 = (CManipulationFrame *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  v6 = v5;
  if ( !v5 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v5 = &CRemoteApplicationWindow::`vftable';
  *((_DWORD *)v5 + 2) = 0;
  CManipulationFrame::AddRef(v5);
  *((_QWORD *)this + 7) = v6;
  *((_QWORD *)v6 + 2) = v3;
  v7 = CComposition::AddRemotingRenderTarget(*((CComposition **)this + 2), this);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2Fu);
  return v8;
}
