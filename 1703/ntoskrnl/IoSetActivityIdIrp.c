/*
 * XREFs of IoSetActivityIdIrp @ 0x1401535C0
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     IopAllocateIrpExtension @ 0x14012C8E8 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  NTSTATUS v4; // ebx
  _WORD *IrpExtension; // rax

  v4 = 0;
  IrpExtension = IopAllocateIrpExtension(a1, 0);
  if ( !IrpExtension )
    return 3221225626LL;
  if ( a2 )
  {
    *(_OWORD *)(IrpExtension + 12) = *a2;
  }
  else
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      v4 = EtwActivityIdControl(1u, (LPGUID)(IrpExtension + 12));
    else
      v4 = -1073741637;
    if ( v4 < 0 )
      IopFreeIrpExtension(a1, 0, 1);
  }
  return (unsigned int)v4;
}
