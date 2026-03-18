/*
 * XREFs of XilCommand_AllocateSecureResources @ 0x1C0005948
 * Callers:
 *     XilCommand_AllocateResources @ 0x1C00058F0 (XilCommand_AllocateResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  memset(v9, 0, sizeof(v9));
  v8[3] = *(_QWORD *)(a1 + 32);
  LODWORD(v8[4]) = 12;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)v9, 32);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9[0];
    if ( SLODWORD(v9[0]) >= 0 )
    {
      *(_QWORD *)(a1 + 40) = v9[1];
      *(_QWORD *)(a1 + 48) = v9[2];
      *(_DWORD *)(a1 + 56) = v9[3];
    }
    else
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        v5,
        7,
        14,
        (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
        v9[0]);
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        214LL);
    }
  }
  else
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v5, 7, 13, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v4);
  }
  return v6;
}
