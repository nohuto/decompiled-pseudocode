/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C01FDC14
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C003D0B0 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
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
  __int64 v12; // rcx
  __int64 v13; // rbx
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rax
  int v19; // eax
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
        v13 = v11;
        if ( v11 != -1073741789 )
          goto LABEL_8;
        LODWORD(Size) = Size + 2;
        PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v13) = -1073741670;
          v16 = WdLogNewEntry5_WdLowResource(v15);
          *(_QWORD *)(v16 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v16);
          return (unsigned int)v13;
        }
        memset(PoolWithTag, 0, (unsigned int)Size);
        v17 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
        v13 = v17;
        if ( v17 < 0 )
        {
LABEL_8:
          v18 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v18 + 24) = v13;
          WdLogEvent5_WdError(v18);
          if ( (int)v13 < 0 )
          {
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            return (unsigned int)v13;
          }
        }
        v19 = Size;
        *a4 = v5;
        *v10 = v19;
        return (unsigned int)v13;
      }
    }
  }
  return 3221225485LL;
}
