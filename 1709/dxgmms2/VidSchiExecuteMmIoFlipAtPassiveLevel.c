/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004850 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C00140F0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00151C0 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00200F4 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0024E4C (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0027C28 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0029EDC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r14
  _DWORD *v7; // r15
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v16; // rdx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rax
  void *v25; // rcx
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-ACh]
  _QWORD v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v30[268]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v31[48]; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v32[80]; // [rsp+918h] [rbp+810h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 16);
  v27 = v4;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)(v1 + 8 * v3 + 3008);
  v7 = *(_DWORD **)(v6 + 8 * v4 + 24);
  v8 = (__int64)&v7[308 * v5 + 14];
  memset(v30, 0, 0x858uLL);
  memset(v32, 0, sizeof(v32));
  v28[0] = 0LL;
  v28[1] = 0LL;
  memset(v31, 0, 0x28uLL);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v1,
    v8,
    v3,
    (unsigned int)v30,
    *(_BYTE *)(a1 + 20),
    (__int64)v32,
    (__int64)v28,
    (__int64)v31);
  HIDWORD(v30[1]) |= 8u;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[49])(
         *(_QWORD *)(*(_QWORD *)(v30[0] + 16LL) + 2304LL),
         &v30[1]);
  v13 = v9;
  if ( v9 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v24[6] = v30;
    v24[3] = 281LL;
    v24[4] = 11LL;
    v24[5] = v13;
    v24[7] = *(_QWORD *)(v1 + 16);
    WdLogEvent5_WdCriticalError(v24);
    VidMmFreeDeferredDmaBufferMapping(v25);
    JUMPOUT(0x1C002801ELL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1888), &LockHandle);
  if ( (*(_DWORD *)(v8 + 1120) & 0x10) != 0 )
    v14 = ((unsigned __int16)**(_DWORD **)(v8 + 1160) | (unsigned __int16)(**(_DWORD **)(v8 + 1160) >> 10)) & 0x3FF;
  else
    v14 = (1 << *(_DWORD *)(v1 + 128)) - 1;
  *(_DWORD *)(v6 + 2956) &= ~v14;
  v15 = *(unsigned int *)(v8 + 1120);
  if ( (v15 & 0x20) != 0 )
  {
    v16 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1136);
    if ( v16 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v8 + 1128),
        v16,
        1,
        (*(_DWORD *)(v8 + 1120) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v8 + 1152),
        *(_QWORD *)(v8 + 1144),
        0LL);
  }
  VidSchiComputeFlipEntryStatusAfterFlip(v15, (__int64)v30, &v26);
  v17 = v26;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v1, v8, (__int64)v30, v26);
  *(_DWORD *)(v8 + 1052) = v17;
  if ( v17 == 11 )
  {
    *(_QWORD *)(v8 + 1096) = *(_QWORD *)(v6 + 23560);
    *(_QWORD *)(v8 + 1112) = *(_QWORD *)(v6 + 23552);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v19, v6, v8);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v1, (_WORD *)v6, v8);
    VidSchiCompleteFlipEntry(v1, v3, v27, v5, v5, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 1120) & 0x10) != 0 )
      v21 = ((unsigned __int16)**(_DWORD **)(v8 + 1160) | (unsigned __int16)(**(_DWORD **)(v8 + 1160) >> 10)) & 0x3FF;
    else
      v21 = (1 << *(_DWORD *)(v1 + 128)) - 1;
    *(_DWORD *)(v6 + 2952) |= v21;
    *(_QWORD *)(v8 + 1088) = MEMORY[0xFFFFF78000000320];
  }
  v22 = 308LL * (unsigned int)v7[11];
  v7[12] = v5;
  v23 = v7[v22 + 277];
  if ( v23 != 5 && v23 != 15 )
    v7[11] = v5;
  v7[10] = ((_BYTE)v5 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 536LL), v18, v20);
  --*(_DWORD *)(*(_QWORD *)(v1 + 224) + 792LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
