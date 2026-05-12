/*
 * XREFs of RaAdapterSetTemperatureThresholdIoctl @ 0x1C002C12C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C003AA70 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 */

__int64 __fastcall RaAdapterSetTemperatureThresholdIoctl(_QWORD *a1, IRP *a2)
{
  PVOID v2; // rbx
  unsigned int v5; // edi
  _IRP *MasterIrp; // rcx
  __int16 MdlAddress; // ax
  int v8; // eax
  ULONG v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v10 = 0;
  P = 0LL;
  if ( a1[66] && a1[67] )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x10 )
    {
      v5 = -1073741820;
      goto LABEL_14;
    }
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    MdlAddress = (__int16)MasterIrp->MdlAddress;
    if ( (MdlAddress & 1) == 0 )
      LOWORD(MasterIrp->MdlAddress) = MdlAddress | 1;
    v8 = RaBuildSetTemperatureThresholdBufferForMiniport(a1[1], a2, &P, &v10);
    v2 = P;
    if ( v8 >= 0 && P )
      v5 = RaidAdapterSendSrbIoControlSynchronously((__int64)a1, a2, (unsigned int *)P, v10, 0LL, 0, 128);
    else
      v5 = -1073741801;
  }
  else
  {
    v5 = -1073741823;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
LABEL_14:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
