/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C00103BC
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EE80 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0013D00 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001454C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002AE60 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C002F390 (VidSchUnreferenceDisplayingAllocationInternal.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0030FE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084 (-VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003202C (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00027D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0005290 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0022668 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0022AA8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0px @ 0x1C002A14C (McTemplateK0px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  VIDMM_GLOBAL *v3; // r13
  __int64 v4; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r10
  _QWORD *v15; // rdi
  _QWORD *v16; // r9
  VIDMM_GLOBAL ***v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r10
  _QWORD *v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // r14
  _QWORD *v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdi
  __int64 **v31; // rcx
  struct VIDMM_ALLOC *v32; // r9
  __int64 v33; // rax
  __int64 **v34; // rcx
  _QWORD *v35; // rax
  void **v36; // rcx
  bool v37; // zf
  _QWORD *v38; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_GLOBAL *v40; // [rsp+80h] [rbp+8h]

  v1 = a1[4];
  v3 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 552LL);
  v40 = v3;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1936), &LockHandle);
  v5 = (_QWORD **)(v1 + 1968);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    do
    {
      v15 = (_QWORD *)*v6;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, (__int64)(v6 - 25)) )
      {
        v18 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v19 = (_QWORD *)v16[1], (_QWORD *)*v19 != v16) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        VIDMM_GLOBAL::AddPendingTermination(*v17[1], (struct VIDMM_ALLOC *)v17);
      }
      v6 = v15;
    }
    while ( v15 != v5 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = (_QWORD *)a1[156];
  while ( v9 != a1 + 156 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    v11 = v10[2];
    if ( v11 > a1[155] )
    {
      v12 = *((_DWORD *)v10 + 16);
      v13 = 0;
      if ( v12 )
      {
        v14 = v10[3];
        do
        {
          v8 = *(_QWORD *)(v14 + 16LL * v13);
          if ( v8 )
          {
            if ( *(_QWORD *)(v8 + 160) < *(_QWORD *)(v14 + 16LL * v13 + 8) )
              return;
          }
        }
        while ( ++v13 < v12 );
      }
      v7 = *((unsigned int *)v10 + 28);
      v20 = 0;
      if ( (_DWORD)v7 )
      {
        v21 = v10[9];
        do
        {
          v8 = *(_QWORD *)(v21 + 16LL * v20);
          if ( v8 )
          {
            if ( *(_QWORD *)(v8 + 48) < *(_QWORD *)(v21 + 16LL * v20 + 8) )
              return;
          }
        }
        while ( ++v20 < (unsigned int)v7 );
      }
      a1[155] = v11;
    }
    v22 = (_QWORD *)v10[17];
    if ( v22 != v10 + 17 )
    {
      do
      {
        v23 = *v22;
        v24 = v22 - 27;
        v25 = v22;
        v22 = (_QWORD *)v23;
        if ( *(_QWORD **)(v23 + 8) != v25 || (v26 = (_QWORD *)v25[1], (_QWORD *)*v26 != v25) )
          __fastfail(3u);
        *v26 = v23;
        *(_QWORD *)(v23 + 8) = v26;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v24);
        *v25 = 0LL;
        v24[28] = 0LL;
      }
      while ( v22 != v10 + 17 );
      v3 = v40;
    }
    v27 = (__int64 *)v10[15];
    while ( v27 != v10 + 15 )
    {
      v28 = *v27;
      v29 = (__int64)(v27 - 25);
      v30 = v27;
      v27 = (__int64 *)v28;
      if ( *(__int64 **)(v28 + 8) != v30 || (v31 = (__int64 **)v30[1], *v31 != v30) )
        __fastfail(3u);
      *v31 = (__int64 *)v28;
      *(_QWORD *)(v28 + 8) = v31;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v31, v29) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v3, v32);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1936LL), &LockHandle);
        v33 = a1[4] + 1968LL;
        v34 = *(__int64 ***)(a1[4] + 1976LL);
        if ( *v34 != (__int64 *)v33 )
          __fastfail(3u);
        v30[1] = (__int64)v34;
        *v30 = v33;
        *v34 = v30;
        *(_QWORD *)(v33 + 8) = v30;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v35 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v36 = (void **)v10[1], *v36 != v10) )
      __fastfail(3u);
    v37 = bTracingEnabled == 0;
    *v36 = v35;
    v35[1] = v36;
    if ( !v37 )
    {
      v38 = (_QWORD *)a1[1];
      if ( !v38 )
        v38 = a1;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0px(v36, v7, v8, v38, v10[2]);
    }
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v10, v7);
  }
}
