/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x1C0040048
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1C017C700 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C003E02C (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C003E2D8 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DxgkMiracastGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a5,
        unsigned int *a6)
{
  __int64 v6; // rbp
  __int64 DeviceContextFromLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  union _LARGE_INTEGER *Timeout; // rdx
  int v22; // ecx
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2;
  KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v15 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v16 = -1073741811;
    v17 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_20;
  }
  v18 = *(_QWORD *)(DeviceContextFromLuid + 432);
  if ( !v18 || *(_QWORD *)(DeviceContextFromLuid + 496) )
    goto LABEL_4;
  if ( (unsigned int)(*(_DWORD *)(DeviceContextFromLuid + 408) - 1) > 1 )
  {
LABEL_8:
    v19 = -1073741653LL;
    goto LABEL_5;
  }
  v16 = ProcessMiracastAPIChunk(
          (struct _MIRACAST_DEVICE_CONTEXT *)DeviceContextFromLuid,
          *(struct _FDO_CONTEXT **)(v18 + 64),
          a4,
          a5,
          a6);
  if ( v16 == -1073741762 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(v15 + 496) = &Event;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    Timeout = 0LL;
    if ( (_DWORD)v6 != -1 )
    {
      Timeout = (union _LARGE_INTEGER *)&v24;
      v24 = -10000 * v6;
    }
    v22 = *(_DWORD *)(a3 + 280);
    *(_QWORD *)a3 = &Event;
    v16 = KeWaitForMultipleObjects(v22 + 1, (PVOID *)a3, WaitAny, Executive, 0, 0, Timeout, (PKWAIT_BLOCK)(a3 + 40));
    KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
    v18 = *(_QWORD *)(v15 + 432);
    if ( v18 )
    {
      v18 = *(_QWORD *)(v18 + 64);
      *(_QWORD *)(v15 + 496) = 0LL;
      if ( *(_DWORD *)(v15 + 408) != 2 )
        goto LABEL_8;
      if ( v16 )
      {
        if ( v16 >= 1 && v16 < *(_DWORD *)(a3 + 280) + 1 )
          --v16;
        *a4 = 0;
      }
      else
      {
        v16 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v15, (struct _FDO_CONTEXT *)v18, a4, a5, a6);
      }
      goto LABEL_20;
    }
LABEL_4:
    v19 = -1073741811LL;
LABEL_5:
    v16 = v19;
    v20 = WdLogNewEntry5_WdWarning(v12, v18, v13, v14);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdWarning(v20);
  }
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v15 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v15, v15);
  return (unsigned int)v16;
}
