/*
 * XREFs of ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180041B34
 * Callers:
 *     _lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator() @ 0x180039704 (_lambda_82fd590d05af8f6990bd8d28cab4a19a_--operator().c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180041FC8 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800BCAE4 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BE6F8 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800BE5F0 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
        __int64 a1,
        struct _GUID *a2,
        int a3,
        struct _GUID *a4,
        int a5)
{
  CAudioSignalProcessingModeMap *v6; // r10
  int v7; // eax
  struct _GUID *v8; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  struct _GUID v13; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-28h] BYREF

  v6 = (CAudioSignalProcessingModeMap *)(a1 + 24 * (a3 + 58LL));
  v7 = 0;
  if ( *((int *)v6 + 4) > 0 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)(*(_QWORD *)v6 + 16LL * v7);
      v12 = *v11 - *(_QWORD *)&a4->Data1;
      if ( *v11 == *(_QWORD *)&a4->Data1 )
        v12 = v11[1] - *(_QWORD *)a4->Data4;
      if ( !v12 )
        break;
      if ( ++v7 >= *((_DWORD *)v6 + 4) )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v7 = -1;
  }
  v13 = *a4;
  if ( v7 == -1 )
    v8 = &v13;
  else
    v8 = CAudioSignalProcessingModeMap::Lookup(v6, &v14, &v13);
  *a2 = *v8;
  if ( !a5 )
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v10 )
      *a2 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  return a2;
}
