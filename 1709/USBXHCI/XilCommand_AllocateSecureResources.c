/*
 * XREFs of XilCommand_AllocateSecureResources @ 0x1C000EB44
 * Callers:
 *     XilCommand_AllocateResources @ 0x1C000EB18 (XilCommand_AllocateResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-60h]
  int v8; // [rsp+28h] [rbp-60h]
  _QWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  v9[3] = *(_QWORD *)(a1 + 16);
  LODWORD(v9[4]) = 12;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v9, 40, (unsigned int)v10, 32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = v10[0];
    if ( SLODWORD(v10[0]) >= 0 )
    {
      *(_QWORD *)(a1 + 24) = v10[1];
      *(_QWORD *)(a1 + 32) = v10[2];
      *(_DWORD *)(a1 + 40) = v10[3];
    }
    else
    {
      v8 = v10[0];
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        2u,
        7u,
        0xEu,
        (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
        v8);
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        214LL);
    }
  }
  else
  {
    v7 = v4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 2u, 7u, 0xDu, (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids, v7);
  }
  return v5;
}
