/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800CBDC4
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800BD824 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800BD958 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180145400 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rax
  CMessageConversationHost *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMessageConversationHost *)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = CMessageConversationHost::Initialize(v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x20u);
      CMessageConversationHost::Disconnect(v6);
      CMILCOMBase::InternalRelease(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v8;
}
