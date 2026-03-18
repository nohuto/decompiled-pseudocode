/*
 * XREFs of XilCommand_CreateSecureObject @ 0x1C0005AE4
 * Callers:
 *     XilCommand_Create @ 0x1C0005A84 (XilCommand_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_CreateSecureObject(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  _QWORD v10[6]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = v2[14];
  memset(v10, 0, sizeof(v10));
  v10[3] = 0LL;
  LODWORD(v10[4]) = 11;
  v10[5] = v2[57];
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v10, 48, (unsigned int)&v8, 16);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = v8;
    if ( v8 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v9;
    }
    else
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(v2[9], v5, 7, 11, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v8);
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandCreate failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        92LL);
    }
  }
  else
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(v2[9], v5, 7, 10, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v4);
  }
  return v6;
}
