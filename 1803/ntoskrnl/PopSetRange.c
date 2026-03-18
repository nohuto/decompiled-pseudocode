/*
 * XREFs of PopSetRange @ 0x140156C6C
 * Callers:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x140292630 (RtlMarkHiberPhase.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x140477278 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1404772B8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x1404772D0 (PopCloneRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
