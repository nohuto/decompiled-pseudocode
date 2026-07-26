/*
 * XREFs of NdisOpenConfiguration @ 0x1C00B9D80
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F0BFC (ndisNDKHandleWmiChangeRequest.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00EC984 (ndisLWMOpenConfigurationKey.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  HANDLE *PoolWithTag; // rax
  HANDLE *v7; // rbx
  HANDLE *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  HANDLE v12; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_q(0xAu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)WrapperConfigurationContext);
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) == 0 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    v8 = PoolWithTag + 4;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v9 = *((_QWORD *)WrapperConfigurationContext + 1);
      PoolWithTag[1] = (HANDLE)v9;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 120) & 0x100) != 0 )
        {
          Handle = 0LL;
          v10 = ndisLWMOpenConfigurationKey(v9 + 4032, &Handle);
          v11 = NdisConvertNtStatusToNdisStatus(v10);
          *Status = v11;
          if ( v11 )
          {
            v12 = Handle;
          }
          else
          {
            v12 = 0LL;
            *v8 = Handle;
          }
          if ( v12 )
            ZwClose(v12);
        }
        else
        {
          *Status = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v9 + 3856), 2u, 0xC2000000, PoolWithTag + 4);
        }
      }
    }
    else if ( (unsigned __int8)byte_1C009960F >= 2u )
    {
      WPP_SF_q(0xBu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_q(0xCu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)WrapperConfigurationContext);
}
