/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18003F9F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x18003F970 (-GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800C5154 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  CAnimation *v5; // rcx
  __int64 (*v7)(void); // rax
  struct CChannelContext *ChannelNoRef; // rax
  unsigned int v9; // edx
  unsigned int v10; // r8d

  v5 = (CAnimation *)((char *)this + 56);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v5 + 24LL);
  if ( (char *)v7 == (char *)CAnimation::GetChannelNoRef )
    ChannelNoRef = CAnimation::GetChannelNoRef(v5);
  else
    ChannelNoRef = (struct CChannelContext *)v7();
  if ( ChannelNoRef == a2 )
  {
    v9 = *((_DWORD *)this + 75);
    if ( v9 )
    {
      v10 = *((_DWORD *)this + 74);
      if ( v10 )
        CMessageConversationHost::FlushCallbackId(
          *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1312LL),
          v9,
          v10);
    }
    *((_DWORD *)this + 74) = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
