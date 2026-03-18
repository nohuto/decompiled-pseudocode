/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C01100EC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C003E440 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
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
          v15 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            goto LABEL_13;
          if ( Type != 18 )
          {
            LODWORD(v15) = -1073741811;
            v21 = WdLogNewEntry5_WdError(v14, v13);
            *(_QWORD *)(v21 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v21);
            return (unsigned int)v15;
          }
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)Size, 0x74727044u);
          Data = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v15) = -1073741670;
            v22 = WdLogNewEntry5_WdLowResource(v17);
            *(_QWORD *)(v22 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v22);
            return (unsigned int)v15;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v18 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, Size, Data, (PULONG)&Size, &Type);
          v15 = v18;
          if ( v18 < 0 )
          {
LABEL_13:
            v23 = WdLogNewEntry5_WdError(v14, v13);
            *(_QWORD *)(v23 + 24) = v15;
            WdLogEvent5_WdError(v23);
            if ( (int)v15 < 0 )
            {
              if ( Data )
                ExFreePoolWithTag(Data, 0);
              return (unsigned int)v15;
            }
          }
          v19 = Size;
          *v10 = Data;
          *v11 = v19;
          return (unsigned int)v15;
        }
      }
    }
  }
  return -1073741811LL;
}
