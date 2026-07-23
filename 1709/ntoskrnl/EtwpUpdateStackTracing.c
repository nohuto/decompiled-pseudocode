/*
 * XREFs of EtwpUpdateStackTracing @ 0x14074FF18
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1404ECCF8 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceStackLookasideList @ 0x14074FEB0 (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(_RTL_BITMAP *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r14
  unsigned int i; // r8d

  v6 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (a1[52].SizeOfBitMap & 0x80u) != 0 )
    {
      RtlClearAllBits(a1 + 133);
    }
    else
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x6D777445u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x400uLL);
      a1[133].SizeOfBitMap = 0x2000;
      a1[133].Buffer = v8;
      _m_prefetchw(&a1[52]);
      if ( (_InterlockedOr((volatile signed __int32 *)&a1[52], 0x2000u) & 0x2000) == 0 )
        EtwpReferenceStackLookasideList();
      _InterlockedOr((volatile signed __int32 *)&a1[52], 0x80u);
    }
    for ( i = 0; i < a3; ++i )
      _bittestandset((signed __int32 *)a1[133].Buffer, *(_WORD *)(a2 + 4LL * i) & 0x1FFF);
  }
  else if ( (a1[52].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 133);
  }
  return v6;
}
