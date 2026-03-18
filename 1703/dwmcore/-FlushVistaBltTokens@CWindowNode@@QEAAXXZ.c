/*
 * XREFs of ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x18012AD28
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800B049C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800D0650 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800CB7F8 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800CC130 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180162AC8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::FlushVistaBltTokens(CWindowNode *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rbx
  PVOID v6; // rax
  struct CFlipChain **v7; // rax
  struct CFlipChain **v8; // rdi
  CDxAccumulationContext *v9; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  RestartKey = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Start);
  while ( 1 )
  {
    v7 = (struct CFlipChain **)RtlEnumerateGenericTableWithoutSplaying(
                                 (PRTL_GENERIC_TABLE)((char *)this + 688),
                                 &RestartKey);
    v8 = v7;
    if ( !v7 )
      break;
    v2 = 0;
    if ( *((_DWORD *)v7 + 10) )
    {
      do
      {
        v3 = 88LL * v2;
        CFlipChain::ProcessVistaBltToken(
          v8[1],
          *(_QWORD *)((char *)v8[2] + v3 + 8),
          *(_QWORD *)((char *)v8[2] + v3 + 24),
          (__int64)v8[2] + v3 + 32);
        CWindowNode::PendingDxUpdate::ReleaseResponses((struct CFlipChain *)((char *)v8[2] + v3));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v8 + 10) );
    }
    *((_DWORD *)v8 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v8 + 2), 0x58u);
    CMILCOMBase::InternalRelease((struct CFlipChain *)((char *)v8[1] + 16));
    v4 = *(_DWORD *)v8;
    v11 = 0LL;
    Buffer = v4;
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 232), &Buffer);
    if ( v6 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 232), v6);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 688),
      v8);
    RestartKey = 0LL;
  }
  v9 = (CDxAccumulationContext *)*((_QWORD *)this + 122);
  if ( v9 )
    CDxAccumulationContext::ValidateContent(v9);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)v9, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Stop);
}
