/*
 * XREFs of MiInitializeTbFlushList @ 0x14007F890
 * Callers:
 *     MmDeleteShadowMapping @ 0x14041D938 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1404CCB30 (MiEliminateZeroPages.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406B8B58 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
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
