/*
 * XREFs of XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0033418
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_SendRequestToRingDoorbell(_QWORD *a1, char a2, __int16 a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int16 v9; // r9
  int v10; // [rsp+28h] [rbp-70h]
  int v11; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(a1[7] + 8LL);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v12, 0, sizeof(v12));
  v12[3] = *a1;
  LODWORD(v12[4]) = 31;
  LOBYTE(v12[5]) = a2;
  WORD1(v12[5]) = a3;
  LODWORD(result) = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v12, 48, (unsigned int)&v11, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v11;
    if ( v11 >= 0 )
      return result;
    v9 = 13;
  }
  else
  {
    v9 = 12;
  }
  v10 = result;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v6 + 72),
           2u,
           0xCu,
           v9,
           (__int64)&WPP_ef5eddd1bf0d3dd74888b2eada32d46b_Traceguids,
           v10);
}
