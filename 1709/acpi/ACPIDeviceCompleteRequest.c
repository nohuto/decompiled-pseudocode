/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C0005908
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0003500 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C000E970 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C0048AC0 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0003B2C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC (ACPIDereferenceWaitWakePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDeviceCompleteRequest(struct _SLIST_ENTRY *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  _SLIST_ENTRY *Next; // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  struct _SLIST_ENTRY *v8; // rsi
  struct _SLIST_ENTRY *v9; // rsi
  int v10; // eax
  int v11; // ecx
  KIRQL v12; // al
  _SLIST_ENTRY *v13; // rdx
  KIRQL v14; // r8
  PVOID *v15; // rcx
  struct _SLIST_ENTRY **p_Next; // rdx
  PVOID *v17; // rax
  _QWORD *v18; // rax
  _SLIST_ENTRY *v19; // rdx
  _SLIST_ENTRY *v20; // rax
  _SLIST_ENTRY **v21; // rcx
  _SLIST_ENTRY *v22; // rax
  _SLIST_ENTRY *v23; // r8
  _SLIST_ENTRY **v24; // rcx
  _SLIST_ENTRY *v25; // rdx
  _SLIST_ENTRY *v26; // rax
  _SLIST_ENTRY **v27; // rcx
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY *v29; // r8
  _SLIST_ENTRY **v30; // rcx
  KIRQL v31; // si
  _SLIST_ENTRY *v32; // rcx
  PVOID *v33; // rax
  struct _SLIST_ENTRY **v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rax

  v1 = *((_QWORD *)&Entry[2].Next + 1);
  v2 = (const char *)&unk_1C0067B08;
  Next = Entry[12].Next;
  v4 = 0;
  v6 = (const char *)&unk_1C0067B08;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x12u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    (char)Entry,
    (char)Entry[16].Next,
    v4,
    v2,
    v6);
  if ( LODWORD(Entry[3].Next) )
    goto LABEL_15;
  v8 = Entry + 4;
  while ( v8->Next != v8 )
  {
    v19 = v8->Next - 1;
    v20 = v19->Next;
    if ( *(&v19->Next->Next + 1) != v19 || (v21 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1), *v21 != v19) )
      __fastfail(3u);
    *v21 = v20;
    *((_QWORD *)&v20->Next + 1) = v21;
    v22 = v19 + 1;
    *((_QWORD *)&v19->Next + 1) = v19;
    v19->Next = v19;
    v23 = v19[1].Next;
    if ( *(&v23->Next + 1) != &v19[1] || (v24 = (_SLIST_ENTRY **)*((_QWORD *)&v19[1].Next + 1), *v24 != v22) )
      __fastfail(3u);
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    *((_QWORD *)&v19[1].Next + 1) = v19 + 1;
    v22->Next = v22;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v19);
  }
  v9 = Entry + 5;
  while ( v9->Next != v9 )
  {
    v25 = v9->Next;
    v26 = v9->Next->Next;
    if ( (_SLIST_ENTRY *)*((_QWORD *)&v26->Next + 1) != v9->Next
      || (v27 = (_SLIST_ENTRY **)*((_QWORD *)&v25->Next + 1), *v27 != v25) )
    {
      __fastfail(3u);
    }
    *v27 = v26;
    *((_QWORD *)&v26->Next + 1) = v27;
    v28 = v25 + 1;
    *((_QWORD *)&v25->Next + 1) = v25;
    v25->Next = v25;
    v29 = v25[1].Next;
    if ( *(&v29->Next + 1) != &v25[1] || (v30 = (_SLIST_ENTRY **)*((_QWORD *)&v25[1].Next + 1), *v30 != v28) )
      __fastfail(3u);
    *v30 = v29;
    *((_QWORD *)&v29->Next + 1) = v30;
    *((_QWORD *)&v25[1].Next + 1) = v25 + 1;
    v28->Next = v28;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v25);
  }
  v10 = *(_DWORD *)(v1 + 336);
  if ( !v10 )
  {
LABEL_13:
    v11 = *((_DWORD *)&Entry[3].Next + 2);
    if ( (v11 & 0x2000000) != 0 )
    {
      *((_DWORD *)&Entry[3].Next + 2) = v11 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_15:
    if ( Next )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(
        v1,
        *((_QWORD *)&Entry[12].Next + 1),
        LODWORD(Entry[16].Next));
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v13 = Entry->Next;
    v14 = v12;
    if ( *(&Entry->Next->Next + 1) != Entry || (v15 = (PVOID *)*((_QWORD *)&Entry->Next + 1), *v15 != Entry) )
      __fastfail(3u);
    *v15 = v13;
    *((_QWORD *)&v13->Next + 1) = v15;
    p_Next = &Entry[1].Next->Next;
    if ( p_Next[1] != &Entry[1] || (v17 = (PVOID *)*((_QWORD *)&Entry[1].Next + 1), *v17 != &Entry[1]) )
      __fastfail(3u);
    *v17 = p_Next;
    p_Next[1] = (struct _SLIST_ENTRY *)v17;
    if ( LODWORD(Entry[3].Next) != 4 )
    {
      v18 = (_QWORD *)(v1 + 536);
      if ( (_QWORD *)*v18 == v18 )
      {
        *(_QWORD *)(v1 + 528) = 0LL;
      }
      else
      {
        v35 = (_QWORD *)qword_1C0079068;
        v36 = (_QWORD *)(*v18 - 16LL);
        if ( *(__int64 **)qword_1C0079068 != &AcpiPowerQueueList )
          __fastfail(3u);
        *v36 = &AcpiPowerQueueList;
        v36[1] = v35;
        *v35 = v36;
        qword_1C0079068 = (__int64)v36;
        *(_QWORD *)(v1 + 528) = v36;
      }
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v14);
    if ( LODWORD(Entry[3].Next) == 2 )
    {
      ACPIDereferenceWaitWakePowerRequest(Entry);
    }
    else
    {
      ++RequestLookAsideList.L.TotalFrees;
      if ( ExQueryDepthSList(&RequestLookAsideList.L.ListHead) >= RequestLookAsideList.L.Depth )
      {
        ++RequestLookAsideList.L.FreeMisses;
        ((void (__fastcall *)(struct _SLIST_ENTRY *))RequestLookAsideList.L.FreeEx)(Entry);
      }
      else
      {
        ExpInterlockedPushEntrySList(&RequestLookAsideList.L.ListHead, Entry);
      }
    }
    return;
  }
  if ( BYTE4(Entry[3].Next) || SLODWORD(Entry[16].Next) >= 0 )
  {
    if ( v10 < *((_DWORD *)&Entry[6].Next + 2) )
      LODWORD(Entry[16].Next) = 0;
    goto LABEL_13;
  }
  v31 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  *((_QWORD *)&Entry[6].Next + 1) = *(unsigned int *)(v1 + 336);
  BYTE4(Entry[3].Next) = 1;
  v32 = Entry->Next;
  if ( *(&Entry->Next->Next + 1) != Entry || (v33 = (PVOID *)*((_QWORD *)&Entry->Next + 1), *v33 != Entry) )
    __fastfail(3u);
  *v33 = v32;
  *((_QWORD *)&v32->Next + 1) = v33;
  v34 = (struct _SLIST_ENTRY **)qword_1C0079068;
  if ( *(__int64 **)qword_1C0079068 != &AcpiPowerQueueList )
    __fastfail(3u);
  Entry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
  *((_QWORD *)&Entry->Next + 1) = v34;
  *v34 = Entry;
  qword_1C0079068 = (__int64)Entry;
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v31);
}
