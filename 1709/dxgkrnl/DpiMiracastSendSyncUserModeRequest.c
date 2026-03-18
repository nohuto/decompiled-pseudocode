/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x1C01E23C8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C002EFC0 (DpiMiracastInterfaceChange.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000F1C8 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C017842C (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rsi
  struct _DEVICE_OBJECT *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  PIRP v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v34; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdError(v9);
    LODWORD(v14) = -1073741790;
    *(_QWORD *)(v30 + 24) = -1073741790LL;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v10 = *(_QWORD *)(a1 + 432);
    if ( v10
      && ((v11 = *(_QWORD *)(v10 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)))
       || DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v11 + 3728), 1)) )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      LODWORD(v14) = -1073741790;
      *(_QWORD *)(v13 + 24) = -1073741790LL;
      WdLogEvent5_WdError(v13);
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v15 = *(struct _FILE_OBJECT **)(a1 + 176);
      v16 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v15 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v15 )
      {
        v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v20 + 24) = a1;
        WdLogEvent5_WdWarning(v20);
        return 3221226166LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
        McTemplateK0pqqqq(v18, &EventEnterMiracastSendUserModeRequest, v19, *(_QWORD *)(a1 + 96), 1, 0, a6, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v22 = IoBuildDeviceIoControlRequest(a2, v16, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
      if ( v22 )
      {
        v22->Tail.Overlay.CurrentStackLocation[-1].FileObject = v15;
        v22->IoStatus.Status = -1073741637;
        LODWORD(v14) = IofCallDriver(v16, v22);
        if ( (_DWORD)v14 == 259 )
        {
          v25 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v14 = v25;
          if ( v25 )
          {
            v27 = WdLogNewEntry5_WdError(v26);
            *(_QWORD *)(v27 + 24) = v14;
            WdLogEvent5_WdError(v27);
          }
          else
          {
            LODWORD(v14) = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        LODWORD(v14) = -1073741801;
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v24);
      }
      ObfDereferenceObject(v15);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      {
        LODWORD(v34) = v14;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = 0;
        LODWORD(OutputBuffer) = 1;
        McTemplateK0pqqqq(
          v28,
          &EventLeaveMiracastSendUserModeRequest,
          v29,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v34);
      }
    }
  }
  return (unsigned int)v14;
}
