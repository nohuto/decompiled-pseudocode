/*
 * XREFs of MiUpdateSystemPdes @ 0x14020C6F4
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 *     MiSyncSystemPdes @ 0x140063998 (MiSyncSystemPdes.c)
 * Callees:
 *     MiCopyTopLevelMappings @ 0x1400639EC (MiCopyTopLevelMappings.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v6, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  *(_QWORD *)(v4 + 3944) = v3;
  if ( MiPteInShadowRange(v4 + 3944) )
    MiWritePteShadow();
  return MiUnmapPageInHyperSpaceWorker(v4, v6);
}
