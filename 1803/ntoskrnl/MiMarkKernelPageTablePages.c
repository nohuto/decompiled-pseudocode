/*
 * XREFs of MiMarkKernelPageTablePages @ 0x1404855D8
 * Callers:
 *     MmMarkHiberPhase @ 0x1404857DC (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  char *AnyMultiplexedVm; // rax
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 2305;
  *((_QWORD *)&v2[9] + 1) = MiMarkKernelPageTablePte;
  BYTE10(v2[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  BYTE4(v2[0]) = 17;
  return MiWalkPageTables((int *)v2);
}
