/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BC5A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1800BC4F8 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x1800BC520 (-GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800BD7FC (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2)
{
  CAnimation *v4; // rcx
  __int64 (*v5)(void); // rax
  struct CChannelContext *ChannelNoRef; // rax

  v4 = (CAnimation *)((char *)this + 56);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 24LL);
  if ( (char *)v5 == (char *)CAnimation::GetChannelNoRef )
    ChannelNoRef = CAnimation::GetChannelNoRef(v4);
  else
    ChannelNoRef = (struct CChannelContext *)v5();
  if ( ChannelNoRef == a2 )
  {
    if ( (unsigned __int8)CAnimation::ShouldNotify(this) )
      CMessageConversationHost::FlushCallbackId(
        *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1352LL),
        *((_DWORD *)this + 75),
        *((_DWORD *)this + 74));
    *((_DWORD *)this + 74) = 0;
  }
  if ( a2 == *((struct CChannelContext **)this + 6) )
    *((_QWORD *)this + 6) = 0LL;
}
