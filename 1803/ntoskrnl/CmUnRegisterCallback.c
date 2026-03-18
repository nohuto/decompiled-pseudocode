/*
 * XREFs of CmUnRegisterCallback @ 0x1406ED880
 * Callers:
 *     VrpDecrementSiloCount @ 0x1407077BC (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x1407ACC00 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdi
  int v8; // eax
  struct _KTHREAD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  void **v13; // rax
  _QWORD *v14; // rdx
  void **v15; // rax
  char v16; // r15
  struct _KTHREAD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ***v20; // r13
  __int64 ***v21; // rax
  __int64 ***v22; // rbx
  __int64 **v23; // r13
  __int64 ***v24; // r14
  __int64 **v25; // rdx
  __int64 ****v26; // rcx
  __int64 **v27; // rcx
  __int64 ****v28; // rax
  __int64 **v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rcx
  PVOID *v32; // rbx
  struct _KTHREAD *v33; // rax
  __int64 ***v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  PSLIST_ENTRY v37; // rbx
  PSLIST_ENTRY v38; // rcx
  void *v39; // rcx
  __int64 ***v41; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v42[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v43; // [rsp+58h] [rbp-60h] BYREF
  __int64 **v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+68h] [rbp-50h] BYREF
  __int64 v46; // [rsp+70h] [rbp-48h]
  __int64 v47; // [rsp+78h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp+18h] BYREF
  int v49; // [rsp+D8h] [rbp+20h]

  v2 = -1073741811;
  v49 = -1073741811;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v42[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)&CallbackListHead, v42, 0);
    v7 = NextElement;
    v42[1] = NextElement;
    if ( !NextElement )
      break;
    if ( *((_QWORD *)NextElement + 3) == Cookie.QuadPart )
    {
      v8 = *((_DWORD *)NextElement + 4);
      LODWORD(v48) = v8;
      if ( !v8 )
      {
        v14 = *(_QWORD **)v7;
        v15 = (void **)*((_QWORD *)v7 + 1);
        if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || *v15 != v7 )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v5, v6);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = 0;
        v49 = 0;
        goto LABEL_18;
      }
      if ( (v8 & 0x80000000) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)v7 + 4, 0x80000000);
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v5, v6);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        while ( 1 )
        {
          LODWORD(v48) = *((_DWORD *)v7 + 4);
          if ( (_DWORD)v48 == 0x80000000 )
            break;
          ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v7 + 2, &v48, 4uLL, 0LL);
        }
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        v12 = *(_QWORD **)v7;
        v13 = (void **)*((_QWORD *)v7 + 1);
        if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || *v13 != v7 )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = v13;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v10, v11);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = 0;
        v49 = 0;
        break;
      }
    }
  }
  if ( v2 < 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v5, v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
LABEL_18:
  v44 = &v43;
  v43 = (__int64 *)&v43;
  v16 = 0;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v20 = (__int64 ***)(v7 + 64);
  v21 = (__int64 ***)*((_QWORD *)v7 + 8);
  v22 = v21;
  v42[3] = v7 + 64;
  while ( 1 )
  {
    v41 = v21;
    if ( v22 == v20 )
      break;
    v23 = *v21;
    v24 = v21 - 2;
    if ( ObReferenceObjectSafe((__int64)v21[4]) )
    {
      v25 = v24[2];
      v26 = (__int64 ****)v24[3];
      if ( v25[1] != (__int64 *)(v24 + 2) || *v26 != v24 + 2 )
        __fastfail(3u);
      *v26 = (__int64 ***)v25;
      v25[1] = (__int64 *)v26;
      v27 = *v24;
      v28 = (__int64 ****)v24[1];
      if ( (*v24)[1] != (__int64 *)v24 || *v28 != v24 )
        __fastfail(3u);
      *v28 = (__int64 ***)v27;
      v27[1] = (__int64 *)v28;
      v29 = v44;
      if ( *v44 != (__int64 *)&v43 )
        __fastfail(3u);
      *v22 = &v43;
      v22[1] = v29;
      *v29 = (__int64 *)v22;
      v44 = (__int64 **)v22;
    }
    else
    {
      v16 = 1;
    }
    v21 = (__int64 ***)v23;
    v22 = (__int64 ***)v23;
    v20 = (__int64 ***)(v7 + 64);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v18, v19);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v30 = v43;
    if ( v43 == (__int64 *)&v43 )
      break;
    v31 = (__int64 *)*v43;
    if ( (__int64 **)v43[1] != &v43 || (__int64 *)v31[1] != v43 )
      __fastfail(3u);
    v43 = (__int64 *)*v43;
    v31[1] = (__int64)&v43;
    v32 = (PVOID *)(v30 - 2);
    v42[2] = v30 - 2;
    v45 = v30[4];
    v46 = v30[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))v7 + 5))(*((_QWORD *)v7 + 4), 40LL, &v45);
    ObfDereferenceObject(v32[6]);
    ExFreePoolWithTag(v32, 0x63634D43u);
  }
  while ( v16 )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v41 = (__int64 ***)*((_QWORD *)v7 + 8);
    v34 = v41;
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v35, v36);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v34 == v20 )
      v16 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v7 + 8, &v41, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v37 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v37 )
    {
      v38 = v37;
      v37 = v37->Next;
      ExFreePoolWithTag(v38, 0);
    }
  }
  v39 = (void *)*((_QWORD *)v7 + 7);
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  ExFreePoolWithTag(v7, 0);
  return v2;
}
