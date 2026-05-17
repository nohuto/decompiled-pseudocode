/*
 * XREFs of sub_180086D90 @ 0x180086D90
 * Callers:
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180105FE8 @ 0x180105FE8 (sub_180105FE8.c)
 * Callees:
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 */

struct _PEB *__fastcall sub_180086D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  struct _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == qword_18015C378 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)sub_180018928((const void **)&qword_18015C378, (__int64)&qword_18015C380);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)sub_1801058B8(Ldr, a2, a3, a4);
  return result;
}
