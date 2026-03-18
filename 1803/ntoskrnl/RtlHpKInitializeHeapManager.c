/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1402BD718
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x1401707CC (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x140293048 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x140293128 (RtlHpHeapManagerStart.c)
 */

__int64 RtlHpKInitializeHeapManager()
{
  __int64 v0; // r8
  __int128 v2; // [rsp+30h] [rbp-10h] BYREF

  RtlHpGlobalsInitialize();
  *((_QWORD *)&v2 + 1) = 0x100000000LL;
  *(_QWORD *)&v2 = 0x100000000100LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v2);
  xmmword_1403EFA20 = 0x103uLL;
  v2 = 0xAuLL;
  xmmword_1403EFA30 = 2uLL;
  xmmword_1403EFA40 = 0xAuLL;
  return RtlHpHeapManagerStart(ExPoolState, 0LL, v0);
}
