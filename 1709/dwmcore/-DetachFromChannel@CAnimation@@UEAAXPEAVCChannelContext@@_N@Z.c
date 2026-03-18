/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x18002CD18 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x18002CD30 (-GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x180084E0C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  CAnimation *v5; // rcx
  __int64 (*v7)(void); // rax
  struct CChannelContext *ChannelNoRef; // rax

  v5 = (CAnimation *)((char *)this + 56);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v5 + 24LL);
  if ( (char *)v7 == (char *)CAnimation::GetChannelNoRef )
    ChannelNoRef = CAnimation::GetChannelNoRef(v5);
  else
    ChannelNoRef = (struct CChannelContext *)v7();
  if ( ChannelNoRef == a2 )
  {
    if ( CAnimation::ShouldNotify(this) )
      CMessageConversationHost::FlushCallbackId(
        *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1288LL),
        *((_DWORD *)this + 75),
        *((_DWORD *)this + 74));
    *((_DWORD *)this + 74) = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
