/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180021760
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18005BF68 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1800BC4F8 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800BD7FC (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
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
      *(CMessageConversationHost **)(*(_QWORD *)(v6 + 16) + 1352LL),
      *((_DWORD *)this + 75),
      *((_DWORD *)this + 74));
  v7 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v7, *((_DWORD *)a2 + 12), &v12);
  v9 = v12;
  v10 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x222u);
  else
    *((_DWORD *)this + 75) = *((_DWORD *)v12 + 16);
  if ( v9 )
    CMILRefCountBase::Release(v9);
  return v10;
}
