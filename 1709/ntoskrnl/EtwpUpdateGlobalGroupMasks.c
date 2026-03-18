/*
 * XREFs of EtwpUpdateGlobalGroupMasks @ 0x140596CD8
 * Callers:
 *     EtwpUpdateKernelGroupsWork @ 0x140596CB0 (EtwpUpdateKernelGroupsWork.c)
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x14074AD54 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14074ADB0 (EtwReferenceSpinLockCounters.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     EtwpEnableKernelTrace @ 0x140596E88 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rbx
  void *v12; // rcx
  __int128 v13; // xmm1
  void *NextSilo; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  __m128i si128; // xmm3
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  int v24; // edi
  __int64 v26; // rdx
  _QWORD *ServerSiloGlobals; // rax
  _DWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  _OWORD v32[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v33[32]; // [rsp+50h] [rbp-29h] BYREF
  char v34[32]; // [rsp+70h] [rbp-9h] BYREF

  v4 = a3;
  v5 = a2;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (_DWORD)v4 == 8
    || ((unsigned int)v5 >= *(_DWORD *)(a1 + 8)
      ? (LOBYTE(v26) = 1)
      : (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8 * v5)),
        (v26 & 1) == 0) )
  {
    memset(v32, 0, sizeof(v32));
    v7 = 9LL;
    v8 = a1 - (_QWORD)v32 + 4208;
    do
    {
      v9 = v32;
      v10 = 8LL;
      do
      {
        *v9 |= *(_DWORD *)((char *)v9 + v8);
        ++v9;
        --v10;
      }
      while ( v10 );
      v8 += 32LL;
      --v7;
    }
    while ( v7 );
    v11 = (_DWORD *)(a1 + 4176);
    v12 = 0LL;
    v13 = v32[1];
    *(_OWORD *)(a1 + 4176) = v32[0];
    *(_OWORD *)(a1 + 4192) = v13;
    while ( 1 )
    {
      NextSilo = PspGetNextSilo(v12, 1);
      v15 = NextSilo;
      if ( !NextSilo )
        break;
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)NextSilo);
      v28 = v32;
      v29 = 8LL;
      v30 = ServerSiloGlobals[108] - (_QWORD)v32;
      do
      {
        *v28 |= *(_DWORD *)((char *)v28 + v30 + 4176);
        ++v28;
        --v29;
      }
      while ( v29 );
      v12 = v15;
    }
    v16 = EtwpHostSiloState - (_QWORD)v32;
    v17 = v32;
    v18 = 8LL;
    do
    {
      *v17 |= *(_DWORD *)((char *)v17 + v16 + 4176);
      ++v17;
      --v18;
    }
    while ( v18 );
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v20 = 0LL;
    v21 = 2LL;
    do
    {
      v22 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v20]);
      v23 = _mm_loadu_si128((const __m128i *)&v32[v20++]);
      *(__m128i *)&v33[v20 * 16 + 16] = _mm_and_si128(_mm_andnot_si128(v23, si128), v22);
      v32[v20 + 1] = _mm_and_si128(_mm_andnot_si128(v22, si128), v23);
      --v21;
    }
    while ( v21 );
    EtwpDisableKernelTrace(v32, v34, (unsigned int)v5);
    v24 = EtwpEnableKernelTrace(v32, v33, (unsigned int)v5);
    if ( v24 < 0 )
    {
      do
      {
        v31 = ~*(_DWORD *)&v33[(_QWORD)v11 - a1 - 4176];
        *v11 &= v31;
        v11[8 * v4 + 8] &= v31;
        *(_DWORD *)((char *)v11++ + (_QWORD)v32 - a1 - 4176) &= v31;
        --v6;
      }
      while ( v6 );
    }
    PerfGlobalGroupMask[0] = v32[0];
    xmmword_140401150 = v32[1];
  }
  else
  {
    v24 = -2147483611;
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v24;
}
