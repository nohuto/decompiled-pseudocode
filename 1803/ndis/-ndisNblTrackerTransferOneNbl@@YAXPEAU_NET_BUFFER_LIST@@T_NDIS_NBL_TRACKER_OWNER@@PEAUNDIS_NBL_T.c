/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C006776C
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0067840 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  unsigned __int8 *v9; // rcx
  unsigned __int8 v10; // dl

  v7 = a4;
  if ( !a2 && !a1[15] )
    a1[15] = ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, a3 & 0xFFFFFFFFFFFFFFFDuLL, a4);
  if ( (a2 & 4) != 0 )
    goto LABEL_8;
  v9 = (unsigned __int8 *)a1[15];
  if ( !v9 )
  {
    if ( (unsigned __int8)byte_1C0099622 >= 3u )
      WPP_SF_q(0xBu, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, (__int64)a1);
LABEL_8:
    v7 |= 4uLL;
    goto LABEL_9;
  }
  v10 = *v9;
  if ( *v9 != 5 && (unsigned __int8)(v10 - 17) > 1u )
  {
    if ( (unsigned __int8)byte_1C0099622 >= 3u )
      WPP_SF_qD(0xCu, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, (__int64)a1, v10);
    goto LABEL_8;
  }
  if ( v9 != a5 || a1[3] )
  {
    ++*a6;
  }
  else
  {
    v7 = 24LL;
    ++*a7;
    ++*a6;
  }
LABEL_9:
  a1[45] = v7;
}
