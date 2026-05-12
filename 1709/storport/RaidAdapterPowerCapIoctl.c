/*
 * XREFs of RaidAdapterPowerCapIoctl @ 0x1C002DA90
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0037960 (RaidAdapterSetMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterPowerCapIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v4; // edi
  _IRP *MasterIrp; // rbx
  signed int v8; // r8d
  unsigned int MdlAddress; // ecx
  __int64 v10; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v8 = -1073741820;
  }
  else if ( *(_DWORD *)&MasterIrp->Type == 1
         && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x18u
         && (MdlAddress = (unsigned int)MasterIrp->MdlAddress, MdlAddress <= 1) )
  {
    v10 = *(_QWORD *)(a1 + 5088);
    if ( v10 && *(_QWORD *)(v10 + 32) )
    {
      v12 = *(_QWORD *)&MasterIrp->Flags;
      LOBYTE(a3) = MdlAddress == 0;
      v8 = RaidAdapterSetMaxOperationalPower(a1, &v12, a3);
      if ( v8 >= 0 )
      {
        v4 = 24;
        *(_QWORD *)&MasterIrp->Flags = v12;
      }
    }
    else
    {
      v8 = -1073741637;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  a2->IoStatus.Information = v4;
  return RaidCompleteRequestEx(a2, 0, v8);
}
