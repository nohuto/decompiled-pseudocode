/*
 * XREFs of NVMeSetPowerState @ 0x1C000E67C
 * Callers:
 *     NVMePowerSetFState @ 0x1C0005E7C (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000618C (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = a2;
  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v4 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v4;
  *(_DWORD *)(a1 + 560) = 1;
  *(_BYTE *)(v4 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
  v5 = *(_QWORD *)(a1 + 656);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v6) = 1;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v6, 1000LL);
}
