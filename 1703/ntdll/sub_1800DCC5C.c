/*
 * XREFs of sub_1800DCC5C @ 0x1800DCC5C
 * Callers:
 *     RtlApplicationVerifierStop @ 0x1800DCBC0 (RtlApplicationVerifierStop.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 */

void __fastcall __noreturn sub_1800DCC5C(
        const void *a1,
        const char *a2,
        const void *a3,
        const char *a4,
        const void *a5,
        const char *a6,
        const void *a7,
        const char *a8,
        const void *a9,
        const char *a10)
{
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8

  v10 = xmmword_18015AE30;
  xmmword_18015A500 = xmmword_18015AE20;
  *(_QWORD *)&xmmword_18015AE20 = a1;
  v11 = qword_18015AE40;
  *((_QWORD *)&xmmword_18015AE30 + 1) = a7;
  qword_18015AE40 = (__int64)a9;
  qword_18015A520 = v11;
  xmmword_18015A510 = v10;
  *((_QWORD *)&xmmword_18015AE20 + 1) = a3;
  *(_QWORD *)&xmmword_18015AE30 = a5;
  DbgPrint(
    "\n"
    "\n"
    "===========================================================\n"
    "VERIFIER STOP %p: pid 0x%X: %s \n"
    "\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "===========================================================\n"
    "\n",
    a1,
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  __debugbreak();
}
