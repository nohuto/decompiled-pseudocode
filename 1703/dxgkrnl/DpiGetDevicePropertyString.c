/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C0110238
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C003E440 (DpiMiracastInterfaceChange.c)
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        POOL_TYPE PoolType,
        _QWORD *a4,
        _DWORD *a5)
{
  void *v5; // rdi
  _DWORD *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  PVOID PoolWithTag; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v14 = v11;
        if ( v11 != -1073741789 )
          goto LABEL_10;
        LODWORD(Size) = Size + 2;
        PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v14) = -1073741670;
          v20 = WdLogNewEntry5_WdLowResource(v16);
          *(_QWORD *)(v20 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v20);
          return (unsigned int)v14;
        }
        memset(PoolWithTag, 0, (unsigned int)Size);
        v17 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
        v14 = v17;
        if ( v17 < 0 )
        {
LABEL_10:
          v21 = WdLogNewEntry5_WdError(v13, v12);
          *(_QWORD *)(v21 + 24) = v14;
          WdLogEvent5_WdError(v21);
          if ( (int)v14 < 0 )
          {
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            return (unsigned int)v14;
          }
        }
        v18 = Size;
        *a4 = v5;
        *v10 = v18;
        return (unsigned int)v14;
      }
    }
  }
  return 3221225485LL;
}
