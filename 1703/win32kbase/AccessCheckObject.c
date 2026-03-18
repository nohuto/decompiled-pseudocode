/*
 * XREFs of AccessCheckObject @ 0x1C0083F30
 * Callers:
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall AccessCheckObject(__int64 a1, unsigned int a2, char a3, void *a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v11[160]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v12[224]; // [rsp+E0h] [rbp-108h] BYREF

  SeCreateAccessState(v11, v12, a2);
  LOBYTE(v7) = a3;
  LOBYTE(v8) = a4 == &KeyMapping;
  LOBYTE(a4) = ObCheckObjectAccess(a1, v11, v8, v7, v10);
  SeDeleteAccessState(v11);
  return (_BYTE)a4 == 1;
}
