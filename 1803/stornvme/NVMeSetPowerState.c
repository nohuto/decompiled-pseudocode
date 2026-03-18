/*
 * XREFs of NVMeSetPowerState @ 0x1C000F304
 * Callers:
 *     NVMePowerSetFState @ 0x1C00063EC (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0006728 (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = a2;
  *(_BYTE *)(a1 + 603) = 0;
  memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
  v4 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 656) = v4;
  *(_DWORD *)(a1 + 592) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 688);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 600);
  LOBYTE(v6) = 1;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v6, 1000LL);
}
