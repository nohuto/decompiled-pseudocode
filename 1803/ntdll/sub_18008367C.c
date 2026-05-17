/*
 * XREFs of sub_18008367C @ 0x18008367C
 * Callers:
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180003C20 (RtlSetSearchPathMode.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008AB30 (LdrRemoveDllDirectory.c)
 *     sub_1800D97E4 @ 0x1800D97E4 (sub_1800D97E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008367C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}
