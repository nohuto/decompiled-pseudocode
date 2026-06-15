/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BEE48
 * Callers:
 *     _lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator() @ 0x18004C854 (_lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_--operator().c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18004738C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18007B2C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18009BC48 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BBEE0 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800BC218 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800BCAE4 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800BD4E4 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1800BD668 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(struct IPropertyStore **this, struct tWAVEFORMATEX *a2)
{
  int v3; // r15d
  int PacketSizeConstraints; // edi
  struct PacketSizeConstraints *v5; // rbx
  char v6; // r14
  unsigned int v7; // r13d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v8; // rax
  __int64 v9; // r12
  struct tWAVEFORMATEX *v10; // r13
  __int64 v11; // rcx
  struct _GUID **v12; // rax
  struct _GUID *v13; // rdi
  int v14; // eax
  int v15; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // [rsp+60h] [rbp-39h]
  unsigned int v18; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v21; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-25h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v25; // [rsp+88h] [rbp-11h]
  __int64 OemEnginePeriodicity; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  struct _GUID v28; // [rsp+A0h] [rbp+7h] BYREF
  int pvData; // [rsp+100h] [rbp+67h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+108h] [rbp+6Fh]
  unsigned int v31; // [rsp+110h] [rbp+77h]
  DWORD pcbData; // [rsp+118h] [rbp+7Fh] BYREF

  v30 = a2;
  v27 = -2LL;
  v3 = 0;
  pv = 0LL;
  v24[0] = 0;
  v24[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(this[4], (LPVOID **)&pv);
  if ( PacketSizeConstraints == -2147023728 )
    PacketSizeConstraints = 0;
  v5 = (struct PacketSizeConstraints *)pv;
  if ( PacketSizeConstraints >= 0 )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity((CEndpointCharacteristics *)this);
    v6 = 0;
    v7 = 0;
    v31 = 0;
    v8 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
    v25 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
    do
    {
      v17 = *v8;
      v9 = 23LL;
      if ( *v8 == eKeywordDetectorConnector )
        v9 = 24LL;
      if ( this[v9] )
      {
        v10 = v30;
        while ( 1 )
        {
          v11 = (__int64)this[v9];
          if ( v3 >= *(_DWORD *)(v11 + 8) )
            break;
          v12 = (struct _GUID **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                   v11,
                                   v3);
          v13 = *v12;
          v28 = **v12;
          v14 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                  (CEndpointCharacteristics *)this,
                  v17,
                  &v28,
                  v10,
                  v5,
                  pvData != 0,
                  OemEnginePeriodicity,
                  &v22,
                  &v21,
                  &v20,
                  &v19,
                  &v18);
          if ( v14 < 0 )
          {
            if ( AEError::DeviceInUse((AEError *)(unsigned int)v14) )
            {
              CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
                (CConnectorProcessingModeCharacteristics *)v13,
                v10);
              *((_DWORD *)this + 45) = 1;
            }
            PacketSizeConstraints = 0;
          }
          else
          {
            v15 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                    (CConnectorProcessingModeCharacteristics *)v13,
                    v10,
                    v22,
                    v21,
                    v20,
                    v19,
                    v18);
            PacketSizeConstraints = v15;
            if ( v6 || v15 >= 0 )
              v6 = 1;
          }
          ++v3;
        }
        v7 = v31;
        v8 = v25;
        v3 = 0;
      }
      v31 = ++v7;
      v25 = ++v8;
    }
    while ( v7 < 2 );
    if ( v6 && !*((_DWORD *)this + 45) )
      CEndpointCharacteristics::CacheProcessingModeCharacteristics((CEndpointCharacteristics *)this);
  }
  CoTaskMemFree(v5);
  return (unsigned int)PacketSizeConstraints;
}
