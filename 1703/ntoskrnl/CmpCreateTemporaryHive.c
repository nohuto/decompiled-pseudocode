/*
 * XREFs of CmpCreateTemporaryHive @ 0x140672A78
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  ULONG_PTR v7[2]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v8[352]; // [rsp+70h] [rbp-178h] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = 0LL;
  if ( (int)CmpInitializeHive(v7, 0, 1, 0, 0LL, 0LL, 0LL, 0x1000000, a2, a3, 0LL, (__int64)v8) >= 0 )
    return v7[0];
  return v5;
}
