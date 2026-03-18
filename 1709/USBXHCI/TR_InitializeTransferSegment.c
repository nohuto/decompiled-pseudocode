/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C00234B4
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C0023440 (TR_InitializeTransferRing.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2391);
  memset(v7, 0, sizeof(v7));
  v7[3] = *(_QWORD *)(a1 + 288);
  v7[5] = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 40);
  LODWORD(v7[4]) = 41;
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (unsigned int)v7, 48, (unsigned int)&v6, 4) >= 0
    && v6 < 0 )
  {
    v5 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x1Du,
      (__int64)&WPP_f27ad55644b83fdbb868113b0758d65b_Traceguids,
      v5);
    Debug_FreAssertMsg(
      (__int64)"TransferRingInitializeSegment Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2416);
  }
}
