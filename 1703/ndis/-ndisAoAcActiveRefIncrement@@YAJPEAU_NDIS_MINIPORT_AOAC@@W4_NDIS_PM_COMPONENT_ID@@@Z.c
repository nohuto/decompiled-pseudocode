/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00706DC
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0010980 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007083C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C08 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070CC8 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071100 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00719C4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0072E58 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C90 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(struct _NDIS_MINIPORT_AOAC *a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  unsigned int v2; // r10d
  int v3; // r8d
  __int64 v4; // r9
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax

  v2 = ++a1->ActiveRef;
  v3 = a1->ComponentRefCounts[a2] + 1;
  a1->ComponentRefCounts[a2] = v3;
  if ( a1->IsInCsResiliency && v3 == 1 )
  {
    if ( a2 == NdisPMComponentWCMNetActivation )
    {
      ndisAoAcPauseRefTimeStats(a1);
      *(_QWORD *)(v4 + 808) = MEMORY[0xFFFFF78000000008];
    }
    else if ( !a1->ComponentRefCounts[15] )
    {
      ActiveState = a1->ActiveState;
      if ( ActiveState == NdisNicActive || ActiveState == NdisNicResuming )
        a1->CsRefTimes[a2].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
    }
  }
  return v2;
}
