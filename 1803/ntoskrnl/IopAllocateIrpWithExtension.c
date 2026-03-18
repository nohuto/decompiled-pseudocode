/*
 * XREFs of IopAllocateIrpWithExtension @ 0x140006144
 * Callers:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1400B1AF0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x1408C4968 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2)
{
  __int64 IrpPrivate; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a2 + 1;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2);
  v3 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 72LL;
    v4 = *(_QWORD *)(IrpPrivate + 184);
    --*(_BYTE *)(IrpPrivate + 67);
    --*(_BYTE *)(IrpPrivate + 66);
    *(_QWORD *)(IrpPrivate + 200) = v4;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v3;
}
