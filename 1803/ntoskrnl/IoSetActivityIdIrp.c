/*
 * XREFs of IoSetActivityIdIrp @ 0x140162500
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x1400A4924 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x1400A60A0 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1400A4884 (IopFreeIrpExtension.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
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
