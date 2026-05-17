/*
 * XREFs of RtlpUnwindOpSlots @ 0x180088B08
 * Callers:
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlpWalkFrameChain @ 0x180024BB0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x18002A090 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
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
