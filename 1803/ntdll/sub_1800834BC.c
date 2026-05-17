/*
 * XREFs of sub_1800834BC @ 0x1800834BC
 * Callers:
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1800834BC(_BYTE *a1))(_QWORD *, __int64, _BYTE *)
{
  _BYTE *v1; // r8
  unsigned __int8 v2; // r10
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // al
  __int64 (__fastcall *result)(_QWORD *, __int64, _BYTE *); // rax
  _QWORD v6[2]; // [rsp+58h] [rbp-20h] BYREF

  v6[0] = 0LL;
  v1 = a1;
  v6[1] = 0LL;
  if ( a1[124] )
    v2 = a1[125];
  else
    v2 = 0;
  if ( a1[244] )
  {
    v3 = a1[245];
    v4 = v2;
    if ( v2 <= v3 )
      v4 = v3;
    v2 = v4;
  }
  result = (__int64 (__fastcall *)(_QWORD *, __int64, _BYTE *))*((_QWORD *)v1 + 6);
  if ( result )
  {
    LOBYTE(v1) = v2;
    return (__int64 (__fastcall *)(_QWORD *, __int64, _BYTE *))result(v6, 1LL, v1);
  }
  return result;
}
