/*
 * XREFs of PopSetRange @ 0x140241F84
 * Callers:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x14025A810 (RtlMarkHiberPhase.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopCloneRange @ 0x14043264C (PopCloneRange.c)
 *     PopDiscardRange @ 0x140432FBC (PopDiscardRange.c)
 *     PopSetBootPhaseRange @ 0x1404357E4 (PopSetBootPhaseRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
