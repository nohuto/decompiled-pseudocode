/*
 * XREFs of XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017A90
 * Callers:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToFreeSecureStreamContextArray(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[5]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[4]) = 37;
  v9[3] = a2;
  result = SecureChannel_SendRequestSynchronously(v4, (unsigned int)v9, 40, 0, 0);
  if ( (int)result < 0 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v8 = *(_DWORD *)(v6 + 144);
    v7 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    return WPP_RECORDER_SF_dd(
             *(_QWORD *)(v6 + 80),
             2u,
             0xDu,
             0xEu,
             (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
             v7,
             v8);
  }
  return result;
}
