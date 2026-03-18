/*
 * XREFs of XilCommand_SendRequestToRingDoorbell @ 0x1C000F5FC
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x1C000F6D0 (XilCommand_WriteDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendRequestToRingDoorbell(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int16 v5; // r9
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[4]) = 19;
  v7 = 0;
  v8[3] = *(_QWORD *)(a1 + 16);
  LODWORD(result) = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v7;
    if ( v7 >= 0 )
      return result;
    v5 = 30;
  }
  else
  {
    v5 = 29;
  }
  v6 = result;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 72),
           2u,
           7u,
           v5,
           (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
           v6);
}
