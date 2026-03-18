/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0002928 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0002E00 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001236C (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00132FC (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C00229B0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0025B84 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0027B6C (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r15
  _DWORD *v7; // r14
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v16; // rdx
  int v17; // ebx
  struct _VIDSCH_GLOBAL *v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-ACh]
  _QWORD v24[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[268]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v27[48]; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v28[64]; // [rsp+918h] [rbp+810h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 16);
  v23 = v4;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)(v1 + 8 * v3 + 2992);
  v7 = *(_DWORD **)(v6 + 8 * v4 + 24);
  v8 = (__int64)&v7[306 * v5 + 14];
  memset(v26, 0, 0x858uLL);
  memset(v28, 0, sizeof(v28));
  v24[0] = 0LL;
  v24[1] = 0LL;
  memset(v27, 0, 0x28uLL);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v1,
    v8,
    v3,
    (unsigned int)v26,
    *(_BYTE *)(a1 + 20),
    (__int64)v28,
    (__int64)v24,
    (__int64)v27);
  HIDWORD(v26[1]) |= 8u;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[49])(
         *(_QWORD *)(*(_QWORD *)(v26[0] + 16LL) + 2280LL),
         &v26[1]);
  v13 = v9;
  if ( v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v14[6] = v26;
    v14[3] = 281LL;
    v14[4] = 11LL;
    v14[5] = v13;
    v14[7] = *(_QWORD *)(v1 + 16);
    WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1880), &LockHandle);
  v15 = *(unsigned int *)(v8 + 1112);
  if ( (v15 & 0x20) != 0 )
  {
    v16 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1128);
    if ( v16 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v8 + 1120),
        v16,
        1,
        (*(_DWORD *)(v8 + 1112) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v8 + 1144),
        *(_QWORD *)(v8 + 1136),
        0LL);
  }
  VidSchiComputeFlipEntryStatusAfterFlip(v15, (__int64)v26, &v22);
  v17 = v22;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v1, v8, (__int64)v26, v22);
  *(_DWORD *)(v8 + 1044) = v17;
  if ( v17 == 11 )
  {
    *(_QWORD *)(v8 + 1088) = *(_QWORD *)(v6 + 18808);
    *(_QWORD *)(v8 + 1104) = *(_QWORD *)(v6 + 18800);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v18, v6, v8);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v1, (_WORD *)v6, v8);
    VidSchiCompleteFlipEntry(v1, v3, v23, v5, v5, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 1112) & 0x10) != 0 )
      v19 = (unsigned __int8)**(_DWORD **)(v8 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v8 + 1152) + 1LL);
    else
      v19 = (1 << *(_DWORD *)(v1 + 128)) - 1;
    *(_DWORD *)(v6 + 2316) |= v19;
    *(_QWORD *)(v8 + 1080) = MEMORY[0xFFFFF78000000320];
  }
  v20 = 306LL * (unsigned int)v7[11];
  v7[12] = v5;
  v21 = v7[v20 + 275];
  if ( v21 != 5 && v21 != 15 )
    v7[11] = v5;
  v7[10] = ((_BYTE)v5 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 440LL));
  --*(_DWORD *)(*(_QWORD *)(v1 + 216) + 816LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
