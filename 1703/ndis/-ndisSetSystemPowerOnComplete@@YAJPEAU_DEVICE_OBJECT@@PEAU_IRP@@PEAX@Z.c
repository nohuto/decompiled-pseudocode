/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00125E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C001267C (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(PDEVICE_OBJECT DeviceObject, struct _IRP *a2, _DWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v7; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(60LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3, 5LL);
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(61LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
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
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(62LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
  return 0LL;
}
