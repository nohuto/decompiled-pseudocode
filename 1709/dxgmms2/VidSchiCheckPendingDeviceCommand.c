/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C0004764
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x1C00025C0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000DE7C (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0015888 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0028030 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C002C270 (VidSchUnreferenceDisplayingAllocationInternal.c)
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0px @ 0x1C002749C (McTemplateK0px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD **v4; // rbx
  _QWORD *v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r9
  VIDMM_GLOBAL ***v15; // r10
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v19; // rdi
  _QWORD *v20; // r15
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // r15
  _QWORD *v26; // r9
  __int64 *v27; // rdi
  __int64 v28; // rcx
  __int64 **v29; // rax
  struct VIDMM_ALLOC *v30; // r9
  __int64 v31; // rax
  __int64 **v32; // rcx
  _QWORD *v33; // rax
  void **v34; // rcx
  bool v35; // zf
  _QWORD *v36; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_GLOBAL *v38; // [rsp+80h] [rbp+8h]

  v1 = a1[4];
  v38 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 536LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1920), &LockHandle);
  v4 = (_QWORD **)(v1 + 1952);
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v13 = (_QWORD *)*v5;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v3, v5 - 25) )
      {
        v16 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v17 = (_QWORD *)v14[1], (_QWORD *)*v17 != v14) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        VIDMM_GLOBAL::AddPendingTermination(*v15[1], (struct VIDMM_ALLOC *)v15);
      }
      v5 = v13;
    }
    while ( v13 != v4 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v7 = (_QWORD *)a1[153];
  while ( v7 != a1 + 153 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    v9 = v8[2];
    if ( v9 > a1[152] )
    {
      v6 = *((unsigned int *)v8 + 16);
      v10 = 0;
      if ( (_DWORD)v6 )
      {
        v11 = v8[3];
        do
        {
          v12 = *(_QWORD *)(v11 + 16LL * v10);
          if ( v12 )
          {
            if ( *(_QWORD *)(v12 + 152) < *(_QWORD *)(v11 + 16LL * v10 + 8) )
              return;
          }
        }
        while ( ++v10 < (unsigned int)v6 );
      }
      a1[152] = v9;
    }
    v18 = v8 + 11;
    v19 = (_QWORD *)v8[11];
    while ( v19 != v18 )
    {
      v20 = v19 - 27;
      v19 = (_QWORD *)*v19;
      v21 = v20 + 27;
      v22 = v20[27];
      if ( *(_QWORD **)(v22 + 8) != v20 + 27 || (v23 = (_QWORD *)v20[28], (_QWORD *)*v23 != v21) )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v20);
      *v21 = 0LL;
      v20[28] = 0LL;
    }
    v24 = v8 + 9;
    v25 = (_QWORD *)v8[9];
    while ( v25 != v24 )
    {
      v26 = v25 - 25;
      v25 = (_QWORD *)*v25;
      v27 = v26 + 25;
      v28 = v26[25];
      if ( *(_QWORD **)(v28 + 8) != v26 + 25 || (v29 = (__int64 **)v26[26], *v29 != v27) )
        __fastfail(3u);
      *v29 = (__int64 *)v28;
      *(_QWORD *)(v28 + 8) = v29;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v28, v26) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v38, v30);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1920LL), &LockHandle);
        v31 = a1[4] + 1952LL;
        v32 = *(__int64 ***)(a1[4] + 1960LL);
        if ( *v32 != (__int64 *)v31 )
          __fastfail(3u);
        v27[1] = (__int64)v32;
        *v27 = v31;
        *v32 = v27;
        *(_QWORD *)(v31 + 8) = v27;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    if ( (_QWORD *)*v24 == v24 && (_QWORD *)*v18 == v18 )
    {
      v33 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v34 = (void **)v8[1], *v34 != v8) )
        __fastfail(3u);
      v35 = bTracingEnabled == 0;
      *v34 = v33;
      v33[1] = v34;
      if ( !v35 )
      {
        v36 = (_QWORD *)a1[1];
        if ( !v36 )
          v36 = a1;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0px(v34, v9, v6, v36, v8[2]);
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v8, v9);
    }
  }
}
