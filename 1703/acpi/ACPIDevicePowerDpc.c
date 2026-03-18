/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C000C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00078D8 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0007A58 (ACPIDevicePowerProcessPhase4.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C00098D0 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000A974 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C000CEF0 (WPP_RECORDER_SF_qsLLdqss.c)
 *     ACPIInternalMovePowerList @ 0x1C000DFE0 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002576C (ACPIDeviceRecordDependencies.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C0028384 (ACPIDevicePowerProcessBlockedItems.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C004A740 (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C004A810 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C004ACB0 (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  PSLIST_ENTRY *v5; // rdx
  PSLIST_ENTRY v6; // rdi
  PSLIST_ENTRY v7; // rbx
  PSLIST_ENTRY v8; // rcx
  char v9; // bp
  PSLIST_ENTRY Next; // rsi
  struct _SLIST_ENTRY *v11; // r14
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // ebx
  __int64 v14; // rdx
  int v15; // edx
  char v16; // si
  __int64 v17; // rcx
  void *v18; // r10
  __int64 v19; // rax
  void *v20; // r9
  __int64 v21; // r8
  const char *v22; // r8
  PSLIST_ENTRY v23; // rsi
  struct _SLIST_ENTRY *v24; // rdi
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  int v27; // edx
  char v28; // si
  __int64 v29; // r8
  void *v30; // r10
  __int64 v31; // rax
  void *v32; // r9
  __int64 v33; // rcx
  const char *v34; // rcx
  PSLIST_ENTRY *p_Next; // rbx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _SLIST_ENTRY *v40; // rcx
  struct _SLIST_ENTRY **v41; // rax
  struct _SLIST_ENTRY **v42; // rax
  _SLIST_ENTRY *v43; // rcx
  struct _SLIST_ENTRY **v44; // rax
  struct _SLIST_ENTRY **v45; // rax
  __int64 i; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v48; // [rsp+48h] [rbp-60h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-38h] BYREF

  ListEntry[1] = (PSLIST_ENTRY)ListEntry;
  ListEntry[0] = (PSLIST_ENTRY)ListEntry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  v5 = &AcpiPowerPhase4List;
  if ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    while ( 1 )
    {
      AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
      if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
        ACPIInternalMovePowerList(&AcpiPowerQueueList, ListEntry);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
      {
        if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
          ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, ListEntry);
      }
      else
      {
        if ( (PSLIST_ENTRY *)ListEntry[0] == ListEntry )
          goto LABEL_9;
        ACPIDeviceRecordBlockedOnPhase3List(ListEntry);
      }
      if ( (PSLIST_ENTRY *)ListEntry[0] != ListEntry )
      {
        ACPIDeviceRecordDependencies(ListEntry);
        ACPIInternalMovePowerList(ListEntry, &AcpiPowerPhase0List);
      }
LABEL_9:
      if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
        ACPIDevicePowerProcessBlockedItems();
      v6 = AcpiPowerPhase0List;
      if ( AcpiPowerPhase0List != (PSLIST_ENTRY)&AcpiPowerPhase0List )
      {
        v9 = 1;
        while ( 1 )
        {
          Next = v6->Next;
          v11 = v6;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)&v6[13], 1, 1);
          v13 = v12;
          if ( v12 >= 5 )
            KeBugCheckEx(0xA3u, 1uLL, 0xC1721uLL, 0LL, 0LL);
          _mm_lfence();
          v14 = AcpiDevicePowerProcessPhase0Dispatch[v12];
          if ( !v14 )
            goto LABEL_38;
          _InterlockedCompareExchange((volatile signed __int32 *)&v6[13], 1, v12);
          if ( (*(int (__fastcall **)(PSLIST_ENTRY))(v14 + 8LL * SLODWORD(v6[3].Next)))(v6) < 0 )
            break;
LABEL_42:
          if ( v6 == (PSLIST_ENTRY)&AcpiPowerPhase0List )
          {
            if ( v9 )
              ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
            goto LABEL_12;
          }
        }
        v13 = 0;
LABEL_38:
        v6 = Next;
        if ( v13 == 1 )
        {
          v15 = *((_DWORD *)&v11[3].Next + 2);
          if ( (v15 & 0x10000000) != 0
            || (v16 = 0, (v15 & 0x1000000) != 0)
            && ((v15 & 0x4000000) != 0
             || (*(_BYTE *)(*((_QWORD *)&v11[2].Next + 1) + 952LL) & 0x40) != 0
             && (v11[4].Next != &v11[4] || (v15 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
          {
            v16 = 1;
          }
          v17 = *((_QWORD *)&v11[2].Next + 1);
          v18 = &unk_1C0066CD0;
          LOBYTE(v19) = 0;
          v20 = &unk_1C0066CD0;
          if ( v17 )
          {
            v21 = *(_QWORD *)(v17 + 8);
            v19 = *((_QWORD *)&v11[2].Next + 1);
            if ( (v21 & 0x200000000000LL) != 0 )
            {
              v18 = *(void **)(v17 + 560);
              if ( (v21 & 0x400000000000LL) != 0 )
                v20 = *(void **)(v17 + 568);
            }
          }
          if ( v16 )
            v22 = "IS";
          else
            v22 = "NOT";
          WPP_RECORDER_SF_qsLLdqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            (_DWORD)v22,
            (_DWORD)v20,
            BugCheckParameter4,
            (char)v11,
            (__int64)v22,
            v15,
            *(_DWORD *)(v17 + 952),
            v48,
            v19,
            (__int64)v18,
            (__int64)v20);
          if ( v16 )
          {
            v43 = v11->Next;
            v44 = (struct _SLIST_ENTRY **)*((_QWORD *)&v11->Next + 1);
            if ( *(&v11->Next->Next + 1) != v11 || *v44 != v11 )
              __fastfail(3u);
            *v44 = v43;
            *((_QWORD *)&v43->Next + 1) = v44;
            v11[6].Next = (_SLIST_ENTRY *)&AcpiPowerPhase0List;
            v45 = (struct _SLIST_ENTRY **)qword_1C0076FB8;
            if ( *(__int64 **)qword_1C0076FB8 != &AcpiPowerBlockedOnDependencyList )
              __fastfail(3u);
            v11->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
            *((_QWORD *)&v11->Next + 1) = v45;
            *v45 = v11;
            qword_1C0076FB8 = (__int64)v11;
            goto LABEL_42;
          }
        }
        else if ( !v13 )
        {
          goto LABEL_40;
        }
        v9 = 0;
LABEL_40:
        if ( v13 == 2 )
          ACPIDeviceCompleteRequest(v11);
        goto LABEL_42;
      }
LABEL_12:
      if ( (__int64 *)AcpiPowerPhase1List != &AcpiPowerPhase1List )
      {
        if ( AcpiPowerPhase0List != (PSLIST_ENTRY)&AcpiPowerPhase0List )
          goto LABEL_19;
        v36 = ACPIDevicePowerProcessGenericPhase(
                (_SLIST_ENTRY *)&AcpiPowerPhase1List,
                (__int64)&AcpiDevicePowerProcessPhase1Dispatch,
                7u,
                0);
        if ( v36 >= 0 && v36 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
      }
      if ( AcpiPowerPhase0List == (PSLIST_ENTRY)&AcpiPowerPhase0List )
      {
        if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
          && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
        {
          v37 = ACPIDevicePowerProcessGenericPhase(
                  (_SLIST_ENTRY *)&AcpiPowerPhase2List,
                  (__int64)&AcpiDevicePowerProcessPhase2Dispatch,
                  6u,
                  0);
          if ( v37 >= 0 && v37 != 259 )
            ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
        }
        if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
          && AcpiPowerPhase0List == (PSLIST_ENTRY)&AcpiPowerPhase0List
          && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
          && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
        {
          v38 = ACPIDevicePowerProcessPhase3();
          if ( v38 >= 0 )
          {
            if ( v38 == 259 )
            {
              if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
              {
                ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
                for ( i = AcpiPowerPhase3List; (__int64 *)i != &AcpiPowerPhase3List; i = *(_QWORD *)i )
                  *(_DWORD *)(i + 56) &= 0xEEFFFFFF;
              }
            }
            else
            {
              ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
            }
          }
        }
      }
LABEL_19:
      if ( AcpiPowerPhase4List != (PSLIST_ENTRY)&AcpiPowerPhase4List )
      {
        v39 = ACPIDevicePowerProcessPhase4();
        if ( v39 >= 0 && v39 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
      }
      v7 = AcpiPowerPhase5List;
      if ( AcpiPowerPhase5List != (PSLIST_ENTRY)&AcpiPowerPhase5List )
      {
        while ( 1 )
        {
          v23 = v7->Next;
          v24 = v7;
          v25 = _InterlockedCompareExchange((volatile signed __int32 *)&v7[13], 1, 1);
          if ( v25 >= 9 )
            KeBugCheckEx(0xA3u, 1uLL, 0xC1721uLL, 0LL, 0LL);
          _mm_lfence();
          v26 = AcpiDevicePowerProcessPhase5Dispatch[v25];
          if ( !v26 )
            goto LABEL_62;
          _InterlockedCompareExchange((volatile signed __int32 *)&v7[13], 1, v25);
          if ( (*(int (__fastcall **)(PSLIST_ENTRY))(v26 + 8LL * SLODWORD(v7[3].Next)))(v7) < 0 )
            break;
LABEL_70:
          if ( v7 == (PSLIST_ENTRY)&AcpiPowerPhase5List )
            goto LABEL_21;
        }
        v25 = 0;
LABEL_62:
        v7 = v23;
        if ( v25 == 1 )
        {
          v27 = *((_DWORD *)&v24[3].Next + 2);
          if ( (v27 & 0x10000000) != 0
            || (v28 = 0, (v27 & 0x1000000) != 0)
            && ((v27 & 0x4000000) != 0
             || (*(_BYTE *)(*((_QWORD *)&v24[2].Next + 1) + 952LL) & 0x40) != 0
             && (v24[4].Next != &v24[4] || (v27 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
          {
            v28 = 1;
          }
          v29 = *((_QWORD *)&v24[2].Next + 1);
          v30 = &unk_1C0066CD0;
          LOBYTE(v31) = 0;
          v32 = &unk_1C0066CD0;
          if ( v29 )
          {
            v33 = *(_QWORD *)(v29 + 8);
            v31 = *((_QWORD *)&v24[2].Next + 1);
            if ( (v33 & 0x200000000000LL) != 0 )
            {
              v30 = *(void **)(v29 + 560);
              if ( (v33 & 0x400000000000LL) != 0 )
                v32 = *(void **)(v29 + 568);
            }
          }
          v34 = "IS";
          if ( !v28 )
            v34 = "NOT";
          WPP_RECORDER_SF_qsLLdqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v27,
            v29,
            (_DWORD)v32,
            BugCheckParameter4,
            (char)v24,
            (__int64)v34,
            v27,
            *(_DWORD *)(v29 + 952),
            v48,
            v31,
            (__int64)v30,
            (__int64)v32);
          if ( v28 )
          {
            v40 = v24->Next;
            v41 = (struct _SLIST_ENTRY **)*((_QWORD *)&v24->Next + 1);
            if ( *(&v24->Next->Next + 1) != v24 || *v41 != v24 )
              __fastfail(3u);
            *v41 = v40;
            *((_QWORD *)&v40->Next + 1) = v41;
            v24[6].Next = (_SLIST_ENTRY *)&AcpiPowerPhase5List;
            v42 = (struct _SLIST_ENTRY **)qword_1C0076FB8;
            if ( *(__int64 **)qword_1C0076FB8 != &AcpiPowerBlockedOnDependencyList )
              __fastfail(3u);
            v24->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
            *((_QWORD *)&v24->Next + 1) = v42;
            *v42 = v24;
            qword_1C0076FB8 = (__int64)v24;
          }
        }
        else if ( (v25 & 0xFFFFFFFD) == 0 )
        {
          ACPIDeviceCompleteRequest(v24);
        }
        goto LABEL_70;
      }
LABEL_21:
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
      v4 = AcpiPowerDpcFlags;
      if ( (AcpiPowerDpcFlags & 2) == 0 )
      {
        v5 = &AcpiPowerPhase4List;
        break;
      }
    }
  }
  if ( AcpiPowerPhase0List == (PSLIST_ENTRY)&AcpiPowerPhase0List
    && (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && AcpiPowerPhase5List == (PSLIST_ENTRY)&AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == (PSLIST_ENTRY)&AcpiPowerPhase4List )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      10,
      50,
      (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids);
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, ListEntry);
    v4 = AcpiPowerDpcFlags;
  }
  AcpiPowerDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v8 = ListEntry[0];
  if ( (PSLIST_ENTRY *)ListEntry[0] != ListEntry )
  {
    do
    {
      p_Next = &v8->Next->Next;
      ACPIDeviceCompleteRequest(v8);
      v8 = (PSLIST_ENTRY)p_Next;
    }
    while ( p_Next != ListEntry );
  }
}
