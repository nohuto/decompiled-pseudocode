/*
 * XREFs of ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18007B38C
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18007B2C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BBEE0 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // edi
  int v5; // edi
  bool v6; // sf
  __int64 v7; // rax
  _QWORD *v8; // r8

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v6 = (v2 & 0x40000000) != 0;
      v5 = 2 * v2;
      if ( v6 || (unsigned int)v5 > 0xFFFFFFF )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    v7 = _o__recalloc(*(_QWORD *)a1, v5, 8LL);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 12) = v5;
      *(_QWORD *)a1 = v7;
      goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(int *)(a1 + 8));
  if ( v8 )
    *v8 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
