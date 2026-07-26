/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010150
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001AE5C (ndisCancelMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  __int64 v5; // r9

  if ( a2 && (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(86LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer(a3);
  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    KeResetEvent(*((PRKEVENT *)a3 + 676));
  *((_QWORD *)a3 + 687) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5464), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(87LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v5);
  return 3221225494LL;
}
