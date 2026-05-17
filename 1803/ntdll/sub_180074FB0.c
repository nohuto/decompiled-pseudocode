/*
 * XREFs of sub_180074FB0 @ 0x180074FB0
 * Callers:
 *     LdrInitializeThunk @ 0x180074F90 (LdrInitializeThunk.c)
 * Callees:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_1800CC6AC @ 0x1800CC6AC (sub_1800CC6AC.c)
 */

struct _TEB *__fastcall sub_180074FB0(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax

  if ( !byte_18015D405 )
    sub_1800CC6AC();
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
    return (struct _TEB *)sub_180075000(a1, a2);
  return result;
}
