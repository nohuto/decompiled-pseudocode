/*
 * XREFs of XilCommand_SendRequestToRingDoorbell @ 0x1C00063F4
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x1C00064C8 (XilCommand_WriteDoorbell.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendRequestToRingDoorbell(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // edx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[4]) = 19;
  v7 = 0;
  v8[3] = *(_QWORD *)(a1 + 32);
  LODWORD(result) = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v7;
    if ( v7 >= 0 )
      return result;
    v6 = 30;
  }
  else
  {
    v6 = 29;
  }
  LOBYTE(v5) = 2;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 72),
           v5,
           7,
           v6,
           (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
           result);
}
