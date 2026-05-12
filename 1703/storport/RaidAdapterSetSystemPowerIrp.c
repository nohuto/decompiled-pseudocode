/*
 * XREFs of RaidAdapterSetSystemPowerIrp @ 0x1C000F0A8
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C0011BF0 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v5; // rax

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].Context = 0LL;
  v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))RaidAdapterSetSystemPowerCompletion;
  v5[-1].Control = -32;
  PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 39LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
