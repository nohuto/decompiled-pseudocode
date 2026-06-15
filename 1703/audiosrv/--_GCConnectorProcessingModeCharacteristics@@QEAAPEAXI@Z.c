/*
 * XREFs of ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCE4
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180044CC0 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     ??1?$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ @ 0x18007D294 (--1-$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800BB67C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18007D334 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCB8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BEAA0 (-RemoveAll@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@.c)
 */

CConnectorProcessingModeCharacteristics *__fastcall CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(
        CConnectorProcessingModeCharacteristics *this)
{
  int v1; // edi
  int i; // esi
  LPVOID **v4; // rax
  void **v5; // rax

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v4 = (LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                      (__int64)this + 16,
                      i);
    if ( *v4 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(*v4);
  }
  if ( *((int *)this + 10) > 0 )
  {
    do
    {
      v5 = (void **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                      (__int64)this + 32,
                      v1);
      operator delete(*v5, (const struct std::nothrow_t *)0x12);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 10) );
  }
  ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::RemoveAll((char *)this + 32);
  ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::RemoveAll((char *)this + 16);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
