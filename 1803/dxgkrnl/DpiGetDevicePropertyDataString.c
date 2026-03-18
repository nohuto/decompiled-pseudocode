/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C01FDA64
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C003D0B0 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        int a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _DWORD *a6)
{
  void *Data; // rdi
  _QWORD *v10; // rsi
  _DWORD *v11; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  int v21; // eax
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(Size) = a3;
  Data = 0LL;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&Size, &Type);
          v14 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            goto LABEL_11;
          if ( Type != 18 )
          {
            LODWORD(v14) = -1073741811;
            v15 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v15 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v15);
            return (unsigned int)v14;
          }
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)Size, 0x74727044u);
          Data = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v14) = -1073741670;
            v18 = WdLogNewEntry5_WdLowResource(v17);
            *(_QWORD *)(v18 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v18);
            return (unsigned int)v14;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v19 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, Size, Data, (PULONG)&Size, &Type);
          v14 = v19;
          if ( v19 < 0 )
          {
LABEL_11:
            v20 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v20 + 24) = v14;
            WdLogEvent5_WdError(v20);
            if ( (int)v14 < 0 )
            {
              if ( Data )
                ExFreePoolWithTag(Data, 0);
              return (unsigned int)v14;
            }
          }
          v21 = Size;
          *v10 = Data;
          *v11 = v21;
          return (unsigned int)v14;
        }
      }
    }
  }
  return -1073741811LL;
}
