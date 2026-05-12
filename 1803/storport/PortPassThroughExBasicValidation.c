/*
 * XREFs of PortPassThroughExBasicValidation @ 0x1C0048564
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00689F0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C0068EB4 (PortPassThroughGetAddress.c)
 *     PortPassThroughSetAddress @ 0x1C0069160 (PortPassThroughSetAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // rdi
  BOOLEAN v3; // al
  unsigned int Options; // edx
  unsigned int v5; // ecx
  int MdlAddress; // eax
  int MdlAddress_high; // r8d
  int v9; // r9d
  unsigned int IrpCount; // eax
  unsigned int v11; // r9d

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  v3 = IoIs32bitProcess(a1);
  Options = CurrentStackLocation->Parameters.Create.Options;
  v5 = v3 != 0 ? 52 : 64;
  if ( Options < v5 )
    return 3221225507LL;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v5 )
    return 3221225561LL;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( MdlAddress
    && (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) != 0
    && (v9 = MdlAddress - 1, IrpCount = MasterIrp->AssociatedIrp.IrpCount, v11 = v5 + v9, IrpCount >= v11)
    && Options > v11
    && Options >= MdlAddress_high + IrpCount )
  {
    return BYTE2(MasterIrp->Flags) > 3u ? 0xC000000D : 0;
  }
  else
  {
    return 3221225485LL;
  }
}
