/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B430
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000B190 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000B3B0 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000D838 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0026704 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // r13
  __int64 v5; // r15
  bool v6; // r14
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int *v13; // rdx
  __int64 v14; // rcx
  _BOOL8 result; // rax
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 504) )
    v3 = *(_QWORD *)(v1 + 504);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 448), 0, 0) == 1;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 472);
  v9 = v8 * (unsigned __int128)0x989680uLL;
  v21 = *((_QWORD *)&v9 + 1);
  if ( is_mul_ok(v8, 0x989680uLL) )
    v10 = v9 / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v10 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
        + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  *(_QWORD *)(v1 + 464) += v10;
  v4[317] += v10;
  v11 = *(_QWORD *)(v1 + 96);
  v12 = *(unsigned int *)(*(_QWORD *)(v11 + 24) + 4LL);
  v13 = *(int **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL) + 8 * v12)
                + 8LL * *(unsigned __int16 *)(v11 + 4)
                + 8);
  *(_QWORD *)v13 += v10;
  LODWORD(v13) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 5672), v10);
  *(LARGE_INTEGER *)(v1 + 472) = v7;
  if ( v6
    || (LODWORD(v14) = *(_DWORD *)(v5 + 2152), (v14 & 4) != 0)
    && (v14 = *(unsigned int *)(v1 + 396), v13 = gulPriorityToYieldPriorityBand, !gulPriorityToYieldPriorityBand[v14]) )
  {
    v14 = *(_QWORD *)(v3 + 456) - v10;
    *(_QWORD *)(v3 + 456) = v14;
    if ( v6 && v14 <= 0 )
    {
      v14 = *(_QWORD *)(v1 + 504);
      if ( v14 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 448), 2, 1);
        v14 = *(_QWORD *)(v1 + 504);
        _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 448), 2, 0);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 448), 2, 1);
      }
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v16 = *(_QWORD *)(v1 + 56);
    if ( !v16 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v16) = v1;
    v17 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_piixqq(
        v14,
        (_DWORD)v13,
        v12,
        v16,
        *(_QWORD *)(v1 + 464),
        *(_QWORD *)(v1 + 456),
        v4[242],
        *(_DWORD *)(v1 + 448),
        2);
      v17 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    v18 = *(_QWORD *)(v1 + 504);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 56);
      if ( !v19 || (*(_DWORD *)(v18 + 112) & 0x40) != 0 )
        v19 = *(_QWORD *)(v1 + 504);
      if ( v17 < 0 )
        Template_piixqq(
          *(_QWORD *)(v18 + 464),
          v18,
          v12,
          v19,
          *(_QWORD *)(v18 + 464),
          *(_QWORD *)(v18 + 456),
          v4[242],
          *(_DWORD *)(v18 + 448),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 456);
  a1[2] = *(_QWORD *)(v1 + 464);
  return result;
}
