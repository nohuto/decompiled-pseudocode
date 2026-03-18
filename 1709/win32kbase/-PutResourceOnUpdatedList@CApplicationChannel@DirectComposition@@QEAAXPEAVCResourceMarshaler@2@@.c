/*
 * XREFs of ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00031D4 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C002B960 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002C040 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002C604 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C002D32C (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C002EF88 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C002F06C (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C002F32C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002FA2C (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C002FE30 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0030334 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C00304A8 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C003051C (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C003060C (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0032DCC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C013FD18 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)a2 + 4);
  if ( (v2 & 2) == 0 )
  {
    if ( (v2 & 1) != 0 && (v2 & 8) == 0 )
    {
      v5 = (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 120LL))(
             a2,
             118LL) != 0
         ? 8
         : 0;
      *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v5 + 408);
      *(_QWORD *)((char *)this + v5 + 408) = a2;
    }
    *((_DWORD *)a2 + 4) |= 2u;
    *((_BYTE *)this + 240) |= 1u;
  }
}
