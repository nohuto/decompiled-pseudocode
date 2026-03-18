/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C0011954
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001188C (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 *PoolWithTag; // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // dx
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v7 = v4;
  if ( v4 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    LODWORD(v7) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v7 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v11 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v10, Length, &Length);
        v7 = v11;
        if ( v11 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v13, v12);
          *(_QWORD *)(v20 + 24) = v7;
          WdLogEvent5_WdError(v20);
        }
        else
        {
          v14 = *v10 + 2;
          a3[1] = v14;
          *a3 = *v10;
          v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x74727044u);
          *((_QWORD *)a3 + 1) = v15;
          if ( v15 )
          {
            memset(v15, 0, a3[1]);
            memmove(*((void **)a3 + 1), v10 + 2, *a3);
          }
          else
          {
            LODWORD(v7) = -1073741801;
            v21 = WdLogNewEntry5_WdLowResource(v16);
            *(_QWORD *)(v21 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v21);
          }
        }
        ExFreePoolWithTag(v10, 0x74727044u);
      }
      else
      {
        LODWORD(v7) = -1073741801;
        v19 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v19 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v19);
      }
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v7;
}
