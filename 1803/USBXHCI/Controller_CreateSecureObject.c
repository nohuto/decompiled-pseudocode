/*
 * XREFs of Controller_CreateSecureObject @ 0x1C00534EC
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+40h] [rbp-48h]
  _QWORD v8[5]; // [rsp+48h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 112);
  v8[3] = 0LL;
  LODWORD(v8[4]) = 1;
  v3 = SecureChannel_SendRequestSynchronously(v2, (unsigned int)v8, 40, (unsigned int)&v5, 24);
  if ( v3 >= 0 )
  {
    v3 = v5;
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 456) = v6;
      *(_DWORD *)(a1 + 448) = v7;
    }
  }
  return (unsigned int)v3;
}
