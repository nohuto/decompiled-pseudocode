/*
 * XREFs of CmUnRegisterCallback @ 0x140660520
 * Callers:
 *     VrpDecrementSiloCount @ 0x140679108 (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x14070EAF0 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v4; // rdi
  struct _KTHREAD *v5; // rax
  _QWORD *v6; // rdx
  void **v7; // rax
  _QWORD *v8; // rcx
  void **v9; // rax
  char v10; // si
  struct _KTHREAD *v11; // rax
  char *i; // rbx
  char *v13; // r14
  char *v14; // rdx
  char **v15; // rcx
  __int64 v16; // rcx
  char **v17; // rax
  char **v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rcx
  PVOID *v21; // rbx
  struct _KTHREAD *v22; // rax
  PSLIST_ENTRY v23; // rbx
  PSLIST_ENTRY v24; // rcx
  void *v25; // rcx
  char *v27; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v28[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v29; // [rsp+50h] [rbp-68h] BYREF
  char *v30; // [rsp+58h] [rbp-60h]
  __int64 v31; // [rsp+60h] [rbp-58h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h]
  __int64 v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+D0h] [rbp+18h] BYREF
  int v35; // [rsp+D8h] [rbp+20h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v28[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  while ( 1 )
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, v28, 0);
      v4 = NextElement;
      v28[1] = NextElement;
      if ( !NextElement )
      {
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return -1073741811;
      }
    }
    while ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart );
    LODWORD(v34) = *((_DWORD *)NextElement + 4);
    if ( !(_DWORD)v34 )
      break;
    if ( (v34 & 0x80000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)NextElement + 4, 0x80000000);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      while ( 1 )
      {
        LODWORD(v34) = *((_DWORD *)v4 + 4);
        if ( (_DWORD)v34 == 0x80000000 )
          break;
        ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v4 + 2, &v34, 4uLL, 0LL);
      }
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v6 = *(_QWORD **)v4;
      v7 = (void **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      goto LABEL_16;
    }
  }
  v8 = *(_QWORD **)NextElement;
  v9 = (void **)*((_QWORD *)NextElement + 1);
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v9 != v4 )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
LABEL_16:
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v35 = 0;
  v30 = (char *)&v29;
  v29 = (__int64 *)&v29;
  v10 = 0;
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  for ( i = (char *)*((_QWORD *)v4 + 8); ; i = v27 )
  {
    v27 = i;
    if ( i == v4 + 64 )
      break;
    v27 = *(char **)i;
    v13 = i - 16;
    if ( ObReferenceObjectSafe(*((_QWORD *)i + 4)) )
    {
      v14 = *(char **)i;
      v15 = (char **)*((_QWORD *)v13 + 3);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v15 != i )
        __fastfail(3u);
      *v15 = v14;
      *((_QWORD *)v14 + 1) = v15;
      v16 = *(_QWORD *)v13;
      v17 = (char **)*((_QWORD *)v13 + 1);
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || *v17 != v13 )
        __fastfail(3u);
      *v17 = (char *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = (char **)v30;
      if ( *(__int64 ***)v30 != &v29 )
        __fastfail(3u);
      *(_QWORD *)i = &v29;
      *((_QWORD *)i + 1) = v18;
      *v18 = i;
      v30 = i;
    }
    else
    {
      v10 = 1;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v19 = v29;
    if ( v29 == (__int64 *)&v29 )
      break;
    v20 = (__int64 *)*v29;
    if ( (__int64 **)v29[1] != &v29 || (__int64 *)v20[1] != v29 )
      __fastfail(3u);
    v29 = (__int64 *)*v29;
    v20[1] = (__int64)&v29;
    v21 = (PVOID *)(v19 - 2);
    v28[2] = v19 - 2;
    v31 = v19[4];
    v32 = v19[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))v4 + 5))(*((_QWORD *)v4 + 4), 40LL, &v31);
    ObfDereferenceObject(v21[6]);
    ExFreePoolWithTag(v21, 0x63634D43u);
  }
  while ( v10 )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v27 = (char *)*((_QWORD *)v4 + 8);
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v27 == v4 + 64 )
      v10 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v4 + 8, &v27, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v23 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v23 )
    {
      v24 = v23;
      v23 = v23->Next;
      ExFreePoolWithTag(v24, 0);
    }
  }
  v25 = (void *)*((_QWORD *)v4 + 7);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  ExFreePoolWithTag(v4, 0);
  return 0;
}
