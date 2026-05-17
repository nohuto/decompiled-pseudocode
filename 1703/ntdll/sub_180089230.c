/*
 * XREFs of sub_180089230 @ 0x180089230
 * Callers:
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180089180 (RtlSetSearchPathMode.c)
 *     LdrRemoveDllDirectory @ 0x18008D020 (LdrRemoveDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_1800DFF68 @ 0x1800DFF68 (sub_1800DFF68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180089230(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( (*(_QWORD *)(v1 + 80))-- == 1LL )
      return v1;
  }
  return result;
}
