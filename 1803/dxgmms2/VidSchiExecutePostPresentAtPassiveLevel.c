/*
 * XREFs of VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002AE60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C000F294 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C001161C (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiExecutePostPresentAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  _QWORD *v14; // rax
  int v15; // ecx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edi
  __int64 v22; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v24; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h]

  v1 = *(unsigned int *)(a1 + 40);
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(unsigned int *)(a1 + 44);
  v7 = *(_QWORD *)(a1 + 32);
  v25 = *(_QWORD *)(v3 + 8 * v1 + 3032);
  v8 = *(_QWORD *)(v25 + 8 * v6 + 24);
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[61])(*(_QWORD *)(v5 + 2456), a1);
  v13 = v9;
  if ( v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v14[3] = 281LL;
    v14[4] = 15LL;
    v14[5] = v13;
    v14[6] = v2;
    v14[7] = *(_QWORD *)(v3 + 16);
    WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1904), &LockHandle);
  v15 = *(_DWORD *)(a1 + 48);
  v16 = *(_DWORD *)(v8 + 44);
  v24 = 0;
  if ( v16 != (((_BYTE)v15 + 1) & 0x3F) )
  {
    do
    {
      v17 = 1280LL * v16;
      v18 = *(_DWORD *)(v17 + v8 + 1108);
      if ( v18 > 0xC || (v19 = 4673, !_bittest(&v19, v18)) )
        *(_DWORD *)(v17 + v8 + 1108) = 11;
      v15 = *(_DWORD *)(a1 + 48);
      v16 = ((_BYTE)v16 + 1) & 0x3F;
    }
    while ( v16 != (((_BYTE)v15 + 1) & 0x3F) );
    v16 = *(_DWORD *)(v8 + 44);
  }
  v20 = ((_BYTE)v15 + 1) & 0x3F;
  *(_DWORD *)(v8 + 44) = v20;
  if ( *(_DWORD *)(v8 + 48) == v15 )
    *(_DWORD *)(v8 + 48) = v20;
  v21 = VidSchiCompleteFlipEntry(v3, v1, v6, v16, v15, 0, 0LL);
  if ( *(_DWORD *)(v25 + 2300) && *(_BYTE *)(v25 + 61284) )
    VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v3, &v24, v1, v6);
  if ( v7 )
  {
    VidSchiCheckPendingDeviceCommand((_QWORD *)v7);
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v1
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 8 * v1 + 6248) + 8LL), -v21);
    **(_DWORD **)(v3 + 8 * v1 + 6248) += v21;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), -v21);
    *(_DWORD *)v22 += v21;
  }
  if ( v24 )
    VidSchiCompletePendingFlipOnPlane(v3, v1, 9, v6);
  --*(_DWORD *)(*(_QWORD *)(v3 + 224) + 804LL);
  VidSchiSignalRegisteredEvent(v3, (struct _KEVENT **)(v7 + 136));
  VidSchiSignalRegisteredEvent(v3, (struct _KEVENT **)(v3 + 1848));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
