/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C010E1D0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0111EAC (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01125FC (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C010ECB8 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *HoldingFrame; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    51,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, v2);
  if ( HoldingFrame && *((_DWORD *)HoldingFrame + 4) )
  {
    rimReclaimHoldingFrame(v6, v5, HoldingFrame);
    RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  LOBYTE(v5) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v5,
           19,
           52,
           (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
}
