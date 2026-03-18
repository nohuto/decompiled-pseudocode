/*
 * XREFs of EtwpUpdateGlobalGroupMasks @ 0x14057B938
 * Callers:
 *     EtwpUpdateKernelGroupsWork @ 0x14057B910 (EtwpUpdateKernelGroupsWork.c)
 *     EtwpUpdateGroupMasks @ 0x140628B88 (EtwpUpdateGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD204 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD260 (EtwReferenceSpinLockCounters.c)
 *     EtwpCoverageSamplerStart @ 0x1407B8468 (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
 *     EtwpEnableKernelTrace @ 0x14057BB2C (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14057BDC8 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  void *v12; // rcx
  __int128 v13; // xmm1
  void *NextSilo; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __m128i si128; // xmm3
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  int v23; // esi
  __int64 v25; // rdx
  void *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  _DWORD *v31; // r8
  int v32; // eax
  _OWORD v33[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v34[32]; // [rsp+50h] [rbp-9h] BYREF
  char v35[32]; // [rsp+70h] [rbp+17h] BYREF

  v4 = a3;
  v5 = a2;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (unsigned int)v4 < 8
    && ((unsigned int)v5 >= *(_DWORD *)(a1 + 16) ? (LOBYTE(v7) = 1) : (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8 * v5)),
        (v7 & 1) != 0) )
  {
    v23 = -2147483611;
  }
  else
  {
    memset(v33, 0, sizeof(v33));
    v8 = 10LL;
    v9 = a1 - (_QWORD)v33 + 4224;
    do
    {
      v10 = v33;
      v11 = 8LL;
      do
      {
        *v10 |= *(_DWORD *)((char *)v10 + v9);
        ++v10;
        --v11;
      }
      while ( v11 );
      v9 += 32LL;
      --v8;
    }
    while ( v8 );
    v12 = 0LL;
    v13 = v33[1];
    *(_OWORD *)(a1 + 4192) = v33[0];
    *(_OWORD *)(a1 + 4208) = v13;
    while ( 1 )
    {
      NextSilo = PspGetNextSilo(v12, 1);
      if ( !NextSilo )
        break;
      v25 = *((_QWORD *)PsGetServerSiloGlobals((__int64)NextSilo) + 108);
      if ( v25 )
      {
        v27 = 8LL;
        v28 = v25 - (_QWORD)v33;
        v29 = v33;
        do
        {
          *v29 |= *(_DWORD *)((char *)v29 + v28 + 4192);
          ++v29;
          --v27;
        }
        while ( v27 );
      }
      v12 = v26;
    }
    v15 = EtwpHostSiloState - (_QWORD)v33;
    v16 = v33;
    v17 = 8LL;
    do
    {
      *v16 |= *(_DWORD *)((char *)v16 + v15 + 4192);
      ++v16;
      --v17;
    }
    while ( v17 );
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v19 = 0LL;
    v20 = 2LL;
    do
    {
      v21 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v19]);
      v22 = _mm_loadu_si128((const __m128i *)&v33[v19++]);
      *(__m128i *)&v34[v19 * 16 + 16] = _mm_and_si128(_mm_andnot_si128(v22, si128), v21);
      v33[v19 + 1] = _mm_and_si128(_mm_andnot_si128(v21, si128), v22);
      --v20;
    }
    while ( v20 );
    EtwpDisableKernelTrace(v33, v35, a1, (unsigned int)v5);
    v23 = EtwpEnableKernelTrace(v33, v34, a1, (unsigned int)v5);
    if ( v23 < 0 )
    {
      v30 = 32 * (v4 + 132);
      v31 = (_DWORD *)(v30 + a1);
      do
      {
        v32 = ~*(_DWORD *)&v34[-v30 - a1 + (_QWORD)v31];
        v31[8 * (-1 - v4)] &= v32;
        *v31 &= v32;
        *(_DWORD *)((char *)v31++ + (_QWORD)&v33[v30 / 0xFFFFFFFFFFFFFFF0uLL] - a1) &= v32;
        --v6;
      }
      while ( v6 );
    }
    xmmword_14044C2D0 = v33[1];
    PerfGlobalGroupMask[0] = v33[0];
    if ( (BYTE4(v33[0]) & 4) != 0 )
      _interlockedbittestandset(&KiCpuTracingFlags, 1u);
    else
      _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v23;
}
