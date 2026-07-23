/*
 * XREFs of CmpCallCallBacksEx @ 0x1404B3FE0
 * Callers:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14047E270 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacks @ 0x1404E3414 (CmpCallCallBacks.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpFreeCallbackContext @ 0x1401E3140 (CmpFreeCallbackContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x1404B4550 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x1406898E8 (CmpCallbackFatalFilter.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        _SLIST_ENTRY *a7)
{
  char v7; // si
  _QWORD *v11; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID Object; // rcx
  __int64 *v14; // r15
  struct _KTHREAD *v15; // rax
  __int64 i; // rcx
  char v17; // al
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  struct _KTHREAD *v21; // rcx
  _SLIST_ENTRY *PoolWithTag; // r15
  __int64 v23; // rdx
  struct _KTHREAD *v24; // r8
  _SLIST_ENTRY **v25; // rax
  __int64 v26; // r8
  unsigned int v27; // ecx
  int v28; // eax
  __int64 v29; // rcx
  _SLIST_ENTRY *v30; // rbx
  _SLIST_ENTRY **v31; // rax
  _SLIST_ENTRY *v32; // rsi
  _QWORD *v33; // r8
  PVOID *v34; // rax
  unsigned int v35; // ecx
  struct _KTHREAD *v36; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v38; // rax
  PVOID *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // eax
  signed __int32 v43[8]; // [rsp+0h] [rbp-118h] BYREF
  char v44; // [rsp+20h] [rbp-F8h]
  unsigned int v45; // [rsp+24h] [rbp-F4h]
  __int64 v46; // [rsp+28h] [rbp-F0h]
  __int64 v47; // [rsp+30h] [rbp-E8h]
  _QWORD *v48; // [rsp+38h] [rbp-E0h]
  _SLIST_ENTRY *v49; // [rsp+40h] [rbp-D8h]
  unsigned int v50; // [rsp+48h] [rbp-D0h]
  _QWORD *v51; // [rsp+50h] [rbp-C8h]
  struct _KTHREAD *v52; // [rsp+58h] [rbp-C0h]
  _SLIST_ENTRY *v53; // [rsp+60h] [rbp-B8h]
  _QWORD v54[2]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+78h] [rbp-A0h]
  __int64 v56; // [rsp+80h] [rbp-98h]
  _SLIST_ENTRY *v57; // [rsp+88h] [rbp-90h]
  _QWORD v58[17]; // [rsp+90h] [rbp-88h] BYREF

  v7 = a4;
  v57 = a7;
  v53 = (_SLIST_ENTRY *)a3;
  v56 = a2;
  v55 = a6;
  v50 = a1;
  v45 = 0;
  v11 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v44 = 0;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  if ( a4 == 1 )
  {
    Object = CurrentThread[1].WaitBlock[0].Object;
    if ( Object )
      v14 = (__int64 *)*((_QWORD *)Object + 1);
    else
      v14 = &CallbackListHead;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    for ( i = *v14; ; i = *(_QWORD *)i )
    {
      v47 = i;
      v46 = i;
      v17 = 1;
      if ( (__int64 *)i == &CallbackListHead )
        break;
      if ( *(int *)(i + 16) >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(i + 16));
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        v21 = KeGetCurrentThread();
        v19 = v21->KernelApcDisable++ == -1;
        if ( v19
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
          && !v21->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v21);
        }
        PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
        if ( !PoolWithTag )
          PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
        v49 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( _InterlockedDecrement((volatile signed __int32 *)(v46 + 16)) == 0x80000000 )
          {
            _InterlockedOr(v43, 0);
            if ( CallbackListDeleteEvent )
              ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
          }
          v45 = -1073741670;
          v44 = 1;
          v7 = 0;
          goto LABEL_79;
        }
        v23 = v46;
        *((_QWORD *)&PoolWithTag[1].Next + 1) = v46;
        PoolWithTag[2].Next = 0LL;
        v24 = v52;
        PoolWithTag[1].Next = (_SLIST_ENTRY *)v52[1].WaitBlock[0].Object;
        v24[1].WaitBlock[0].Object = &PoolWithTag[1];
        v25 = (_SLIST_ENTRY **)*((_QWORD *)&a7->Next + 1);
        if ( *v25 != a7 )
          __fastfail(3u);
        PoolWithTag->Next = a7;
        *((_QWORD *)&PoolWithTag->Next + 1) = v25;
        *v25 = PoolWithTag;
        *((_QWORD *)&a7->Next + 1) = PoolWithTag;
        CmpCallbackFillObjectContext(a1, a2, v23 + 24);
        if ( a3 && (*(_DWORD *)(v46 + 20) & 1) != 0 )
          v26 = a3;
        else
          v26 = a2;
        v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v46 + 40))(*(_QWORD *)(v46 + 32), (int)a1, v26);
        v45 = v27;
        v28 = 0;
        if ( v50 != 14 )
          v28 = v27;
        LODWORD(v47) = v28;
        if ( v28 < 0 )
        {
          Next = PoolWithTag->Next;
          v38 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
          if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v38 != PoolWithTag )
            __fastfail(3u);
          *v38 = Next;
          *((_QWORD *)&Next->Next + 1) = v38;
          v39 = (PVOID *)v52[1].WaitBlock[0].Object;
          if ( v39 )
            v52[1].WaitBlock[0].Object = *v39;
          CmpFreeCallbackContext(PoolWithTag);
          if ( _InterlockedDecrement((volatile signed __int32 *)(v46 + 16)) == 0x80000000 )
          {
            _InterlockedOr(v43, 0);
            if ( CallbackListDeleteEvent )
              ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
          }
          v7 = 0;
          v44 = 1;
          v45 = v47;
LABEL_79:
          v17 = 0;
          break;
        }
        switch ( a1 )
        {
          case 0x1Cu:
LABEL_45:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
            *(_QWORD *)(a2 + 80) = 0LL;
            break;
          case 8u:
LABEL_54:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
            *(_QWORD *)(a2 + 48) = 0LL;
            break;
          case 7u:
LABEL_53:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
            *(_QWORD *)(a2 + 40) = 0LL;
            break;
          case 0xEu:
LABEL_27:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
            *(_QWORD *)(a2 + 8) = 0LL;
            break;
          default:
            switch ( a1 )
            {
              case 0u:
              case 0x1Eu:
                goto LABEL_27;
              case 1u:
              case 5u:
              case 6u:
                goto LABEL_53;
              case 2u:
              case 4u:
              case 0x22u:
                PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
                *(_QWORD *)(a2 + 16) = 0LL;
                break;
              case 3u:
              case 0x24u:
              case 0x2Fu:
                PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
                *(_QWORD *)(a2 + 32) = 0LL;
                break;
              case 9u:
                goto LABEL_54;
              case 0xFu:
              case 0x10u:
              case 0x11u:
              case 0x12u:
              case 0x13u:
              case 0x14u:
              case 0x15u:
              case 0x16u:
              case 0x17u:
              case 0x18u:
              case 0x19u:
              case 0x1Bu:
              case 0x1Du:
              case 0x1Fu:
              case 0x21u:
              case 0x23u:
              case 0x25u:
              case 0x27u:
              case 0x2Au:
              case 0x2Cu:
              case 0x2Eu:
              case 0x30u:
                *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
                break;
              case 0x1Au:
                goto LABEL_45;
              case 0x20u:
                PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
                *(_QWORD *)(a2 + 64) = 0LL;
                break;
              case 0x26u:
              case 0x29u:
              case 0x2Bu:
              case 0x2Du:
                PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
                *(_QWORD *)(a2 + 24) = 0LL;
                break;
              default:
                goto LABEL_46;
            }
            break;
        }
LABEL_46:
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        v45 = v47;
        i = v46;
      }
    }
    if ( v17 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable++ == -1;
      if ( v19
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v18);
      }
    }
    v11 = v48;
  }
  if ( !v7 )
  {
    if ( v44 == 1 )
    {
      memset(v58, 0, 0x38uLL);
      v11 = v58;
      v48 = v58;
      v29 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        v58[0] = v55;
      }
      else
      {
        if ( v45 == -1073740541 )
          v40 = **(_QWORD **)(a2 + 72);
        else
          v40 = 0LL;
        v58[0] = v40;
      }
      if ( v45 == -1073740541 )
      {
        v41 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v41 = *(_DWORD *)(a3 + 8);
      }
      else
      {
        v41 = v45;
      }
      LODWORD(v58[1]) = v41;
      LODWORD(v58[3]) = v41;
      v58[2] = v56;
      if ( a3 )
      {
        v51 = v54;
        v54[0] = v58;
        v54[1] = v53;
      }
    }
    else
    {
      v11 = (_QWORD *)a2;
      v48 = (_QWORD *)a2;
      v51 = (_QWORD *)a3;
      v29 = a1;
      a5 = a1;
    }
    while ( a7->Next != v57 )
    {
      v30 = (_SLIST_ENTRY *)*((_QWORD *)&a7->Next + 1);
      v53 = v30;
      v31 = (_SLIST_ENTRY **)*((_QWORD *)&v30->Next + 1);
      if ( v30->Next != a7 || *v31 != v30 )
        __fastfail(3u);
      *((_QWORD *)&a7->Next + 1) = v31;
      *v31 = a7;
      v49 = (_SLIST_ENTRY *)*((_QWORD *)&v30[1].Next + 1);
      v32 = v49;
      v11[4] = v30[2].Next;
      CmpCallbackFillObjectContext(v29, v11, &v32[1].Next + 1);
      if ( a3 && (HIDWORD(v32[1].Next) & 1) != 0 )
        v33 = v51;
      else
        v33 = v11;
      v45 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _QWORD *))&v32[2].Next + 1))(v32[2].Next, (int)a5, v33);
      v34 = (PVOID *)v52[1].WaitBlock[0].Object;
      if ( v34 )
        v52[1].WaitBlock[0].Object = *v34;
      v35 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v35 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v35 )
        ExFreePoolWithTag(v30, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v30);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v32[1]) == 0x80000000 )
      {
        _InterlockedOr(v43, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v45 == -1073740541 )
        *((_DWORD *)v11 + 2) = *((_DWORD *)v11 + 6);
      v45 = 0;
      v29 = a5;
    }
  }
  if ( v44 == 1 && v11 )
  {
    v42 = *((_DWORD *)v11 + 6);
    if ( v42 >= 0 )
      return (unsigned int)-1073740541;
    return (unsigned int)v42;
  }
  return v45;
}
