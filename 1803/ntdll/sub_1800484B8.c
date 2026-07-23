/*
 * XREFs of sub_1800484B8 @ 0x1800484B8
 * Callers:
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 *     sub_180108FC8 @ 0x180108FC8 (sub_180108FC8.c)
 * Callees:
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 */

void __fastcall sub_1800484B8(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 != qword_18015D3B8 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      sub_1801086C8(Ldr, a2, a3, a4);
  }
  else
  {
    sub_180047198((const void **)&qword_18015D3B8, &stru_18015D3B0);
  }
}
