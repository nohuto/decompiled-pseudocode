/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00012F0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0065A40 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0066390 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0001640 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r14
  char v7; // si
  __int64 v8; // r8
  int v9; // r9d
  int v10; // r11d
  _QWORD *m; // r10
  int v12; // edx
  bool v13; // cc
  _QWORD *n; // r15
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ebp
  char v25; // bl
  __int64 v26; // rbx
  KIRQL v27; // di
  _QWORD *v28; // rsi
  _QWORD *v29; // rdx
  _QWORD *i; // r10
  unsigned int v31; // edx
  _QWORD *j; // r11
  _QWORD *v33; // r10
  __int64 v34; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *k; // rbx
  int v37; // edx
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 **v40; // rdx
  _QWORD *ii; // rbp
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+78h] [rbp-40h] BYREF

  if ( !a1 || !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a2 + 48);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v20 = *(_QWORD *)(v6 + 8);
    *(_BYTE *)v6 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1904), &v45);
    v22 = *(_QWORD *)(a1 + 1232);
    v23 = 0LL;
    v24 = 0;
    if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1240) < v22 && (*(_DWORD *)(a1 + 1224) || *(_DWORD *)(a1 + 1212)) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); v23 = v31 )
      {
        v21 = i[19];
        v31 = v23 + 1;
        v13 = v21 <= i[17];
        i = (_QWORD *)*i;
        if ( v13 )
          v31 = v23;
      }
      for ( j = *(_QWORD **)(a1 + 88); j != (_QWORD *)(a1 + 88); j = (_QWORD *)*j )
      {
        for ( k = (_QWORD *)j[6]; k != j + 6; v24 = v37 )
        {
          v21 = k[6];
          v37 = v24 + 1;
          v13 = v21 <= k[5];
          k = (_QWORD *)*k;
          if ( v13 )
            v37 = v24;
        }
      }
      if ( (_DWORD)v23 || v24 )
      {
        v18 = VidSchiAddPendingCommandToSyncPointList(a1, v20);
        if ( v18 < 0 )
        {
          p_LockHandle = &v45;
LABEL_66:
          KeReleaseInStackQueuedSpinLock(p_LockHandle);
          return (unsigned int)v18;
        }
        goto LABEL_39;
      }
      *(_QWORD *)(a1 + 1240) = v22;
    }
    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v21, v20, v22, v23) )
    {
      v25 = 1;
      goto LABEL_27;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1936LL), &v47);
    v38 = (__int64 *)(v20 + 200);
    v39 = *(_QWORD *)(a1 + 32) + 1968LL;
    v40 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1976LL);
    if ( *v40 != (__int64 *)v39 )
      __fastfail(3u);
    *v38 = v39;
    *(_QWORD *)(v20 + 208) = v40;
    *v40 = v38;
    *(_QWORD *)(v39 + 8) = v38;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
LABEL_39:
    *(_BYTE *)v6 = 0;
    v25 = 0;
LABEL_27:
    KeReleaseInStackQueuedSpinLock(&v45);
    if ( v25 )
    {
      v26 = **(_QWORD **)(v20 + 8);
      v27 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 41704), &v48);
      v28 = (_QWORD *)(v20 + 200);
      v29 = *(_QWORD **)(v26 + 41720);
      if ( *v29 != v26 + 41712 )
        __fastfail(3u);
      *v28 = v26 + 41712;
      v28[1] = v29;
      *v29 = v28;
      *(_QWORD *)(v26 + 41720) = v28;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
      KeSetEvent(*(PRKEVENT *)(v26 + 41696), 0, 0);
      KeLowerIrql(v27);
    }
    return 0LL;
  }
  v7 = 1;
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_19:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v43 = *(_QWORD *)(v6 + 96);
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v43 + 4), 2, 1) == 1 )
      {
        if ( bTracingEnabled )
        {
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0p(v43, &EventCompleteOfferAllocation, a3, v6);
        }
      }
    }
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  v8 = *(_QWORD *)(a1 + 1232);
  v9 = 0;
  v10 = 0;
  if ( *(_QWORD *)(a1 + 1240) < v8 && (*(_DWORD *)(a1 + 1224) || *(_DWORD *)(a1 + 1212)) )
  {
    for ( m = *(_QWORD **)(a1 + 72); m != (_QWORD *)(a1 + 72); v9 = v12 )
    {
      v12 = v9 + 1;
      v13 = m[19] <= m[17];
      m = (_QWORD *)*m;
      if ( v13 )
        v12 = v9;
    }
    for ( n = *(_QWORD **)(a1 + 88); n != (_QWORD *)(a1 + 88); n = (_QWORD *)*n )
    {
      for ( ii = (_QWORD *)n[6]; ii != n + 6; v10 = v42 )
      {
        v42 = v10 + 1;
        v13 = ii[6] <= ii[5];
        ii = (_QWORD *)*ii;
        if ( v13 )
          v42 = v10;
      }
    }
    if ( !v9 && !v10 )
    {
      *(_QWORD *)(a1 + 1240) = v8;
      goto LABEL_16;
    }
    v7 = 0;
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      v15 = *(_QWORD **)(a2 + 48);
      v16 = v15 + 27;
      v17 = v15[27];
      if ( v17 )
      {
        if ( *(_QWORD **)(v17 + 8) != v16 || (v33 = (_QWORD *)v15[28], (_QWORD *)*v33 != v16) )
          __fastfail(3u);
        *v33 = v17;
        *(_QWORD *)(v17 + 8) = v33;
        *v16 = 0LL;
        v34 = v15[12];
        v15[28] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
      }
    }
    v18 = VidSchiAddPendingCommandToSyncPointList(a1, v6);
    if ( v18 < 0 )
    {
      p_LockHandle = &LockHandle;
      goto LABEL_66;
    }
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
    goto LABEL_19;
  return 0LL;
}
