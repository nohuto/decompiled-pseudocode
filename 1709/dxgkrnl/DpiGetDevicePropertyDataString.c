/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C0116624
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C002EFC0 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C0115904 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
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
  PVOID PoolWithTag; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
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
            goto LABEL_13;
          if ( Type != 18 )
          {
            LODWORD(v14) = -1073741811;
            v20 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v20 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v20);
            return (unsigned int)v14;
          }
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)Size, 0x74727044u);
          Data = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v14) = -1073741670;
            v21 = WdLogNewEntry5_WdLowResource(v16);
            *(_QWORD *)(v21 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v21);
            return (unsigned int)v14;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v17 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, Size, Data, (PULONG)&Size, &Type);
          v14 = v17;
          if ( v17 < 0 )
          {
LABEL_13:
            v22 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v22 + 24) = v14;
            WdLogEvent5_WdError(v22);
            if ( (int)v14 < 0 )
            {
              if ( Data )
                ExFreePoolWithTag(Data, 0);
              return (unsigned int)v14;
            }
          }
          v18 = Size;
          *v10 = Data;
          *v11 = v18;
          return (unsigned int)v14;
        }
      }
    }
  }
  return -1073741811LL;
}
