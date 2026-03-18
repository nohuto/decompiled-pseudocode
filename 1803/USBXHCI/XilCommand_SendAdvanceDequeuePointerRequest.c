/*
 * XREFs of XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C00061C8
 * Callers:
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C00058C8 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendAdvanceDequeuePointerRequest(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  int v7; // edx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[6]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v5 = *(_QWORD *)(v4 + 112);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[4]) = 16;
  v9 = 0;
  v10[3] = *(_QWORD *)(a1 + 32);
  LODWORD(v10[5]) = a2;
  v6 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v10, 48, (unsigned int)&v9, 4);
  if ( v6 >= 0 )
  {
    result = (unsigned int)v9;
    if ( v9 < 0 )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), v7, 7, 24, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v9);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandAdvanceDequeuePointer failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               692LL);
    }
  }
  else
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v4 + 72),
             v7,
             7,
             23,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             v6);
  }
  return result;
}
