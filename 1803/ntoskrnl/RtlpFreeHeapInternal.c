/*
 * XREFs of RtlpFreeHeapInternal @ 0x1400AB3B8
 * Callers:
 *     RtlFreeHeap @ 0x1400AB340 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14028710C (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1400AC418 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x14028C138 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

__int64 RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+38h] [rbp-20h]
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    RtlpHpConvertFlagsToSegmentFlags(a3);
    return (unsigned int)RtlpHpVsContextFree((PEX_SPIN_LOCK)(a1 + 64), (__int64)va);
  }
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v9 = a2;
      v10 = 9;
    }
    else
    {
      v8 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
      if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
        goto LABEL_13;
      v9 = v8;
      v10 = 8;
    }
    RtlpLogHeapFailure(v10, a1, v9, 0, 0LL);
    v8 = 0LL;
  }
LABEL_13:
  if ( !v8 )
    return v6;
  if ( *(_BYTE *)(a2 - 1) != 5 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v8);
  if ( !*(_DWORD *)(a1 + 124) )
    goto LABEL_21;
  v11 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
  if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v8 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v11))) )
  {
LABEL_34:
    RtlpLogHeapFailure(3, a1, v8, a2, 0LL);
    return v6;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v12 = *(_DWORD *)(v8 + 8);
    v13 = *(_DWORD *)(a1 + 124);
    LOWORD(v22) = v12;
    if ( (v13 & v12) != 0 )
      v22 = *(_DWORD *)(a1 + 136) ^ v12;
    v14 = v22;
  }
  else
  {
LABEL_21:
    v14 = *(_WORD *)(v8 + 8);
    v13 = 0;
  }
  v15 = v14;
  if ( *(_BYTE *)(v8 + 15) == 4 )
  {
    if ( v13 )
    {
      v16 = *(_DWORD *)(v8 + 8);
      LOWORD(v23) = v16;
      if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
        v23 = *(_DWORD *)(a1 + 136) ^ v16;
      v17 = v23;
    }
    else
    {
      v17 = *(_WORD *)(v8 + 8);
    }
    v18 = v15 + *(_QWORD *)(v8 - 16) - v17;
  }
  else
  {
    v18 = 16LL * v14;
  }
  if ( v18 + v8 < a2 )
    goto LABEL_34;
  v19 = *(_DWORD *)(a2 - 8);
  if ( (a3 & 0x3C000102) != 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v8);
  v20 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
  v21 = v19 && (_WORD)v19 == 1
      ? ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(a1, a2, 3LL, v20)
      : -1073741823;
  if ( v21 >= 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v8);
  return v6;
}
