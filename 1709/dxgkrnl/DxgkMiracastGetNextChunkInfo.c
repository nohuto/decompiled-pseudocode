/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x1C0030B50
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1C01800C0 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C002EBAC (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C002EE58 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  union _LARGE_INTEGER *Timeout; // rdx
  int v20; // ecx
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2;
  KeAcquireInStackQueuedSpinLock(&qword_1C0060BD8, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v13 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v14 = -1073741811;
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_20;
  }
  v16 = *(_QWORD *)(DeviceContextFromLuid + 432);
  if ( !v16 || *(_QWORD *)(DeviceContextFromLuid + 496) )
    goto LABEL_4;
  if ( (unsigned int)(*(_DWORD *)(DeviceContextFromLuid + 408) - 1) > 1 )
  {
LABEL_8:
    v17 = -1073741653LL;
    goto LABEL_5;
  }
  v14 = ProcessMiracastAPIChunk(
          (struct _MIRACAST_DEVICE_CONTEXT *)DeviceContextFromLuid,
          *(struct _FDO_CONTEXT **)(v16 + 64),
          a4,
          a5,
          a6);
  if ( v14 == -1073741762 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(v13 + 496) = &Event;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    Timeout = 0LL;
    if ( (_DWORD)v6 != -1 )
    {
      Timeout = (union _LARGE_INTEGER *)&v22;
      v22 = -10000 * v6;
    }
    v20 = *(_DWORD *)(a3 + 280);
    *(_QWORD *)a3 = &Event;
    v14 = KeWaitForMultipleObjects(v20 + 1, (PVOID *)a3, WaitAny, Executive, 0, 0, Timeout, (PKWAIT_BLOCK)(a3 + 40));
    KeAcquireInStackQueuedSpinLock(&qword_1C0060BD8, &LockHandle);
    v16 = *(_QWORD *)(v13 + 432);
    if ( v16 )
    {
      v16 = *(_QWORD *)(v16 + 64);
      *(_QWORD *)(v13 + 496) = 0LL;
      if ( *(_DWORD *)(v13 + 408) != 2 )
        goto LABEL_8;
      if ( v14 )
      {
        if ( v14 >= 1 && v14 < *(_DWORD *)(a3 + 280) + 1 )
          --v14;
        *a4 = 0;
      }
      else
      {
        v14 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v13, (struct _FDO_CONTEXT *)v16, a4, a5, a6);
      }
      goto LABEL_20;
    }
LABEL_4:
    v17 = -1073741811LL;
LABEL_5:
    v14 = v17;
    v18 = WdLogNewEntry5_WdWarning(v11, v16, v12);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdWarning(v18);
  }
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v13 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v13, v13);
  return (unsigned int)v14;
}
