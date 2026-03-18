/*
 * XREFs of Controller_CreateSecureObject @ 0x1C00565B8
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  _QWORD v7[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(a1 + 112);
  v7[3] = 0LL;
  LODWORD(v7[4]) = 1;
  v3 = SecureChannel_SendRequestSynchronously(v2, (unsigned int)v7, 40, (unsigned int)&v5, 16);
  if ( v3 >= 0 )
  {
    v3 = v5;
    if ( v5 >= 0 )
      *(_QWORD *)(a1 + 448) = v6;
  }
  return (unsigned int)v3;
}
