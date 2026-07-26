/*
 * XREFs of ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0067064
 * Callers:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 * Callees:
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

char __fastcall ndisIsPossibleSmuggling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool v7; // zf

  if ( !a1 || !a2 )
    return 0;
  if ( a2 == 24 )
  {
    v4 = ndisSourceHandleFromOwner(a1, 24LL, a3, a4);
    return v5 != v4;
  }
  if ( (a1 & 1) != (a2 & 1) )
    return 1;
  if ( (a2 & 1) != 0 )
  {
    if ( (a1 & 4) != 0 || (a2 & 4) != 0 )
      return 0;
    v7 = ((a2 ^ a1) & 0xFFFFFFFFFFFFFFF8uLL) == 0;
  }
  else
  {
    v7 = a1 == a2;
  }
  return !v7;
}
