/*
 * XREFs of MiUpdateSystemPdes @ 0x14025191C
 * Callers:
 *     MiSyncSystemPdes @ 0x1400709B4 (MiSyncSystemPdes.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCopyTopLevelMappings @ 0x140070BCC (MiCopyTopLevelMappings.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 40) >> 12;
  v6 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v5 << 12)) & 0xFFFFFFFFF000LL;
  v7 = MiMapPageInHyperSpaceWorker(v5, &v11, 0x80000000, a4);
  MiCopyTopLevelMappings(a1, v7);
  *(_QWORD *)(v7 + 3944) = v6;
  if ( MiPteInShadowRange(v7 + 3944) )
    MiWritePteShadow(v8, v6, v9);
  return MiUnmapPageInHyperSpaceWorker(v7, v11, 0x80000000);
}
