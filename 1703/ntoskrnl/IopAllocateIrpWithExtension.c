/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14012BFC8
 * Callers:
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1400ED920 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140821E04 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 */

_SLIST_ENTRY *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _SLIST_ENTRY *IrpPrivate; // rax
  _SLIST_ENTRY *v4; // rbx
  bool v5; // zf

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 1, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *((_QWORD *)&IrpPrivate[11].Next + 1) -= 72LL;
    --BYTE3(IrpPrivate[4].Next);
    --BYTE2(IrpPrivate[4].Next);
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&IrpPrivate[12].Next + 1) = *((_QWORD *)&IrpPrivate[11].Next + 1);
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v4;
}
