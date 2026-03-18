/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x14026A410
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslPrepareSecureImageRelocations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  BOOL v13; // ebx
  int v14; // edi
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v18[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v19[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-8h]
  __int64 v21; // [rsp+100h] [rbp+0h]
  unsigned __int64 v22; // [rsp+108h] [rbp+8h]
  unsigned __int64 v23; // [rsp+110h] [rbp+10h]
  unsigned __int64 v24; // [rsp+118h] [rbp+18h]
  unsigned __int64 v25; // [rsp+120h] [rbp+20h]
  unsigned __int64 v26; // [rsp+128h] [rbp+28h]
  unsigned __int64 v27; // [rsp+130h] [rbp+30h]

  v10 = ((unsigned __int64)(a3 & 0xFFF) + a4 + 4095) >> 12;
  if ( v10 > 0x1FA )
    return 3221225485LL;
  v12 = ((unsigned __int64)(a7 & 0xFFF) + a8 + 4095) >> 12;
  if ( v12 > 0x1FA )
    return 3221225485LL;
  v13 = v12 != 0;
  if ( !v12 )
    goto LABEL_7;
  if ( !a5 )
    return 3221225485LL;
  v13 = 0;
LABEL_7:
  if ( !v10 )
  {
    memset(v16, 0, sizeof(v16));
LABEL_11:
    if ( v13 )
    {
      v14 = VslpLockPagesForTransfer(v17, a7, a8, 0, 0);
      if ( v14 < 0 )
      {
        v15 = v16;
        goto LABEL_21;
      }
      v14 = VslpLockPagesForTransfer(v18, a5, a6, 0, 0);
      if ( v14 < 0 )
      {
        VslpUnlockPagesForTransfer((__int64)v16);
        v15 = v17;
        goto LABEL_21;
      }
    }
    else
    {
      memset(v17, 0, sizeof(v17));
      memset(v18, 0, sizeof(v18));
    }
    v22 = v16[0];
    v23 = v16[7];
    v24 = v18[0];
    v25 = v18[7];
    v26 = v17[0];
    v27 = v17[7];
    v20 = a1;
    v21 = a2;
    v14 = VslpEnterIumSecureMode(1, 27LL, 0LL, (__int64)v19);
    if ( v10 )
      VslpUnlockPagesForTransfer((__int64)v16);
    if ( !v13 )
      return (unsigned int)v14;
    VslpUnlockPagesForTransfer((__int64)v17);
    v15 = v18;
LABEL_21:
    VslpUnlockPagesForTransfer((__int64)v15);
    return (unsigned int)v14;
  }
  result = VslpLockPagesForTransfer(v16, a3, a4, 0, 0);
  if ( (int)result >= 0 )
    goto LABEL_11;
  return result;
}
