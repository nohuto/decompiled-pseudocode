/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000CC20
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C980 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000CBA0 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E144 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002B6AC (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq @ 0x1C0028BAC (McTemplateK0piixqq.c)
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
  int *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  _BOOL8 result; // rax
  __int64 v16; // rcx
  signed __int32 v17; // eax
  __int64 v18; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 488) )
    v3 = *(_QWORD *)(v1 + 488);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 436), 0, 0) == 1;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 456);
  v9 = v8 * (unsigned __int128)0x989680uLL;
  v20 = *((_QWORD *)&v9 + 1);
  if ( is_mul_ok(v8, 0x989680uLL) )
    v10 = v9 / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v10 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
        + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  *(_QWORD *)(v1 + 448) += v10;
  v4[323] += v10;
  v11 = *(int **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 4LL))
                + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v1 + 96) + 4LL)
                + 8);
  *(_QWORD *)v11 += v10;
  LODWORD(v11) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 6376), v10);
  *(LARGE_INTEGER *)(v1 + 456) = v7;
  if ( v6
    || (LODWORD(v12) = *(_DWORD *)(v5 + 2192), (v12 & 4) != 0)
    && (v12 = *(unsigned int *)(v1 + 404), v11 = gulPriorityToYieldPriorityBand, !gulPriorityToYieldPriorityBand[v12]) )
  {
    v12 = *(_QWORD *)(v3 + 440) - v10;
    *(_QWORD *)(v3 + 440) = v12;
    if ( v6 && v12 <= 0 )
    {
      v16 = *(_QWORD *)(v1 + 488);
      v17 = 1;
      if ( v16 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 436), 2, 1);
        v17 = 0;
        v12 = *(_QWORD *)(v1 + 488) + 436LL;
      }
      else
      {
        v12 = v1 + 436;
      }
      _InterlockedCompareExchange((volatile signed __int32 *)v12, 2, v17);
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v13 = *(_QWORD *)(v1 + 56);
    if ( !v13 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v13) = v1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        v12,
        (_DWORD)v11,
        2,
        v13,
        *(_QWORD *)(v1 + 448),
        *(_QWORD *)(v1 + 440),
        v4[248],
        *(_DWORD *)(v1 + 436),
        2);
    v14 = *(_QWORD *)(v1 + 488);
    if ( v14 )
    {
      v18 = *(_QWORD *)(v14 + 56);
      if ( !v18 || (*(_DWORD *)(v14 + 112) & 0x40) != 0 )
        v18 = *(_QWORD *)(v1 + 488);
      if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0piixqq(
          *(_QWORD *)(v14 + 448),
          v14,
          2,
          v18,
          *(_QWORD *)(v14 + 448),
          *(_QWORD *)(v14 + 440),
          v4[248],
          *(_DWORD *)(v14 + 436),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 440);
  a1[2] = *(_QWORD *)(v1 + 448);
  return result;
}
