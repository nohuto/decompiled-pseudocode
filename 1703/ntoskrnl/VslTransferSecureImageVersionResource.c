/*
 * XREFs of VslTransferSecureImageVersionResource @ 0x14026A670
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslTransferSecureImageVersionResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v9[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v10; // [rsp+78h] [rbp-80h]
  unsigned __int64 v11; // [rsp+80h] [rbp-78h]
  unsigned __int64 v12; // [rsp+88h] [rbp-70h]
  __int64 v13; // [rsp+90h] [rbp-68h]

  if ( (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer(v8, a2, a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v11 = v8[0];
    v12 = v8[7];
    v10 = a1;
    v13 = a4;
    v7 = VslpEnterIumSecureMode(1, 31LL, 0LL, (__int64)v9);
    VslpUnlockPagesForTransfer((__int64)v8);
    return v7;
  }
  return result;
}
