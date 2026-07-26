/*
 * XREFs of ndisQueryPowerComplete @ 0x1C0012A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 */

void __fastcall ndisQueryPowerComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  char v7; // al
  _IRP *v8; // rbx

  Status = IoStatus->Status;
  v7 = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_qD(31LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context, (unsigned int)Status);
    v7 = byte_1C0092615;
  }
  if ( Status < 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(32LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context, (unsigned int)IoStatus->Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&QueryPowerComplete,
        (_DWORD)Context + 4032,
        (_DWORD)Context + 4032,
        *((_DWORD *)Context + 1020),
        *((_QWORD *)Context + 506),
        IoStatus->Status);
  }
  v8 = (_IRP *)*((_QWORD *)Context + 97);
  v8->IoStatus.Status = Status;
  IofCompleteRequest(v8, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4144), v8, 0x20u);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(33LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context);
}
