/*
 * XREFs of MmUnmapLockedRestartPages @ 0x1406DF360
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 PteAddress; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  MiUnmapMdlCommon(v2, 0LL, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  PteAddress = MiGetPteAddress(v2);
  MiReleaseDriverPtes(0, PteAddress, v3);
}
