/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C0039A14
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C003C41C (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int16 *PoolWithTag; // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  SIZE_T v15; // rdx
  PVOID v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v6 = v4;
  if ( v4 >= 0 )
  {
    LODWORD(v6) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v6 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v12 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v10, Length, &Length);
        v6 = v12;
        if ( v12 >= 0 )
        {
          v15 = (unsigned __int16)(*v10 + 2);
          a3[1] = v15;
          *a3 = *v10;
          v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x74727044u);
          *((_QWORD *)a3 + 1) = v16;
          if ( v16 )
          {
            memset(v16, 0, a3[1]);
            memmove(*((void **)a3 + 1), v10 + 2, *a3);
          }
          else
          {
            LODWORD(v6) = -1073741801;
            v18 = WdLogNewEntry5_WdLowResource(v17);
            *(_QWORD *)(v18 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v18);
          }
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v14 + 24) = v6;
          WdLogEvent5_WdError(v14);
        }
        ExFreePoolWithTag(v10, 0x74727044u);
      }
      else
      {
        LODWORD(v6) = -1073741801;
        v11 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v11 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v11);
      }
    }
    ZwClose(DeviceRegKey);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
