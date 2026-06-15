/*
 * XREFs of ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B2C38
 * Callers:
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180080130 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 */

char __fastcall CEndpointCharacteristics::ConnectorProbablySupportsFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 v6; // r14
  __int64 *v7; // r14
  int i; // ebp
  int **v9; // rax
  int *v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rsi

  v6 = 192LL;
  if ( a2 != eKeywordDetectorConnector )
    v6 = 184LL;
  v7 = (__int64 *)((char *)this + v6);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(*v7 + 8) )
      return 0;
    v9 = (int **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                   *v7,
                   i);
    v10 = *v9;
    v11 = *(_QWORD *)*v9 - *(_QWORD *)&a3->Data1;
    if ( !v11 )
      v11 = *((_QWORD *)v10 + 1) - *(_QWORD *)a3->Data4;
    if ( !v11 )
    {
      v12 = 0;
      if ( v10[10] > 0 )
        break;
    }
LABEL_14:
    ;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 < 0 || v12 >= v10[10] )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    if ( (unsigned int)CompareWaveFormat(a4, *(const struct tWAVEFORMATEX **)(v13 + *((_QWORD *)v10 + 4))) )
      return 1;
    ++v12;
    v13 += 8LL;
    if ( v12 >= v10[10] )
      goto LABEL_14;
  }
}
