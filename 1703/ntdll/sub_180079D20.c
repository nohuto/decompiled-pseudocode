/*
 * XREFs of sub_180079D20 @ 0x180079D20
 * Callers:
 *     LdrInitializeThunk @ 0x180079D00 (LdrInitializeThunk.c)
 * Callees:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18008AC70 @ 0x18008AC70 (sub_18008AC70.c)
 */

struct _TEB *__fastcall sub_180079D20(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax

  if ( !byte_18015BF55 )
    sub_18008AC70();
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
    return (struct _TEB *)sub_180079D70(a1, a2);
  return result;
}
