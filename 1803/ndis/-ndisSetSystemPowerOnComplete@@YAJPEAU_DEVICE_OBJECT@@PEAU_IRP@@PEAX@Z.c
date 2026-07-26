/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000FC30
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(PDEVICE_OBJECT DeviceObject, struct _IRP *a2, _DWORD *a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v8; // ecx
  __int64 v9; // r9

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(60LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, a4);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3, 5LL);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(61LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v9);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxqq(
        v8,
        (unsigned int)&SystemPowerOnComplete,
        (_DWORD)a3 + 4032,
        (_DWORD)a3 + 4032,
        a3[1020],
        *((_QWORD *)a3 + 506),
        CurrentStackLocation->Parameters.Create.Options,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(62LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, a4);
  return 0LL;
}
