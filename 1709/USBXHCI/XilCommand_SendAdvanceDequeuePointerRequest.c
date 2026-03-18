/*
 * XREFs of XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000F3D0
 * Callers:
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000EAF0 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendAdvanceDequeuePointerRequest(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v5 = *(_QWORD *)(v4 + 112);
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[4]) = 16;
  v8 = 0;
  v9[3] = *(_QWORD *)(a1 + 16);
  LODWORD(v9[5]) = a2;
  v6 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v9, 48, (unsigned int)&v8, 4);
  if ( v6 < 0 )
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v4 + 72),
             2u,
             7u,
             0x17u,
             (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
             v6);
  result = (unsigned int)v8;
  if ( v8 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 72),
      2u,
      7u,
      0x18u,
      (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
      v8);
    return Debug_FreAssertMsg(
             "IOCTL succeeded but CommandAdvanceDequeuePointer failed in VTL-1 failed",
             0LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
             678LL);
  }
  return result;
}
