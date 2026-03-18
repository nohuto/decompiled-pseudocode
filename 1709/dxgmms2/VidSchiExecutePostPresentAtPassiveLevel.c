/*
 * XREFs of VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0028030
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0012A30 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiExecutePostPresentAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r12
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // r9d
  int v20; // eax
  unsigned int v21; // esi
  int v22; // edi
  __int64 v23; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h]

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v26 = *(_DWORD *)(a1 + 44);
  v6 = *(_QWORD *)(v2 + 8 * v4 + 3008);
  v7 = *(_QWORD *)(v6 + 8LL * v26 + 24);
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[50])(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 2304LL), a1);
  v12 = v8;
  if ( v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v13[3] = 281LL;
    v13[4] = 15LL;
    v13[5] = v12;
    v13[6] = v1;
    v13[7] = *(_QWORD *)(v2 + 16);
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1888), &LockHandle);
  v14 = *(_DWORD *)(v7 + 44);
  v25 = 0;
  while ( v14 != (((unsigned __int8)*(_DWORD *)(a1 + 48) + 1) & 0x3F) )
  {
    v15 = 1232LL * v14;
    v16 = *(_DWORD *)(v15 + v7 + 1108);
    if ( v16 > 0xC || (v17 = 4673, !_bittest(&v17, v16)) )
      *(_DWORD *)(v15 + v7 + 1108) = 11;
    v14 = ((_BYTE)v14 + 1) & 0x3F;
  }
  v18 = *(_DWORD *)(a1 + 48);
  v19 = *(_DWORD *)(v7 + 44);
  v20 = ((_BYTE)v18 + 1) & 0x3F;
  *(_DWORD *)(v7 + 44) = v20;
  if ( *(_DWORD *)(v7 + 48) == v18 )
    *(_DWORD *)(v7 + 48) = v20;
  v21 = v26;
  v22 = VidSchiCompleteFlipEntry(v2, v4, v26, v19, v18, 0, 0LL);
  if ( *(_DWORD *)(v6 + 2940) && *(_BYTE *)(v6 + 56804) )
    VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v2, &v25, v4, v21);
  if ( v5 )
  {
    VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4LL))
                    + 8 * v4
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v4 + 6056) + 8LL), -v22);
    **(_DWORD **)(v2 + 8 * v4 + 6056) += v22;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), -v22);
    *(_DWORD *)v23 += v22;
  }
  if ( v25 )
    VidSchiCompletePendingFlip(v2, v4, 9);
  --*(_DWORD *)(*(_QWORD *)(v2 + 224) + 796LL);
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v5 + 112));
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v2 + 1832));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
