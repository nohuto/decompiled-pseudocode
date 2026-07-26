/*
 * XREFs of ?ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z @ 0x1C0065F04
 * Callers:
 *     NdisNblTrackerTransferOwnership @ 0x1C0066630 (NdisNblTrackerTransferOwnership.c)
 * Callees:
 *     <none>
 */

struct NDIS_NBL_TRACKER_HANDLE__ *__fastcall ndisNblTrackerHandleFromNdisObjectHandle(
        struct NDIS_NBL_TRACKER_HANDLE__ *a1)
{
  if ( !a1 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 1) != 0 || ((unsigned __int8)a1 & 2) != 0 )
    return a1;
  if ( *(_BYTE *)a1 == 5 )
    return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 100);
  if ( *(_BYTE *)a1 != 17 )
  {
    if ( *(_BYTE *)a1 == 18 )
      return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 85);
    return a1;
  }
  return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 513);
}
