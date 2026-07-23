/*
 * XREFs of RtlpAffinitizeSegmentInfoForBucket @ 0x180077C88
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180077E1C (RtlpExtendLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpAffinitizeSegmentInfoForBucket(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // edi
  __int64 v8; // rax
  _WORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
    return (unsigned int)-1073741823;
  v4 = RtlpAffinityState[0];
  if ( LODWORD(RtlpAffinityState[0]) <= 1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
    if ( *(_QWORD *)(a1 + 8 * v3 + 2224) )
    {
      v7 = -1073741302;
    }
    else
    {
      v5 = (unsigned int)(v4 - 1);
      v6 = v5;
      v7 = RtlpExtendLowFragHeapSegment(a1, 192 * v5, &v13);
      if ( v7 >= 0 )
      {
        v8 = v13;
        if ( (_DWORD)v5 )
        {
          v9 = (_WORD *)(v13 + 172);
          v10 = (_QWORD *)v13;
          v11 = a1 + 3312;
          do
          {
            *v10 = v11;
            v11 += 48LL;
            *v9 = v3;
            v10 += 24;
            v9 += 96;
            --v6;
          }
          while ( v6 );
        }
        *(_QWORD *)(a1 + 8 * v3 + 2224) = v8;
      }
    }
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
  }
  return (unsigned int)v7;
}
