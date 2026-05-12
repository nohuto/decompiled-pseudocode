/*
 * XREFs of RaidAdapterSetPowerIrp @ 0x1C0011BF0
 * Callers:
 *     RaidAdapterPowerIrp @ 0x1C0011B28 (RaidAdapterPowerIrp.c)
 * Callees:
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F0A8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011CC0 (RaidAdapterSetDevicePowerIrp.c)
 *     WPP_SF_qqs @ 0x1C0038698 (WPP_SF_qqs.c)
 *     WPP_SF_qqsD @ 0x1C0038738 (WPP_SF_qqsD.c)
 */

NTSTATUS __fastcall RaidAdapterSetPowerIrp(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int LowPart; // ebx
  unsigned int Options; // ebp
  PDEVICE_OBJECT v8; // rcx
  const char *v9; // r14
  int v10; // eax
  int v11; // ebx
  const char *v13; // rax
  _IO_STACK_LOCATION *v14; // rax
  _DEVICE_OBJECT *AttachedDevice; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = WPP_GLOBAL_Control;
  v9 = "System";
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v13 = "System";
    if ( Options )
      v13 = "Device";
    WPP_SF_qqs(WPP_GLOBAL_Control->AttachedDevice, 15, a3, a1, (char)a2, (__int64)v13);
    v8 = WPP_GLOBAL_Control;
  }
  if ( !Options )
  {
    if ( LowPart > 6 )
    {
      v14 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
      *(_OWORD *)&v14[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v14->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v14[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v14->Parameters.QueryDeviceRelations + 6);
      v14[-1].FileObject = v14->FileObject;
      v14[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v10 = RaidAdapterSetSystemPowerIrp(a1, a2);
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v10 = RaidAdapterSetDevicePowerIrp(a1, a2);
LABEL_6:
    v8 = WPP_GLOBAL_Control;
    v11 = v10;
    goto LABEL_7;
  }
  v11 = -1073741823;
LABEL_7:
  if ( v8 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v8->Timer) & 4) != 0 && BYTE1(v8->Timer) >= 4u )
  {
    AttachedDevice = v8->AttachedDevice;
    if ( Options )
      v9 = "Device";
    WPP_SF_qqsD((_DWORD)AttachedDevice, 16, a3, a1, (char)a2, (__int64)v9, v11);
  }
  return v11;
}
