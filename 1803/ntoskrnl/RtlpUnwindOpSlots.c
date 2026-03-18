/*
 * XREFs of RtlpUnwindOpSlots @ 0x1400D0974
 * Callers:
 *     RtlVirtualUnwind @ 0x1400CFE60 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400D07CC (RtlpUnwindEpilogue.c)
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x14012D540 (RtlpVirtualUnwind.c)
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14012EE80 (RtlDispatchException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
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
