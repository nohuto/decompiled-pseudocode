/*
 * XREFs of MiUpdateSystemPdes @ 0x140213694
 * Callers:
 *     MiSyncSystemPdes @ 0x1400B7A74 (MiSyncSystemPdes.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 * Callees:
 *     MiCopyTopLevelMappings @ 0x1400B7AC8 (MiCopyTopLevelMappings.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v7, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  *(_QWORD *)(v4 + 3944) = v3;
  v5 = 0xFFFFF6FB7DBED000uLL;
  if ( v4 + 3944 >= 0xFFFFF6FB7DBED000uLL && v4 + 3944 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  LOBYTE(v5) = v7;
  return MiUnmapPageInHyperSpaceWorker(v4, v5, 0x80000000LL);
}
