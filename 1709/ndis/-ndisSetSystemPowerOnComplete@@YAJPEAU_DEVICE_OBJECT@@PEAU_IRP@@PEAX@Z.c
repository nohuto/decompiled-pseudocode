/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C001FE00
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(PDEVICE_OBJECT DeviceObject, struct _IRP *a2, _DWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v7; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(60LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3, 5LL, a3);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(61LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxqq(
        v7,
        (unsigned int)&SystemPowerOnComplete,
        (_DWORD)a3 + 4032,
        (_DWORD)a3 + 4032,
        a3[1020],
        *((_QWORD *)a3 + 506),
        CurrentStackLocation->Parameters.Create.Options,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(62LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
  return 0LL;
}
