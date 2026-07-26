/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00129C0
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00235D4 (ndisCancelMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  if ( a2 && (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(86LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer(a3);
  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    KeResetEvent(*((PRKEVENT *)a3 + 675));
  *((_QWORD *)a3 + 698) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5520), CriticalWorkQueue);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(87LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
  return 3221225494LL;
}
