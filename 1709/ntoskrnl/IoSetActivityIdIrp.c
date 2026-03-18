/*
 * XREFs of IoSetActivityIdIrp @ 0x14014A2C0
 * Callers:
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x140117BC4 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  NTSTATUS v4; // ebx
  _WORD *IrpExtension; // rax
  __int64 v6; // r8

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
    {
      LOBYTE(v6) = 1;
      IopFreeIrpExtension(a1, 0, v6);
    }
  }
  return (unsigned int)v4;
}
