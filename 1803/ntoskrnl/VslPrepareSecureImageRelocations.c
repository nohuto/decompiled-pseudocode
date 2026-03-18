/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x14015CAB0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x14015CF14 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall VslPrepareSecureImageRelocations(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v8; // edi
  _QWORD v9[30]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v11; // [rsp+128h] [rbp+28h]
  __int64 v12; // [rsp+130h] [rbp+30h]
  __int64 v13; // [rsp+138h] [rbp+38h]
  __int64 v14; // [rsp+140h] [rbp+40h]
  __int64 v15; // [rsp+148h] [rbp+48h]
  __int64 v16; // [rsp+150h] [rbp+50h]
  __int64 v17; // [rsp+158h] [rbp+58h]
  __int64 v18; // [rsp+160h] [rbp+60h]

  v4 = ((unsigned __int64)(a3 & 0xFFF) + a4 + 4095) >> 12;
  if ( v4 > 0x1FA )
    return 3221225485LL;
  if ( v4 )
  {
    result = VslpLockPagesForTransfer((unsigned int)v9, a3, a4, 0, 0);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    memset(v9, 0, 0x48uLL);
  }
  memset(&v9[20], 0, 0x48uLL);
  memset(&v9[10], 0, 0x48uLL);
  v13 = v9[0];
  v14 = v9[7];
  v15 = v9[10];
  v16 = v9[17];
  v17 = v9[20];
  v18 = v9[27];
  v11 = a1;
  v12 = a2;
  v8 = VslpEnterIumSecureMode(2u, 27LL, 0, (__int64)v10);
  if ( v4 )
    VslpUnlockPagesForTransfer(v9);
  return v8;
}
