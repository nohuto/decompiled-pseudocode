/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000C710
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C470 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000C690 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CF34 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00287C4 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // r15
  __int64 v5; // r14
  bool v6; // bp
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  _BOOL8 result; // rax
  __int64 v18; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 480) )
    v3 = *(_QWORD *)(v1 + 480);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 428), 0, 0) == 1;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 448);
  v9 = v8 * (unsigned __int128)0x989680uLL;
  v20 = *((_QWORD *)&v9 + 1);
  if ( is_mul_ok(v8, 0x989680uLL) )
    v10 = v9 / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v10 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
        + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  *(_QWORD *)(v1 + 440) += v10;
  v4[319] += v10;
  v11 = *(_QWORD *)(v1 + 96);
  v12 = *(unsigned int *)(*(_QWORD *)(v11 + 24) + 4LL);
  v13 = *(int **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL) + 8 * v12)
                + 8LL * *(unsigned __int16 *)(v11 + 4)
                + 8);
  *(_QWORD *)v13 += v10;
  LODWORD(v13) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 6184), v10);
  *(LARGE_INTEGER *)(v1 + 448) = v7;
  if ( v6
    || (LODWORD(v14) = *(_DWORD *)(v5 + 2168), (v14 & 4) != 0)
    && (v14 = *(unsigned int *)(v1 + 396), v13 = gulPriorityToYieldPriorityBand, !gulPriorityToYieldPriorityBand[v14]) )
  {
    v14 = *(_QWORD *)(v3 + 432) - v10;
    *(_QWORD *)(v3 + 432) = v14;
    if ( v6 && v14 <= 0 )
    {
      v14 = *(_QWORD *)(v1 + 480);
      if ( v14 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 428), 2, 1);
        v14 = *(_QWORD *)(v1 + 480);
        _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 428), 2, 0);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 428), 2, 1);
      }
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v15 = *(_QWORD *)(v1 + 56);
    if ( !v15 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v15) = v1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        v14,
        (_DWORD)v13,
        v12,
        v15,
        *(_QWORD *)(v1 + 440),
        *(_QWORD *)(v1 + 432),
        v4[244],
        *(_DWORD *)(v1 + 428),
        2);
    v16 = *(_QWORD *)(v1 + 480);
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 56);
      if ( !v18 || (*(_DWORD *)(v16 + 112) & 0x40) != 0 )
        v18 = *(_QWORD *)(v1 + 480);
      if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0piixqq(
          *(_QWORD *)(v16 + 440),
          v16,
          v12,
          v18,
          *(_QWORD *)(v16 + 440),
          *(_QWORD *)(v16 + 432),
          v4[244],
          *(_DWORD *)(v16 + 428),
          2);
    }
  }
  a1[3] = *(_QWORD *)(v3 + 432);
  result = v6;
  a1[2] = *(_QWORD *)(v1 + 440);
  return result;
}
