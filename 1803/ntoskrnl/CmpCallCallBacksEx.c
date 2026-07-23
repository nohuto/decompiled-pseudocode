/*
 * XREFs of CmpCallCallBacksEx @ 0x1405A7050
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 *     CmpCallCallBacks @ 0x1404A70E4 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x1404A7118 (CmPostCallbackNotification.c)
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1406EC954 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpFreeCallbackContext @ 0x14022196C (CmpFreeCallbackContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x1405A75B0 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x1406EDCE4 (CmpCallbackFatalFilter.c)
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
  struct _KTHREAD *CurrentThread; // rax
  PVOID Object; // rcx
  __int64 *v12; // r12
  struct _KTHREAD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // esi
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  _QWORD *v19; // r12
  __int64 v21; // rbx
  __int64 v22; // rcx
  _SLIST_ENTRY *v23; // rsi
  _SLIST_ENTRY **v24; // rax
  _SLIST_ENTRY *v25; // r14
  _QWORD *v26; // r8
  PVOID *v27; // rax
  unsigned int v28; // ecx
  struct _KTHREAD *v29; // rcx
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v31; // rdx
  _SLIST_ENTRY **v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v36; // rax
  PVOID *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-108h] BYREF
  char v41; // [rsp+20h] [rbp-E8h]
  char v42; // [rsp+21h] [rbp-E7h]
  int v43; // [rsp+24h] [rbp-E4h]
  _SLIST_ENTRY *v44; // [rsp+30h] [rbp-D8h]
  _QWORD *v45; // [rsp+38h] [rbp-D0h]
  __int64 *v46; // [rsp+40h] [rbp-C8h]
  _QWORD *v47; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v48; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v49; // [rsp+58h] [rbp-B0h]
  _QWORD v50[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+70h] [rbp-98h]
  __int64 v52; // [rsp+78h] [rbp-90h]
  _SLIST_ENTRY *v53; // [rsp+80h] [rbp-88h]
  _QWORD v54[16]; // [rsp+88h] [rbp-80h] BYREF

  v7 = a4;
  v53 = a7;
  v49 = (_SLIST_ENTRY *)a3;
  v52 = a2;
  v51 = a6;
  v43 = 0;
  v45 = 0LL;
  v47 = 0LL;
  v41 = 0;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  if ( a4 != 1 )
  {
LABEL_9:
    v16 = v43;
    goto LABEL_10;
  }
  Object = CurrentThread[1].WaitBlock[0].Object;
  if ( Object )
    v12 = (__int64 *)*((_QWORD *)Object + 1);
  else
    v12 = &CallbackListHead;
  while ( 1 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    do
    {
      v12 = (__int64 *)*v12;
      v46 = v12;
      v42 = 1;
      if ( v12 == &CallbackListHead )
        goto LABEL_6;
    }
    while ( *((int *)v12 + 4) < 0 );
    _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v14, v15);
    v29 = KeGetCurrentThread();
    v18 = v29->KernelApcDisable++ == -1;
    if ( v18
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v42 = 0;
    PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
    if ( !PoolWithTag )
      PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
    v44 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *((_QWORD *)&PoolWithTag[1].Next + 1) = v12;
    PoolWithTag[2].Next = 0LL;
    v31 = v48;
    PoolWithTag[1].Next = (_SLIST_ENTRY *)v48[1].WaitBlock[0].Object;
    v31[1].WaitBlock[0].Object = &PoolWithTag[1];
    v32 = (_SLIST_ENTRY **)*((_QWORD *)&a7->Next + 1);
    if ( *v32 != a7 )
      __fastfail(3u);
    PoolWithTag->Next = a7;
    *((_QWORD *)&PoolWithTag->Next + 1) = v32;
    *v32 = PoolWithTag;
    *((_QWORD *)&a7->Next + 1) = PoolWithTag;
    CmpCallbackFillObjectContext(a1, a2, v12 + 3);
    v33 = a3;
    if ( !a3 || (*((_DWORD *)v12 + 5) & 1) == 0 )
      v33 = a2;
    v34 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v12[5])(v12[4], (int)a1, v33);
    v43 = v34;
    if ( a1 == 14 )
    {
      v43 = 0;
    }
    else if ( v34 < 0 )
    {
      Next = PoolWithTag->Next;
      v36 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
      if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v36 != PoolWithTag )
        __fastfail(3u);
      *v36 = Next;
      *((_QWORD *)&Next->Next + 1) = v36;
      v37 = (PVOID *)v48[1].WaitBlock[0].Object;
      if ( v37 )
        v48[1].WaitBlock[0].Object = *v37;
      CmpFreeCallbackContext(PoolWithTag);
      if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
      {
        _InterlockedOr(v40, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      v7 = 0;
      v41 = 1;
LABEL_6:
      v16 = v43;
      goto LABEL_7;
    }
    switch ( a1 )
    {
      case 0x1Cu:
LABEL_53:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
        *(_QWORD *)(a2 + 80) = 0LL;
        break;
      case 7u:
LABEL_47:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
        *(_QWORD *)(a2 + 40) = 0LL;
        break;
      case 8u:
LABEL_54:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
        *(_QWORD *)(a2 + 48) = 0LL;
        break;
      case 0xEu:
LABEL_45:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = 0LL;
        break;
      default:
        switch ( a1 )
        {
          case 0u:
          case 0x1Eu:
            goto LABEL_45;
          case 1u:
          case 5u:
          case 6u:
            goto LABEL_47;
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
            goto LABEL_53;
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
  if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
  {
    _InterlockedOr(v40, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  v16 = -1073741670;
  v43 = -1073741670;
  v41 = 1;
  v7 = 0;
LABEL_7:
  if ( v42 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v14, v15);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable++ == -1;
    if ( v18
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_9;
  }
LABEL_10:
  if ( v7 )
  {
    v19 = v45;
  }
  else
  {
    if ( v41 == 1 )
    {
      memset(v54, 0, 0x38uLL);
      v19 = v54;
      v45 = v54;
      v22 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        v54[0] = v51;
      }
      else
      {
        if ( v16 == -1073740541 )
          v38 = **(_QWORD **)(a2 + 72);
        else
          v38 = 0LL;
        v54[0] = v38;
      }
      v21 = a3;
      if ( v16 == -1073740541 )
      {
        v39 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v39 = *(_DWORD *)(a3 + 8);
        LODWORD(v54[1]) = v39;
      }
      else
      {
        LODWORD(v54[1]) = v16;
        v39 = v16;
      }
      LODWORD(v54[3]) = v39;
      v54[2] = v52;
      if ( a3 )
      {
        v47 = v50;
        v50[0] = v54;
        v50[1] = v49;
      }
    }
    else
    {
      v19 = (_QWORD *)a2;
      v45 = (_QWORD *)a2;
      v21 = a3;
      v47 = (_QWORD *)a3;
      v22 = a1;
      a5 = a1;
    }
    while ( a7->Next != v53 )
    {
      v23 = (_SLIST_ENTRY *)*((_QWORD *)&a7->Next + 1);
      v49 = v23;
      v24 = (_SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
      if ( v23->Next != a7 || *v24 != v23 )
        __fastfail(3u);
      *((_QWORD *)&a7->Next + 1) = v24;
      *v24 = a7;
      v44 = (_SLIST_ENTRY *)*((_QWORD *)&v23[1].Next + 1);
      v25 = v44;
      v19[4] = v23[2].Next;
      CmpCallbackFillObjectContext(v22, v19, &v25[1].Next + 1);
      if ( v21 && (HIDWORD(v25[1].Next) & 1) != 0 )
        v26 = v47;
      else
        v26 = v19;
      v43 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _QWORD *))&v25[2].Next + 1))(v25[2].Next, (int)a5, v26);
      v27 = (PVOID *)v48[1].WaitBlock[0].Object;
      if ( v27 )
        v48[1].WaitBlock[0].Object = *v27;
      v28 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v28 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v28 )
        ExFreePoolWithTag(v23, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v23);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v25[1]) == 0x80000000 )
      {
        _InterlockedOr(v40, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v43 == -1073740541 )
        *((_DWORD *)v19 + 2) = *((_DWORD *)v19 + 6);
      v16 = 0;
      v43 = 0;
      v22 = a5;
    }
  }
  if ( v41 == 1 )
  {
    if ( v19 )
    {
      v16 = *((_DWORD *)v19 + 6);
      if ( v16 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v16;
}
