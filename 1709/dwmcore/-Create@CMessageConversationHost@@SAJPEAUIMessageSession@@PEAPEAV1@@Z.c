/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131900
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x180131860 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801319B4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x180131AB8 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rax
  CMessageConversationHost *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMessageConversationHost *)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v8 = CMessageConversationHost::Initialize(v5);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x20u);
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
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Fu);
  }
  return v7;
}
