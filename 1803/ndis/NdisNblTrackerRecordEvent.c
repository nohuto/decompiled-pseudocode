/*
 * XREFs of NdisNblTrackerRecordEvent @ 0x1C00679D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

void __fastcall NdisNblTrackerRecordEvent(struct _NET_BUFFER_LIST *a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, 0LL, a3, a2, a4);
}
