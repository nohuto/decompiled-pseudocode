/*
 * XREFs of ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18005A2DC
 * Callers:
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x1800B0C10 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800B2F84 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800B337C (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B5F24 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B76E4 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800B6E00 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
        __int64 a1,
        struct _GUID *a2,
        int a3,
        struct _GUID *a4,
        int a5)
{
  int v6; // eax
  __int64 v7; // r10
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  struct _GUID *v10; // rax
  __int64 v11; // rcx
  struct _GUID v13; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  v7 = a1 + 24LL * a3;
  if ( *(int *)(v7 + 1416) <= 0 )
  {
LABEL_6:
    v6 = -1;
  }
  else
  {
    while ( 1 )
    {
      v8 = (_QWORD *)(*(_QWORD *)(v7 + 1400) + 16LL * v6);
      v9 = *v8 - *(_QWORD *)&a4->Data1;
      if ( *v8 == *(_QWORD *)&a4->Data1 )
        v9 = v8[1] - *(_QWORD *)a4->Data4;
      if ( !v9 )
        break;
      if ( ++v6 >= *(_DWORD *)(v7 + 1416) )
        goto LABEL_6;
    }
  }
  v13 = *a4;
  if ( v6 == -1 )
    v10 = &v13;
  else
    v10 = CAudioSignalProcessingModeMap::Lookup((CAudioSignalProcessingModeMap *)(v7 + 1400), &v14, &v13);
  *a2 = *v10;
  if ( !a5 )
  {
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v11 )
      *a2 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  return a2;
}
