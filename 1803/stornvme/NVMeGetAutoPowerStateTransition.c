/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C000F0D8
 * Callers:
 *     NVMePowerInitialize @ 0x1C000592C (NVMePowerInitialize.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 603) = 0;
    memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
    v3 = *(_QWORD *)(a1 + 688);
    *(_QWORD *)(a1 + 656) = v3;
    *(_DWORD *)(a1 + 592) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
    return NVMeAllocateDmaBuffer(a1, 0x100u);
  }
  return result;
}
