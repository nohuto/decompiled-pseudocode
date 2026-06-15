/*
 * XREFs of ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800416A4
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180041FC8 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSignalProcessingModeArray::AddMultiple(
        CAudioSignalProcessingModeArray *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  unsigned int v3; // esi
  int v7; // edi
  bool v8; // sf
  int v9; // edi
  __int64 v10; // rax
  struct _GUID *v11; // rax

  v3 = 0;
  if ( !a2 )
    return 0LL;
  while ( 1 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( v7 != *((_DWORD *)this + 3) )
      goto LABEL_8;
    if ( *((_DWORD *)this + 3) )
      break;
    v9 = 1;
LABEL_6:
    v10 = _o__recalloc(*(_QWORD *)this, v9, 16LL);
    if ( !v10 )
      return 2147942414LL;
    *((_DWORD *)this + 3) = v9;
    *(_QWORD *)this = v10;
LABEL_8:
    v11 = (struct _GUID *)(*(_QWORD *)this + 16LL * *((int *)this + 2));
    if ( v11 )
      *v11 = *a3;
    ++*((_DWORD *)this + 2);
    ++v3;
    ++a3;
    if ( v3 >= a2 )
      return 0LL;
  }
  v8 = (v7 & 0x40000000) != 0;
  v9 = 2 * v7;
  if ( !v8 && (unsigned int)v9 <= 0x7FFFFFF )
    goto LABEL_6;
  return 2147942414LL;
}
