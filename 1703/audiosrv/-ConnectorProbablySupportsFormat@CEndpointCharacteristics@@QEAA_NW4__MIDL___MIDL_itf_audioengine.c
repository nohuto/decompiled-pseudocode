/*
 * XREFs of ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BC61C
 * Callers:
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098E48 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18004738C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 */

char __fastcall CEndpointCharacteristics::ConnectorProbablySupportsFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 v7; // r14
  int i; // ebp
  __int64 v9; // rcx
  int **v10; // rax
  int *v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rsi

  v7 = 184LL;
  if ( a2 == eKeywordDetectorConnector )
    v7 = 192LL;
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)((char *)this + v7);
    if ( i >= *(_DWORD *)(v9 + 8) )
      return 0;
    v10 = (int **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                    v9,
                    i);
    v11 = *v10;
    v12 = *(_QWORD *)*v10 - *(_QWORD *)&a3->Data1;
    if ( !v12 )
      v12 = *((_QWORD *)v11 + 1) - *(_QWORD *)a3->Data4;
    if ( !v12 )
    {
      v13 = 0;
      if ( v11[10] > 0 )
        break;
    }
LABEL_14:
    ;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 < 0 || v13 >= v11[10] )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    if ( (unsigned int)CompareWaveFormat(a4, *(const struct tWAVEFORMATEX **)(v14 + *((_QWORD *)v11 + 4))) )
      return 1;
    ++v13;
    v14 += 8LL;
    if ( v13 >= v11[10] )
      goto LABEL_14;
  }
}
