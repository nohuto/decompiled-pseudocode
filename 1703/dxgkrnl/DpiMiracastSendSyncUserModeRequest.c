/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x1C01C8288
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C003E440 (DpiMiracastInterfaceChange.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0001230 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0174928 (DxgkIsAdapterCoreSyncAcquired.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rsi
  struct _DEVICE_OBJECT *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  PIRP v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v38; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    v34 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v16) = -1073741790;
    *(_QWORD *)(v34 + 24) = -1073741790LL;
    WdLogEvent5_WdError(v34);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v11 = *(_QWORD *)(a1 + 432);
    if ( v11
      && ((v12 = *(_QWORD *)(v11 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)))
       || DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v12 + 3704), 1LL)) )
    {
      v15 = WdLogNewEntry5_WdError(v14, v13);
      LODWORD(v16) = -1073741790;
      *(_QWORD *)(v15 + 24) = -1073741790LL;
      WdLogEvent5_WdError(v15);
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v17 = *(struct _FILE_OBJECT **)(a1 + 176);
      v18 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v17 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v17 )
      {
        v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = a1;
        WdLogEvent5_WdWarning(v23);
        return 3221226166LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_pdqqq(v20, &EventEnterMiracastSendUserModeRequest, v21, *(_QWORD *)(a1 + 96), 1, 0, a6, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v25 = IoBuildDeviceIoControlRequest(a2, v18, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
      if ( v25 )
      {
        v25->Tail.Overlay.CurrentStackLocation[-1].FileObject = v17;
        v25->IoStatus.Status = -1073741637;
        LODWORD(v16) = IofCallDriver(v18, v25);
        if ( (_DWORD)v16 == 259 )
        {
          v28 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v16 = v28;
          if ( v28 )
          {
            v31 = WdLogNewEntry5_WdError(v30, v29);
            *(_QWORD *)(v31 + 24) = v16;
            WdLogEvent5_WdError(v31);
          }
          else
          {
            LODWORD(v16) = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        LODWORD(v16) = -1073741801;
        v27 = WdLogNewEntry5_WdLowResource(v26);
        *(_QWORD *)(v27 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v27);
      }
      ObfDereferenceObject(v17);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v38) = v16;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = 0;
        LODWORD(OutputBuffer) = 1;
        Template_pdqqq(
          v32,
          &EventLeaveMiracastSendUserModeRequest,
          v33,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v38);
      }
    }
  }
  return (unsigned int)v16;
}
