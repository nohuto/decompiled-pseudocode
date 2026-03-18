/*
 * XREFs of RtlpUnwindOpSlots @ 0x140039B28
 * Callers:
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x14000B020 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400E6E50 (RtlpVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = RtlpUnwindOpSlotTable[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
