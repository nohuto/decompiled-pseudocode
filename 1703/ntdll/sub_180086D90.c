/*
 * XREFs of sub_180086D90 @ 0x180086D90
 * Callers:
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180105FE8 @ 0x180105FE8 (sub_180105FE8.c)
 * Callees:
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 */

void __fastcall sub_180086D90(PVOID a1)
{
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 != qword_18015C378 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      sub_1801058B8(Ldr);
  }
  else
  {
    sub_180018928((const void **)&qword_18015C378, &stru_18015C380);
  }
}
