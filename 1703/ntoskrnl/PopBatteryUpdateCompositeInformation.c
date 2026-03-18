/*
 * XREFs of PopBatteryUpdateCompositeInformation @ 0x1406CABEC
 * Callers:
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopResetCBTriggers @ 0x1405C3DD8 (PopResetCBTriggers.c)
 */

__int64 PopBatteryUpdateCompositeInformation()
{
  __int64 v0; // rcx
  unsigned __int32 v1; // r10d
  __int32 v2; // r8d
  __int32 v3; // edx
  __int32 v4; // r9d
  unsigned __int32 v5; // r11d
  unsigned __int32 v6; // ebx
  int v7; // eax
  int v8; // eax
  __m128i v10[3]; // [rsp+50h] [rbp-30h] BYREF

  memset(v10, 0, 0x24uLL);
  v0 = qword_14034B3B0;
  v1 = v10[1].m128i_u32[2];
  v2 = v10[1].m128i_i32[0];
  v3 = v10[0].m128i_i32[3];
  v4 = v10[0].m128i_i32[0];
  if ( (__int64 *)qword_14034B3B0 != &qword_14034B3B0 )
  {
    v5 = v10[1].m128i_u32[3];
    v6 = v10[1].m128i_u32[1];
    do
    {
      v4 |= *(_DWORD *)(v0 + 48);
      v7 = *(_DWORD *)(v0 + 60);
      if ( v7 != -1 )
        v3 += v7;
      v8 = *(_DWORD *)(v0 + 64);
      if ( v8 != -1 )
        v2 += v8;
      if ( v6 < *(_DWORD *)(v0 + 68) )
        v6 = *(_DWORD *)(v0 + 68);
      if ( v1 < *(_DWORD *)(v0 + 72) )
        v1 = *(_DWORD *)(v0 + 72);
      if ( v5 < *(_DWORD *)(v0 + 76) )
        v5 = *(_DWORD *)(v0 + 76);
      v0 = *(_QWORD *)v0;
    }
    while ( (__int64 *)v0 != &qword_14034B3B0 );
    v10[0].m128i_i32[3] = v3;
    v10[0].m128i_i32[0] = v4;
    v10[1].m128i_i32[3] = v5;
    *(__int64 *)((char *)v10[1].m128i_i64 + 4) = __PAIR64__(v1, v6);
  }
  dword_14034B3F4 = v10[2].m128i_i32[0];
  if ( !v2 )
    v2 = v3;
  v10[1].m128i_i32[0] = v2;
  unk_14034B3D4 = v10[0];
  *(__m128i *)((char *)&qword_14034B3E0 + 4) = v10[1];
  DbgPrintEx(
    0x92u,
    2u,
    "\n"
    "Composite Information\n"
    "|-- Capabilities        = 0x%08x\n"
    "|-- DesignedCapacity    = %u\n"
    "|-- FullChargedCapacity = %u\n"
    "|-- DefaultAlert1       = %u\n"
    "|-- DefaultAlert2       = %u\n"
    "|-- CriticalBias        = %u\n",
    v4,
    _mm_srli_si128(*v10, 8).m128i_i32[1],
    v2,
    v10[1].m128i_i32[1],
    v1,
    _mm_srli_si128(*(v10 + 16), 8).m128i_i32[1]);
  PopAcquirePolicyLock();
  PopResetCBTriggers(0x80u);
  if ( byte_14034BC9F )
  {
    byte_14034BC9F = 0;
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock();
}
