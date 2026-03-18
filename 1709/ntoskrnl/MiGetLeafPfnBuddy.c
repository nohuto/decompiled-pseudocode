/*
 * XREFs of MiGetLeafPfnBuddy @ 0x1400D00B8
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1400CE71C (MiCanStealKernelStack.c)
 *     MiDoStackCopy @ 0x1400CFFD0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MiLogMdlRangeEvent @ 0x140217578 (MiLogMdlRangeEvent.c)
 *     MiFreeLargePages @ 0x14022E560 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1405946BC (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1406EA8CC (MiGetNextDirectFixupProto.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
