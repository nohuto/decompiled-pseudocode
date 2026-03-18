/*
 * XREFs of MiMarkLargePageMappings @ 0x140898CBC
 * Callers:
 *     MiMarkLargePageRanges @ 0x140898B08 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  __int64 v1; // r8
  _OWORD v3[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v3, 0, sizeof(v3));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  LODWORD(v3[0]) = 2567;
  *((_QWORD *)&v3[9] + 1) = MiMarkLargePagePte;
  v3[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  BYTE10(v3[0]) = 1;
  *((_QWORD *)&v3[1] + 1) = AnyMultiplexedVm;
  BYTE4(v3[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((int *)v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE4(v3[0]), v1);
}
