/*
 * XREFs of sub_18003D65C @ 0x18003D65C
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18003D710 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     sub_18003F9CC @ 0x18003F9CC (sub_18003F9CC.c)
 */

__int64 __fastcall sub_18003D65C(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a4 )
    *a4 = 0LL;
  if ( !a1 || *a1 < 0x20u || (a1[1] & 0xFFFFFFF8) != 0 || !a2 || !a3 )
    return 3221225485LL;
  a1[5] = 0;
  result = sub_18003F9CC();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
