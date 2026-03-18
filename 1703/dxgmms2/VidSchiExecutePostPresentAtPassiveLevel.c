/*
 * XREFs of VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0025F40
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000E814 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000FCE8 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiExecutePostPresentAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r13
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // r9d
  int v18; // eax
  unsigned int v19; // esi
  int v20; // edi
  __int64 v21; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v23; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h]

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v24 = *(_DWORD *)(a1 + 44);
  v6 = *(_QWORD *)(v2 + 8 * v4 + 2992);
  v7 = *(_QWORD *)(v6 + 8LL * v24 + 24);
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[50])(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 2280LL), a1);
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1880), &LockHandle);
  v14 = *(_DWORD *)(v7 + 44);
  v23 = 0;
  while ( v14 != (((unsigned __int8)*(_DWORD *)(a1 + 48) + 1) & 0x3F) )
  {
    v15 = 1224LL * v14;
    v14 = ((_BYTE)v14 + 1) & 0x3F;
    *(_DWORD *)(v15 + v7 + 1100) = 11;
  }
  v16 = *(_DWORD *)(a1 + 48);
  v17 = *(_DWORD *)(v7 + 44);
  v18 = ((_BYTE)v16 + 1) & 0x3F;
  *(_DWORD *)(v7 + 44) = v18;
  if ( *(_DWORD *)(v7 + 48) == v16 )
    *(_DWORD *)(v7 + 48) = v18;
  v19 = v24;
  v20 = VidSchiCompleteFlipEntry(v2, v4, v24, v17, v16, 0, 0LL);
  if ( *(_DWORD *)(v6 + 2300) && *(_BYTE *)(v6 + 46932) )
    VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v2, &v23, v4, v19);
  if ( v5 )
  {
    VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4LL))
                    + 8 * v4
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v4 + 5544) + 8LL), -v20);
    **(_DWORD **)(v2 + 8 * v4 + 5544) += v20;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), -v20);
    *(_DWORD *)v21 += v20;
  }
  if ( v23 )
    VidSchiCompletePendingFlip(v2, v4, 9);
  --*(_DWORD *)(*(_QWORD *)(v2 + 216) + 820LL);
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v5 + 112));
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v2 + 1824));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
