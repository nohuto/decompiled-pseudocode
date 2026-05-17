/*
 * XREFs of sub_1800F93DC @ 0x1800F93DC
 * Callers:
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 * Callees:
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     sub_1800F916C @ 0x1800F916C (sub_1800F916C.c)
 */

__int64 __fastcall sub_1800F93DC(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  unsigned int v7; // ecx

  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v6 )
    {
      result = (__int64)&v6[-1];
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return result;
    }
  }
  result = sub_1800F916C(a1, (8LL * a2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( result )
  {
    v7 = ((((8 * a2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v7 > 0x1F )
      LOWORD(v7) = 31;
    *(_WORD *)(result + 8) &= 0x7FFu;
    *(_WORD *)(result + 8) |= (_WORD)v7 << 11;
  }
  return result;
}
