/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00201E0
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C504 (ndisCancelMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  if ( a2 && (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(86LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent((__int64)a3, 0xEu);
  ndisCancelMediaDisconnectTimer((__int64)a3);
  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    KeResetEvent(*((PRKEVENT *)a3 + 675));
  *((_QWORD *)a3 + 686) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5456), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(87LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
  return 3221225494LL;
}
