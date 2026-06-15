/*
 * XREFs of ?RemoveAll@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BEAA0
 * Callers:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCE4 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BE6F8 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
