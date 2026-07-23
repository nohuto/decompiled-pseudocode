/*
 * XREFs of CmpCallCallBacksEx @ 0x140533C00
 * Callers:
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpFreeCallbackContext @ 0x1401DEC50 (CmpFreeCallbackContext.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x140534180 (CmpCallbackFillObjectContext.c)
 *     CmpFatalFilter @ 0x140660958 (CmpFatalFilter.c)
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
  char v7; // r14
  _QWORD *v8; // rax
  struct _KTHREAD *CurrentThread; // r12
  PVOID Object; // rax
  __int64 *v13; // r12
  struct _KTHREAD *v14; // rax
  int v15; // esi
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  _QWORD *v18; // r14
  unsigned int v20; // r9d
  _SLIST_ENTRY *v21; // rbx
  _SLIST_ENTRY **v22; // rax
  _SLIST_ENTRY *v23; // rsi
  _QWORD *v24; // r8
  PVOID *v25; // rax
  unsigned int v26; // ecx
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v30; // rdx
  _SLIST_ENTRY **v31; // rax
  __int64 v32; // rcx
  int v33; // ecx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v35; // rax
  PVOID *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // edx
  signed __int32 v40[8]; // [rsp+0h] [rbp-F8h] BYREF
  char v41; // [rsp+20h] [rbp-D8h]
  char v42; // [rsp+21h] [rbp-D7h]
  int v43; // [rsp+24h] [rbp-D4h]
  struct _KTHREAD *v44; // [rsp+30h] [rbp-C8h]
  void *v45; // [rsp+38h] [rbp-C0h]
  _SLIST_ENTRY *v46; // [rsp+40h] [rbp-B8h]
  _QWORD *v47; // [rsp+48h] [rbp-B0h]
  _QWORD *v48; // [rsp+50h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+58h] [rbp-A0h] BYREF
  _SLIST_ENTRY *v50; // [rsp+68h] [rbp-90h]
  _QWORD v51[17]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a4;
  v8 = (_QWORD *)a3;
  v50 = a7;
  v43 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v41 = 0;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  if ( a4 == 1 )
  {
    Object = CurrentThread[1].WaitBlock[0].Object;
    if ( Object )
      v13 = (__int64 *)*((_QWORD *)Object + 1);
    else
      v13 = &CallbackListHead;
    while ( 1 )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      do
      {
        v13 = (__int64 *)*v13;
        v45 = v13;
        v42 = 1;
        if ( v13 == &CallbackListHead )
          goto LABEL_6;
      }
      while ( *((int *)v13 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( !v28
        && ($69CD3F157F9F39B6F7113F2231989901 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v27);
      }
      v42 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v46 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v13;
      PoolWithTag[2].Next = 0LL;
      v30 = v44;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v44[1].WaitBlock[0].Object;
      v30[1].WaitBlock[0].Object = &PoolWithTag[1];
      v31 = (_SLIST_ENTRY **)*((_QWORD *)&a7->Next + 1);
      if ( *v31 != a7 )
        __fastfail(3u);
      PoolWithTag->Next = a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v31;
      *v31 = PoolWithTag;
      *((_QWORD *)&a7->Next + 1) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v13 + 3);
      v32 = a3;
      if ( !a3 || (*((_DWORD *)v13 + 5) & 1) == 0 )
        v32 = a2;
      v33 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v13[5])(v13[4], (int)a1, v32);
      v43 = v33;
      if ( a1 == 14 )
      {
        v43 = 0;
      }
      else if ( v33 < 0 )
      {
        Next = PoolWithTag->Next;
        v35 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v35 != PoolWithTag )
          __fastfail(3u);
        *v35 = Next;
        *((_QWORD *)&Next->Next + 1) = v35;
        v36 = (PVOID *)v44[1].WaitBlock[0].Object;
        if ( v36 )
          v44[1].WaitBlock[0].Object = *v36;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
        {
          _InterlockedOr(v40, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v7 = 0;
        v41 = 1;
LABEL_6:
        v15 = v43;
        goto LABEL_7;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_48:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 7u:
LABEL_55:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 8u:
LABEL_56:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 0xEu:
LABEL_47:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_47;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_55;
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
              goto LABEL_56;
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
              goto LABEL_48;
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
              continue;
          }
          break;
      }
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
    {
      _InterlockedOr(v40, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v15 = -1073741670;
    v43 = -1073741670;
    v41 = 1;
    v7 = 0;
LABEL_7:
    if ( v42 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( !v17
        && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
        && !v16->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v16);
      }
      v15 = v43;
    }
    CurrentThread = v44;
    v8 = (_QWORD *)a3;
  }
  else
  {
    v15 = v43;
  }
  if ( v7 )
  {
    v18 = v47;
  }
  else
  {
    if ( v41 == 1 )
    {
      memset(v51, 0, 0x38uLL);
      v18 = v51;
      v47 = v51;
      v20 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        v51[0] = a6;
      }
      else
      {
        if ( v15 == -1073740541 )
          v37 = **(_QWORD **)(a2 + 72);
        else
          v37 = 0LL;
        v51[0] = v37;
      }
      if ( v15 == -1073740541 )
      {
        v38 = a3;
        v39 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v39 = *(_DWORD *)(a3 + 8);
      }
      else
      {
        v39 = v15;
        v38 = a3;
      }
      LODWORD(v51[1]) = v39;
      LODWORD(v51[3]) = v39;
      v51[2] = a2;
      if ( v38 )
      {
        v48 = v49;
        v49[0] = v51;
        v49[1] = v38;
      }
    }
    else
    {
      v18 = (_QWORD *)a2;
      v47 = (_QWORD *)a2;
      v48 = v8;
      v20 = a1;
      a5 = a1;
    }
    while ( a7->Next != v50 )
    {
      v21 = (_SLIST_ENTRY *)*((_QWORD *)&a7->Next + 1);
      v45 = v21;
      v22 = (_SLIST_ENTRY **)*((_QWORD *)&v21->Next + 1);
      if ( v21->Next != a7 || *v22 != v21 )
        __fastfail(3u);
      *((_QWORD *)&a7->Next + 1) = v22;
      *v22 = a7;
      v46 = (_SLIST_ENTRY *)*((_QWORD *)&v21[1].Next + 1);
      v23 = v46;
      v18[4] = v21[2].Next;
      CmpCallbackFillObjectContext(v20, v18, &v23[1].Next + 1);
      if ( a3 && (HIDWORD(v23[1].Next) & 1) != 0 )
        v24 = v48;
      else
        v24 = v18;
      v43 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _QWORD *))&v23[2].Next + 1))(v23[2].Next, (int)a5, v24);
      v25 = (PVOID *)CurrentThread[1].WaitBlock[0].Object;
      if ( v25 )
        CurrentThread[1].WaitBlock[0].Object = *v25;
      v26 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v26 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v26 )
        ExFreePoolWithTag(v21, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v21);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v23[1]) == 0x80000000 )
      {
        _InterlockedOr(v40, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v43 == -1073740541 )
        *((_DWORD *)v18 + 2) = *((_DWORD *)v18 + 6);
      v15 = 0;
      v43 = 0;
      v20 = a5;
    }
  }
  if ( v41 == 1 )
  {
    if ( v18 )
    {
      v15 = *((_DWORD *)v18 + 6);
      if ( v15 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v15;
}
