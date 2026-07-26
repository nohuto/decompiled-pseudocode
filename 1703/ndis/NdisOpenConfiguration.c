/*
 * XREFs of NdisOpenConfiguration @ 0x1C00AF5C0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00E3F44 (ndisNDKHandleWmiChangeRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  HANDLE *PoolWithTag; // rax
  HANDLE *v7; // rbx
  PDEVICE_OBJECT *v8; // rcx

  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0xAu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)WrapperConfigurationContext);
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) == 0 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v8 = (PDEVICE_OBJECT *)*((_QWORD *)WrapperConfigurationContext + 1);
      PoolWithTag[1] = v8;
      if ( v8 )
        *Status = IoOpenDeviceRegistryKey(v8[482], 2u, 0xC2000000, PoolWithTag + 4);
    }
    else if ( (unsigned __int8)byte_1C009260F >= 2u )
    {
      WPP_SF_q(0xBu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0xCu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)WrapperConfigurationContext);
}
