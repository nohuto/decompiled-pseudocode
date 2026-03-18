/*
 * XREFs of MiInitializeTbFlushList @ 0x1400A5D30
 * Callers:
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406E5880 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
