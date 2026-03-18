/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00108F0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C005E950 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005F230 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0010C6C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // bp
  void *v6; // r15
  __int64 v7; // r12
  __int64 v8; // r9
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  int v15; // ebx
  __int64 v17; // r12
  char v18; // bp
  __int64 v19; // r14
  __int64 v20; // r13
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rbx
  KIRQL v24; // di
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // r8
  _QWORD *v31; // rdx
  __int64 v32; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 **v36; // rdx
  __int64 v37; // rax
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+78h] [rbp-40h] BYREF

  if ( !a1 || !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v37);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v17 = *(_QWORD *)(a2 + 48);
    v18 = 0;
    v19 = *(_QWORD *)(v17 + 8);
    *(_BYTE *)v17 = 1;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1032), 1u);
    v20 = *(_QWORD *)(a1 + 1208);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1880), &v38);
    v22 = 0;
    if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1216) < v20 && (*(_DWORD *)(a1 + 1200) || *(_DWORD *)(a1 + 1188)) )
    {
      v27 = *(_QWORD **)(a1 + 64);
      if ( v27 != (_QWORD *)(a1 + 64) )
      {
        do
        {
          v21 = v27[16];
          v28 = v27[18];
          v29 = v22 + 1;
          v27 = (_QWORD *)*v27;
          if ( v28 <= v21 )
            v29 = v22;
          v22 = v29;
        }
        while ( v27 != (_QWORD *)(a1 + 64) );
        if ( v29 )
        {
          v15 = VidSchiAddPendingCommandToSyncPointList(a1, v19, v20, v29, 0);
          if ( v15 < 0 )
          {
            p_LockHandle = &v38;
LABEL_49:
            KeReleaseInStackQueuedSpinLock(p_LockHandle);
            ExReleaseResourceLite((PERESOURCE)(v4 + 1032));
            return (unsigned int)v15;
          }
          goto LABEL_36;
        }
      }
      *(_QWORD *)(a1 + 1216) = v20;
    }
    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v21, v19) )
    {
      v18 = 1;
      goto LABEL_24;
    }
    v18 = 0;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1912LL), &v40);
    v34 = (__int64 *)(v19 + 200);
    v35 = *(_QWORD *)(a1 + 32) + 1936LL;
    v36 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1944LL);
    if ( *v36 != (__int64 *)v35 )
      __fastfail(3u);
    *v34 = v35;
    *(_QWORD *)(v19 + 208) = v36;
    *v36 = v34;
    *(_QWORD *)(v35 + 8) = v34;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
LABEL_36:
    *(_BYTE *)v17 = 0;
LABEL_24:
    KeReleaseInStackQueuedSpinLock(&v38);
    ExReleaseResourceLite((PERESOURCE)(v4 + 1032));
    if ( v18 )
    {
      v23 = **(_QWORD **)(v19 + 8);
      v24 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 41128), &v41);
      v25 = *(_QWORD **)(v23 + 41144);
      v26 = (_QWORD *)(v19 + 200);
      if ( *v25 != v23 + 41136 )
        __fastfail(3u);
      *v26 = v23 + 41136;
      *(_QWORD *)(v19 + 208) = v25;
      *v25 = v26;
      *(_QWORD *)(v23 + 41144) = v26;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v41);
      KeSetEvent(*(PRKEVENT *)(v23 + 41120), 0, 0);
      KeLowerIrql(v24);
    }
    return 0LL;
  }
  v5 = 1;
  v6 = *(void **)(a2 + 48);
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_27:
    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
    return 0LL;
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1032), 1u);
  v7 = *(_QWORD *)(a1 + 1208);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1880), &LockHandle);
  LODWORD(v8) = 0;
  if ( *(_QWORD *)(a1 + 1216) < v7 && (*(_DWORD *)(a1 + 1200) || *(_DWORD *)(a1 + 1188)) )
  {
    v9 = *(_QWORD **)(a1 + 64);
    if ( v9 == (_QWORD *)(a1 + 64) )
      goto LABEL_37;
    do
    {
      v10 = v9[16];
      v11 = v9[18];
      v12 = v8 + 1;
      v9 = (_QWORD *)*v9;
      if ( v11 <= v10 )
        v12 = v8;
      v8 = v12;
    }
    while ( v9 != (_QWORD *)(a1 + 64) );
    if ( !v12 )
    {
LABEL_37:
      *(_QWORD *)(a1 + 1216) = v7;
      goto LABEL_15;
    }
    v5 = 0;
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      v13 = *(_QWORD **)(a2 + 48);
      v14 = v13 + 27;
      if ( v13[27] )
      {
        v30 = *v14;
        v31 = (_QWORD *)v13[28];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v31 != v14 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        *v14 = 0LL;
        v32 = v13[12];
        v13[28] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 8));
      }
    }
    v15 = VidSchiAddPendingCommandToSyncPointList(a1, v6, v7, v8, 3);
    if ( v15 < 0 )
    {
      p_LockHandle = &LockHandle;
      goto LABEL_49;
    }
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExReleaseResourceLite((PERESOURCE)(v4 + 1032));
  if ( v5 )
    goto LABEL_27;
  return 0LL;
}
