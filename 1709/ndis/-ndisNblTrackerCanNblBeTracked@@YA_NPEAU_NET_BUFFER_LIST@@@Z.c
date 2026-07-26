/*
 * XREFs of ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00665DC
 * Callers:
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0066C38 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

char __fastcall ndisNblTrackerCanNblBeTracked(struct _NET_BUFFER_LIST *a1)
{
  unsigned __int8 *SourceHandle; // rax
  unsigned __int8 v4; // cl

  SourceHandle = (unsigned __int8 *)a1->SourceHandle;
  if ( !SourceHandle )
  {
    if ( (unsigned __int8)byte_1C0098762 >= 3u )
      WPP_SF_q(0xBu, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, (__int64)a1);
    return 0;
  }
  v4 = *SourceHandle;
  if ( *SourceHandle != 5 && (unsigned __int8)(v4 - 17) > 1u )
  {
    if ( (unsigned __int8)byte_1C0098762 >= 3u )
      WPP_SF_qD(0xCu, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, (__int64)a1, v4);
    return 0;
  }
  return 1;
}
