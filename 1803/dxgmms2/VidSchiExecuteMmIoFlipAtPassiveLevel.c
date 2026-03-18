/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E10 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0012384 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C001451C (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00226B0 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0027964 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002A924 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C002CDEC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
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
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v17; // rdx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-ACh]
  _QWORD v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v29[268]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v30[48]; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v31[80]; // [rsp+918h] [rbp+810h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 16);
  v26 = v4;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)(v1 + 8 * v3 + 3032);
  v7 = *(_DWORD **)(v6 + 8 * v4 + 24);
  v8 = (__int64)&v7[320 * v5 + 14];
  memset(v29, 0, 0x858uLL);
  memset(v31, 0, sizeof(v31));
  v27[0] = 0LL;
  v27[1] = 0LL;
  memset(v30, 0, 0x28uLL);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v1,
    1280 * v5 + (_DWORD)v7 + 56,
    v3,
    (unsigned int)v29,
    *(_BYTE *)(a1 + 20),
    (__int64)v31,
    (__int64)v27,
    (__int64)v30);
  HIDWORD(v29[1]) |= 8u;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[60])(
         *(_QWORD *)(*(_QWORD *)(v29[0] + 16LL) + 2456LL),
         &v29[1]);
  v13 = v9;
  if ( v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v14[6] = v29;
    v14[3] = 281LL;
    v14[4] = 11LL;
    v14[5] = v13;
    v14[7] = *(_QWORD *)(v1 + 16);
    WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1904), &LockHandle);
  if ( (*(_DWORD *)(v8 + 1120) & 0x10) != 0 )
    v15 = ((unsigned __int16)**(_DWORD **)(v8 + 1160) | (unsigned __int16)(**(_DWORD **)(v8 + 1160) >> 10)) & 0x3FF;
  else
    v15 = (1 << *(_DWORD *)(v1 + 132)) - 1;
  *(_DWORD *)(v6 + 2316) &= ~v15;
  v16 = *(unsigned int *)(v8 + 1120);
  if ( (v16 & 0x20) != 0 )
  {
    v17 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1136);
    if ( v17 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v8 + 1128),
        v17,
        1,
        (*(_DWORD *)(v8 + 1120) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v8 + 1152),
        *(_QWORD *)(v8 + 1144),
        0LL);
  }
  VidSchiComputeFlipEntryStatusAfterFlip(v16, (__int64)v29, &v25);
  v18 = v25;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v1, &v7[320 * v5 + 14], (__int64)v29, v25);
  *(_DWORD *)(v8 + 1052) = v18;
  if ( v18 == 11 )
  {
    *(_QWORD *)(v8 + 1096) = *(_QWORD *)(v6 + 28040);
    *(_QWORD *)(v8 + 1112) = *(_QWORD *)(v6 + 28032);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v20, v6, (__int64)&v7[320 * v5 + 14]);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v1, (_WORD *)v6, (__int64)&v7[320 * v5 + 14]);
    VidSchiCompleteFlipEntry(v1, v3, v26, v5, v5, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 1120) & 0x10) != 0 )
      v22 = ((unsigned __int16)**(_DWORD **)(v8 + 1160) | (unsigned __int16)(**(_DWORD **)(v8 + 1160) >> 10)) & 0x3FF;
    else
      v22 = (1 << *(_DWORD *)(v1 + 132)) - 1;
    *(_DWORD *)(v6 + 2312) |= v22;
    *(_QWORD *)(v8 + 1088) = MEMORY[0xFFFFF78000000320];
  }
  v23 = (unsigned int)v7[11];
  v7[12] = v5;
  v24 = v7[320 * v23 + 277];
  if ( v24 != 5 && v24 != 15 )
    v7[11] = v5;
  v7[10] = ((_BYTE)v5 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 552LL), v19, v21);
  --*(_DWORD *)(*(_QWORD *)(v1 + 224) + 800LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
