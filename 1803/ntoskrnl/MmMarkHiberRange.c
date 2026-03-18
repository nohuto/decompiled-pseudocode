/*
 * XREFs of MmMarkHiberRange @ 0x1405EFF24
 * Callers:
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 */

void __fastcall MmMarkHiberRange(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 PteAddress; // rax
  PVOID v5; // r10
  PVOID v6; // r11

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v2 + v3);
  PoSetHiberRange(v6, 2u, v5, PteAddress - (_QWORD)v5, 0x20657450u);
}
