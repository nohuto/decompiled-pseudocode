/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00111A0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00616A0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0062030 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0011510 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r15
  char v6; // bp
  __int64 v7; // r12
  __int64 v8; // r9
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  int v15; // ebx
  __int64 v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  char v21; // bl
  __int64 v22; // rbx
  KIRQL v23; // di
  _QWORD *v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // r8
  unsigned __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  _QWORD *v30; // r8
  __int64 v31; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 **v35; // rdx
  __int64 v36; // rax
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+78h] [rbp-30h] BYREF

  if ( !a1 || !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v36);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD **)(a2 + 48);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v17 = v5[1];
    *(_BYTE *)v5 = 1;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1040), 1u);
    v18 = *(_QWORD *)(a1 + 1208);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1888), &v37);
    v20 = 0;
    if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1216) < v18 && (*(_DWORD *)(a1 + 1200) || *(_DWORD *)(a1 + 1188)) )
    {
      v26 = *(_QWORD **)(a1 + 64);
      if ( v26 != (_QWORD *)(a1 + 64) )
      {
        do
        {
          v19 = v26[16];
          v27 = v26[18];
          v28 = v20 + 1;
          v26 = (_QWORD *)*v26;
          if ( v27 <= v19 )
            v28 = v20;
          v20 = v28;
        }
        while ( v26 != (_QWORD *)(a1 + 64) );
        if ( v28 )
        {
          v15 = VidSchiAddPendingCommandToSyncPointList(a1, v17, v18, v28, 0);
          if ( v15 < 0 )
          {
            p_LockHandle = &v37;
LABEL_49:
            KeReleaseInStackQueuedSpinLock(p_LockHandle);
            ExReleaseResourceLite((PERESOURCE)(v4 + 1040));
            return (unsigned int)v15;
          }
          goto LABEL_36;
        }
      }
      *(_QWORD *)(a1 + 1216) = v18;
    }
    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v19, v17) )
    {
      v21 = 1;
      goto LABEL_24;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1920LL), &v39);
    v33 = (__int64 *)(v17 + 200);
    v34 = *(_QWORD *)(a1 + 32) + 1952LL;
    v35 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1960LL);
    if ( *v35 != (__int64 *)v34 )
      __fastfail(3u);
    *v33 = v34;
    *(_QWORD *)(v17 + 208) = v35;
    *v35 = v33;
    *(_QWORD *)(v34 + 8) = v33;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v39);
LABEL_36:
    *(_BYTE *)v5 = 0;
    v21 = 0;
LABEL_24:
    KeReleaseInStackQueuedSpinLock(&v37);
    ExReleaseResourceLite((PERESOURCE)(v4 + 1040));
    if ( v21 )
    {
      v22 = **(_QWORD **)(v17 + 8);
      v23 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v22 + 41128), &v40);
      v24 = *(_QWORD **)(v22 + 41144);
      v25 = (_QWORD *)(v17 + 200);
      if ( *v24 != v22 + 41136 )
        __fastfail(3u);
      *v25 = v22 + 41136;
      *(_QWORD *)(v17 + 208) = v24;
      *v24 = v25;
      *(_QWORD *)(v22 + 41144) = v25;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
      KeSetEvent(*(PRKEVENT *)(v22 + 41120), 0, 0);
      KeLowerIrql(v23);
    }
    return 0LL;
  }
  v6 = 1;
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_27:
    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v5);
    return 0LL;
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1040), 1u);
  v7 = *(_QWORD *)(a1 + 1208);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1888), &LockHandle);
  LODWORD(v8) = 0;
  if ( *(_QWORD *)(a1 + 1216) < v7 && (*(_DWORD *)(a1 + 1200) || *(_DWORD *)(a1 + 1188)) )
  {
    v9 = *(_QWORD **)(a1 + 64);
    if ( v9 == (_QWORD *)(a1 + 64) )
      goto LABEL_40;
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
LABEL_40:
      *(_QWORD *)(a1 + 1216) = v7;
      goto LABEL_15;
    }
    v6 = 0;
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      v13 = *(_QWORD **)(a2 + 48);
      v14 = v13 + 27;
      if ( v13[27] )
      {
        v29 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v30 = (_QWORD *)v13[28], (_QWORD *)*v30 != v14) )
          __fastfail(3u);
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        *v14 = 0LL;
        v31 = v13[12];
        v13[28] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 8));
      }
    }
    v15 = VidSchiAddPendingCommandToSyncPointList(a1, v5, v7, v8, 3);
    if ( v15 < 0 )
    {
      p_LockHandle = &LockHandle;
      goto LABEL_49;
    }
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExReleaseResourceLite((PERESOURCE)(v4 + 1040));
  if ( v6 )
    goto LABEL_27;
  return 0LL;
}
