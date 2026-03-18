/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18002CB70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x18002CD18 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x180084E0C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800AAF50 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETCALLBACKID *a3)
{
  __int64 v6; // rcx
  CComposition *v7; // rcx
  int AttachedChannel; // eax
  struct CChannelContext *v9; // rdi
  unsigned int v10; // esi
  struct CChannelContext *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( CAnimation::ShouldNotify(this) )
    CMessageConversationHost::FlushCallbackId(
      *(CMessageConversationHost **)(*(_QWORD *)(v6 + 16) + 1288LL),
      *((_DWORD *)this + 75),
      *((_DWORD *)this + 74));
  v7 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v7, *((_DWORD *)a2 + 12), &v12);
  v9 = v12;
  v10 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AttachedChannel, 0x224u);
  else
    *((_DWORD *)this + 75) = *((_DWORD *)v12 + 18);
  if ( v9 )
    CMILRefCountBase::Release(v9);
  return v10;
}
