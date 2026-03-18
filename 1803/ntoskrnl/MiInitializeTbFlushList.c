/*
 * XREFs of MiInitializeTbFlushList @ 0x14003B3A0
 * Callers:
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
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
