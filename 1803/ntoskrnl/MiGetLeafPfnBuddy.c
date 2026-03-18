/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140003F94
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x140003BA8 (MiCanStealKernelStack.c)
 *     MiDoStackCopy @ 0x140003EE0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x140124360 (MiPfnsWorthTrying.c)
 *     MiLogMdlRangeEvent @ 0x140254F3C (MiLogMdlRangeEvent.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14026772C (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1405F09CC (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x140754668 (MiGetNextDirectFixupProto.c)
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
