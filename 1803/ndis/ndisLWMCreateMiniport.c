/*
 * XREFs of ndisLWMCreateMiniport @ 0x1C00EC7B8
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C00EB720 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C00168BC (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF__guid_ @ 0x1C0041E08 (WPP_SF__guid_.c)
 *     WPP_SF_q_guid_ @ 0x1C00624FC (WPP_SF_q_guid_.c)
 *     WPP_SF_q_guid_d @ 0x1C0062540 (WPP_SF_q_guid_d.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00B72D0 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00DDA04 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00EC984 (ndisLWMOpenConfigurationKey.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(_NDIS_M_DRIVER_BLOCK *a1, _GUID *a2, _QWORD *a3)
{
  _GUID v6; // xmm1
  int InterfaceAddDeviceParameters; // eax
  unsigned int v8; // edi
  unsigned __int16 v9; // cx
  int InterfaceAddDeviceParametersForLWMiniport; // eax
  int v11; // eax
  unsigned __int16 v12; // cx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-59h]
  HANDLE Handle[2]; // [rsp+30h] [rbp-49h] BYREF
  NDIS_ADDDEVICE_PARAMETERS v19; // [rsp+40h] [rbp-39h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q_guid_((__int64)a1, (__int64)a2, (__int64)a1, (__int64)a2);
  *a3 = 0LL;
  v6 = *a2;
  v19.IsPhysicalMediumAvailable = 0;
  memset(&v19.PhysicalMedium, 0, 29);
  v19.InterfaceGuid = v6;
  v19.Characteristics = 0;
  v19.MiniportAdapterContext = 0LL;
  *(_WORD *)&v19.IsHardwareLoopbackSupported = 0;
  *(_OWORD *)&v19.MiniBlock = 0LL;
  v19.NetLuid.Value = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(&v19.InterfaceGuid.Data1);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_22;
    v9 = 135;
    goto LABEL_6;
  }
  InterfaceAddDeviceParametersForLWMiniport = ndisIfReadInterfaceAddDeviceParametersForLWMiniport((__int64)&v19);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParametersForLWMiniport);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    {
      v9 = 136;
LABEL_6:
      WPP_SF__guid_(v9, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a2);
      goto LABEL_22;
    }
    goto LABEL_22;
  }
  if ( v19.IsLightWeight )
  {
    v19.MiniBlock = a1;
    Handle[0] = 0LL;
    v11 = ndisLWMOpenConfigurationKey(a2, Handle);
    v8 = NdisConvertNtStatusToNdisStatus(v11);
    if ( v8 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
        goto LABEL_20;
      v12 = 138;
    }
    else
    {
      v13 = ndisAddDevice(0LL, 0LL, (__int64)a3);
      v8 = NdisConvertNtStatusToNdisStatus(v13);
      if ( !v8 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      {
LABEL_20:
        if ( Handle[0] )
          ZwClose(Handle[0]);
        goto LABEL_22;
      }
      v12 = 139;
    }
    WPP_SF__guid_(v12, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a2);
    goto LABEL_20;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    v9 = 137;
    goto LABEL_6;
  }
LABEL_22:
  NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&v19);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(v17) = v8;
    WPP_SF_q_guid_d(v15, v14, (__int64)a1, (__int64)a2, v17);
  }
  return v8;
}
