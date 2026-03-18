/*
 * XREFs of VslCreateSecureImageSection @ 0x140269FD0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  NTSTATUS v9; // ebx
  unsigned __int64 v10[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp-80h]
  unsigned __int64 v13; // [rsp+80h] [rbp-78h]
  __int64 v14; // [rsp+88h] [rbp-70h]
  __int64 v15; // [rsp+90h] [rbp-68h]
  __int64 v16; // [rsp+98h] [rbp-60h]

  v7 = a4;
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer(v10, a2, a1 << 12, 0, 0);
  if ( (int)result >= 0 )
  {
    v12 = v10[0];
    v13 = v10[7];
    v14 = a3;
    v16 = a5;
    v15 = v7;
    v9 = VslpEnterIumSecureMode(1, 24LL, 0LL, (__int64)v11);
    VslpUnlockPagesForTransfer((__int64)v10);
    if ( v9 >= 0 )
      *a6 = v13;
    return (unsigned int)v9;
  }
  return result;
}
