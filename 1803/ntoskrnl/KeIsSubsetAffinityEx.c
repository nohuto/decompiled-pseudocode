/*
 * XREFs of KeIsSubsetAffinityEx @ 0x140240320
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  KeAndAffinityEx(a1, a2, v4);
  return KeIsEqualAffinityEx(a1, v4);
}
