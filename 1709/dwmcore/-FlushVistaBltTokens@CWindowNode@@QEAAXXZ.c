/*
 * XREFs of ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4
 * Callers:
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18007F6FC (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165A80 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180179940 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
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
  __int64 v9; // rcx
  __int64 v10; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  RestartKey = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Start);
  while ( 1 )
  {
    v7 = (struct CFlipChain **)RtlEnumerateGenericTableWithoutSplaying(
                                 (PRTL_GENERIC_TABLE)((char *)this + 712),
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
    v12 = 0LL;
    Buffer = v4;
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
    v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 232), &Buffer);
    if ( v6 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 232), v6);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 712),
      v8);
    RestartKey = 0LL;
  }
  v9 = *((_QWORD *)this + 125);
  if ( v9 && !*(_BYTE *)(v9 + 16) )
  {
    *(_BYTE *)(v9 + 16) = 1;
    v10 = *(_QWORD *)v9;
    *(_BYTE *)(v10 + 1008) = 0;
    CVisual::PropagateFlags(v10, 5u, 0);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Stop);
}
