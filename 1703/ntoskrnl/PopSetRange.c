/*
 * XREFs of PopSetRange @ 0x14013F13C
 * Callers:
 *     RtlMarkHiberPhase @ 0x14013ED00 (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 */

void __fastcall PopSetRange(_BYTE *BugCheckParameter3, int a2, __int64 a3, void *a4, ULONG a5)
{
  if ( BugCheckParameter3[28] )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 464LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
  {
    PopDiscardRange(BugCheckParameter3, a3, a4, (ULONG_PTR)a4, a5);
  }
  else if ( (a2 & 2) != 0 )
  {
    PopCloneRange(BugCheckParameter3, a3, a4, a5);
  }
  else
  {
    if ( (a2 & 0x10000) == 0 )
    {
      PopInternalAddToDumpFile(BugCheckParameter3, 464LL, 0LL);
      KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
  }
}
