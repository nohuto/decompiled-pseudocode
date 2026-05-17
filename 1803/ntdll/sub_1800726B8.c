/*
 * XREFs of sub_1800726B8 @ 0x1800726B8
 * Callers:
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 *     sub_180082590 @ 0x180082590 (sub_180082590.c)
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x180072750 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800726B8(_QWORD *a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a1[1] - 16LL);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v6 = v2;
  v3 = EtwEventRegister(&v6, (__int64)sub_180074B90, (__int64)a1, a1 + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(a1[4], 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v4;
}
