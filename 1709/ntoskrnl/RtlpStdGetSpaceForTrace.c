/*
 * XREFs of RtlpStdGetSpaceForTrace @ 0x1402511F0
 * Callers:
 *     RtlpStdLogCapturedStackTrace @ 0x1402512B4 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpStdExtendLowerWatermark @ 0x140250F4C (RtlpStdExtendLowerWatermark.c)
 */

_SLIST_ENTRY *__fastcall RtlpStdGetSpaceForTrace(volatile signed __int32 *SpinLock, unsigned __int16 a2)
{
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  KSPIN_LOCK v7; // rdx
  unsigned int v8; // ecx

  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&SpinLock[4 * i + 52]);
    if ( v6 )
    {
      _InterlockedDecrement(SpinLock + 49);
      return v6 - 1;
    }
  }
  v7 = RtlpStdExtendLowerWatermark((KSPIN_LOCK *)SpinLock, (8LL * a2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 )
  {
    v8 = ((((8 * a2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v8 > 0x1F )
      LOWORD(v8) = 31;
    *(_WORD *)(v7 + 8) = ((_WORD)v8 << 11) | *(_WORD *)(v7 + 8) & 0x7FF;
  }
  return (_SLIST_ENTRY *)v7;
}
