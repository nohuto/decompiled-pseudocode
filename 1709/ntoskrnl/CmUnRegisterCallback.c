/*
 * XREFs of CmUnRegisterCallback @ 0x140689490
 * Callers:
 *     VrpDecrementSiloCount @ 0x1406A3124 (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x14074A750 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v5; // rdi
  int v6; // eax
  struct _KTHREAD *v7; // rax
  _QWORD *v8; // rcx
  void **v9; // rax
  _QWORD *v10; // rdx
  void **v11; // rax
  char v12; // r14
  struct _KTHREAD *v13; // rax
  char *i; // rbx
  char *v15; // r15
  char *v16; // rdx
  char **v17; // rcx
  __int64 v18; // rcx
  char **v19; // rax
  char **v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  PVOID *v23; // rbx
  struct _KTHREAD *v24; // rax
  PSLIST_ENTRY v25; // rbx
  PSLIST_ENTRY v26; // rcx
  void *v27; // rcx
  char *v29; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v30[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-68h] BYREF
  char *v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+60h] [rbp-58h] BYREF
  __int64 v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+70h] [rbp-48h]
  __int64 v36; // [rsp+D0h] [rbp+18h] BYREF
  int v37; // [rsp+D8h] [rbp+20h]

  v2 = -1073741811;
  v37 = -1073741811;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v30[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CallbackListHead, v30, 0);
    v5 = NextElement;
    v30[1] = NextElement;
    if ( !NextElement )
      break;
    if ( *((_QWORD *)NextElement + 3) == Cookie.QuadPart )
    {
      v6 = *((_DWORD *)NextElement + 4);
      LODWORD(v36) = v6;
      if ( !v6 )
      {
        v10 = *(_QWORD **)v5;
        v11 = (void **)*((_QWORD *)v5 + 1);
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v11 != v5 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = 0;
        v37 = 0;
        goto LABEL_19;
      }
      if ( (v6 & 0x80000000) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)v5 + 4, 0x80000000);
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        while ( 1 )
        {
          LODWORD(v36) = *((_DWORD *)v5 + 4);
          if ( (_DWORD)v36 == 0x80000000 )
            break;
          ExBlockOnAddressPushLock(&CallbackListDeleteEvent, (_QWORD *)v5 + 2, &v36, 4uLL, 0LL);
        }
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        v8 = *(_QWORD **)v5;
        v9 = (void **)*((_QWORD *)v5 + 1);
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v9 != v5 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = 0;
        v37 = 0;
        break;
      }
    }
  }
  if ( v2 < 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
LABEL_19:
  v32 = (char *)&v31;
  v31 = (__int64 *)&v31;
  v12 = 0;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  for ( i = (char *)*((_QWORD *)v5 + 8); ; i = v29 )
  {
    v29 = i;
    if ( i == v5 + 64 )
      break;
    v29 = *(char **)i;
    v15 = i - 16;
    if ( ObReferenceObjectSafe(*((_QWORD *)i + 4)) )
    {
      v16 = *(char **)i;
      v17 = (char **)*((_QWORD *)v15 + 3);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v17 != i )
        __fastfail(3u);
      *v17 = v16;
      *((_QWORD *)v16 + 1) = v17;
      v18 = *(_QWORD *)v15;
      v19 = (char **)*((_QWORD *)v15 + 1);
      if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || *v19 != v15 )
        __fastfail(3u);
      *v19 = (char *)v18;
      *(_QWORD *)(v18 + 8) = v19;
      v20 = (char **)v32;
      if ( *(__int64 ***)v32 != &v31 )
        __fastfail(3u);
      *(_QWORD *)i = &v31;
      *((_QWORD *)i + 1) = v20;
      *v20 = i;
      v32 = i;
    }
    else
    {
      v12 = 1;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v21 = v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    v22 = (__int64 *)*v31;
    if ( (__int64 **)v31[1] != &v31 || (__int64 *)v22[1] != v31 )
      __fastfail(3u);
    v31 = (__int64 *)*v31;
    v22[1] = (__int64)&v31;
    v23 = (PVOID *)(v21 - 2);
    v30[2] = v21 - 2;
    v33 = v21[4];
    v34 = v21[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))v5 + 5))(*((_QWORD *)v5 + 4), 40LL, &v33);
    ObfDereferenceObject(v23[6]);
    ExFreePoolWithTag(v23, 0x63634D43u);
  }
  while ( v12 )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v29 = (char *)*((_QWORD *)v5 + 8);
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v29 == v5 + 64 )
      v12 = 0;
    else
      ExBlockOnAddressPushLock(&CallbackListDeleteEvent, (_QWORD *)v5 + 8, &v29, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v25 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v25 )
    {
      v26 = v25;
      v25 = v25->Next;
      ExFreePoolWithTag(v26, 0);
    }
  }
  v27 = (void *)*((_QWORD *)v5 + 7);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  ExFreePoolWithTag(v5, 0);
  return v2;
}
