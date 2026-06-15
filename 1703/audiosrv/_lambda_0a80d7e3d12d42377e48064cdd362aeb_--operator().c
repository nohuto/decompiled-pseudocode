/*
 * XREFs of _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800B9920 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_4d461d498790dddb1db29f8fdd447ecc__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_8adf4450fafdaef51724fc9dfbdde94a___ @ 0x1800B9C60 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_8adf4450fafdaef51724fc9dfbdde.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___ @ 0x1800B9E50 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264 (CEndpointCharacteristics--GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18007B2C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18007D334 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18009BC48 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BBEE0 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x1800BBF50 (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800BCAE4 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(__int64 a1, struct tWAVEFORMATEX *a2, bool *a3)
{
  CConnectorProcessingModeCharacteristics *v6; // rax
  int v7; // r14d
  const struct tWAVEFORMATEX ***v8; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  CEndpointCharacteristics *v10; // rcx
  int v11; // eax
  __int64 result; // rax
  int v13; // r9d
  CUnsupportedConnectorFormats *v14; // rcx
  struct PacketSizeConstraints *v15; // [rsp+20h] [rbp-60h]
  char v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  unsigned int v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v19[3]; // [rsp+64h] [rbp-1Ch] BYREF
  struct _GUID v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *(CConnectorProcessingModeCharacteristics **)a1;
  v7 = 0;
  if ( *(int *)(*(_QWORD *)a1 + 24LL) <= 0 )
  {
LABEL_6:
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(CEndpointCharacteristics **)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 56);
    v16 = *(_BYTE *)(a1 + 48);
    v15 = *(struct PacketSizeConstraints **)(a1 + 40);
    v20 = *(struct _GUID *)(a1 + 20);
    v11 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
            v10,
            v9,
            &v20,
            a2,
            v15,
            v16,
            v17,
            v19,
            &v18,
            &v23,
            &v22,
            &v21);
    if ( v11 < 0 )
    {
      if ( AEError::DeviceInUse((AEError *)(unsigned int)v11) )
      {
        CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
          *(CConnectorProcessingModeCharacteristics **)a1,
          a2);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 180LL) = 1;
      }
      else
      {
        v14 = *(CUnsupportedConnectorFormats **)(a1 + 64);
        if ( v14 )
        {
          v20 = *(struct _GUID *)(a1 + 20);
          CUnsupportedConnectorFormats::AddUnsupportedFormat(v14, &v20, a2, v13);
        }
      }
      return 0LL;
    }
    else
    {
      result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                 *(CConnectorProcessingModeCharacteristics **)a1,
                 a2,
                 v19[0],
                 v18,
                 v23,
                 v22,
                 v21);
      if ( a3 )
        *a3 = (int)result >= 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = (const struct tWAVEFORMATEX ***)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                             (__int64)v6 + 16,
                                             v7);
      if ( (unsigned int)CompareWaveFormat(a2, **v8) )
        break;
      v6 = *(CConnectorProcessingModeCharacteristics **)a1;
      if ( ++v7 >= *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
  return result;
}
