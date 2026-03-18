/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C000E45C
 * Callers:
 *     NVMePowerInitialize @ 0x1C00054B0 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

void __fastcall NVMeGetAutoPowerStateTransition(__int64 a1, char a2)
{
  __int64 v3; // rax
  char v4; // [rsp+38h] [rbp+10h]

  v4 = a2;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 571) = 0;
    memset(*(void **)(a1 + 656), 0, 0x1098uLL);
    v3 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 624) = v3;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v3 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    NVMeAllocateDmaBuffer(a1, 0x100u);
  }
}
