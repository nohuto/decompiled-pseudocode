/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0073D08
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C00497D0 (WPP_SF_LqZ.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0072718 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0072A98 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 *     WPP_SF_DDL @ 0x1C0075A70 (WPP_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        struct _IRP *a4)
{
  unsigned int v5; // edi
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int ActiveRef; // r15d
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *Blink; // r8
  int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-48h]

  v5 = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_DDL(11LL, a2, HIWORD(*((_QWORD *)a3 + 1)), (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL, *((_DWORD *)a3 + 4));
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a3 + 4));
  if ( (unsigned int)(AoAc->TempRefReason - 3) <= 1 )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u, v13, v14);
  }
  if ( AoAc->TakeStartToRefTime )
  {
    AoAc->TakeStartToRefTime = 0;
    v12 = MEMORY[0xFFFFF78000000008] - AoAc->StartTime;
    if ( v12 / 0x2710 > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = v12 / 0x2710;
  }
  if ( AoAc->TakeWakeToRefTime )
  {
    AoAc->TakeWakeToRefTime = 0;
    v12 = MEMORY[0xFFFFF78000000014] - AoAc->LastWakeTime.QuadPart;
    if ( (__int64)v12 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = (__int64)v12 / 10000;
  }
  ActiveRef = AoAc->ActiveRef;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0xqqq(
      v12,
      (unsigned int)&NicActiveAcquired,
      (_DWORD)a1 + 4032,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      AoAc->ActiveRef);
  if ( AoAc->ActiveState == NdisNicActive || AoAc->StopFlags.Value )
  {
    KeReleaseSpinLock(&AoAc->Lock, v11);
  }
  else
  {
    if ( AoAc->ActiveRef == 1 && (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_LqZ(
        0xCu,
        &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids,
        *((_DWORD *)a3 + 4),
        a1,
        a1->pAdapterInstanceName);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Blink = AoAc->PendingIrpList.Blink;
    if ( Blink->Flink != &AoAc->PendingIrpList )
      __fastfail(3u);
    p_ListEntry->Flink = &AoAc->PendingIrpList;
    a4->Tail.Overlay.ListEntry.Blink = Blink;
    Blink->Flink = p_ListEntry;
    AoAc->PendingIrpList.Blink = p_ListEntry;
    ++AoAc->PendingIrpListCount;
    KeReleaseSpinLock(&AoAc->Lock, v11);
    v18 = ndisRequestNicActive(a1, RunAsynchronous);
    v5 = v18;
    if ( v18 != 259 )
    {
      if ( v18 && (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_dq(0xDu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v18, a1);
      ndisAoAcCompleteQueuedIrps(a1, v5);
      v5 = 259;
    }
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
  {
    LODWORD(v20) = v5;
    WPP_SF_qdD(0xEu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1, ActiveRef, v20);
  }
  return v5;
}
