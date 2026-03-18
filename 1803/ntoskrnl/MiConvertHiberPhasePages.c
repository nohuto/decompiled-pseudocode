/*
 * XREFs of MiConvertHiberPhasePages @ 0x140475478
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _OWORD v6[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = 2817;
  *((_QWORD *)&v6[9] + 1) = MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v6[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v6[1] + 1) = AnyMultiplexedVm;
  BYTE4(v6[0]) = 17;
  *((_QWORD *)&v6[10] + 1) = a1;
  result = MiWalkPageTables((int *)v6);
  if ( a1 )
    return KeFlushCurrentTbOnly(0LL, v4, v5);
  return result;
}
