/*
 * XREFs of sub_1800D646C @ 0x1800D646C
 * Callers:
 *     RtlApplicationVerifierStop @ 0x1800D63D0 (RtlApplicationVerifierStop.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 */

void __fastcall __noreturn sub_1800D646C(
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

  v10 = xmmword_18015BE50;
  xmmword_18015B520 = xmmword_18015BE40;
  *(_QWORD *)&xmmword_18015BE40 = a1;
  v11 = qword_18015BE60;
  *((_QWORD *)&xmmword_18015BE50 + 1) = a7;
  qword_18015BE60 = (__int64)a9;
  qword_18015B540 = v11;
  xmmword_18015B530 = v10;
  *((_QWORD *)&xmmword_18015BE40 + 1) = a3;
  *(_QWORD *)&xmmword_18015BE50 = a5;
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
