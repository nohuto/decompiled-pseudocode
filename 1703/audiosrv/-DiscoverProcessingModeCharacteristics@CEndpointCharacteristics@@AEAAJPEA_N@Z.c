/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180041FC8 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180057F30 (_alloca_probe.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180079C64 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800BC218 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC258 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800BD4E4 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1800BD668 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800BDE58 (-GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        bool *a2)
{
  int ProcessingModeCharacteristicsFromPropertyStore; // eax
  struct KSMULTIPLE_ITEM *v6; // rbx
  int PacketSizeConstraints; // eax
  __int64 OemEnginePeriodicity; // r12
  void *v9; // rdi
  int v10; // eax
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  struct KSMULTIPLE_ITEM *v19; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v21; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER Frequency; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24[541]; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+118Ch] [rbp+108Ch]
  GUID v26; // [rsp+1190h] [rbp+1090h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+11A0h] [rbp+10A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+11C0h] [rbp+10C0h] BYREF
  int *v29; // [rsp+11D0h] [rbp+10D0h]
  __int64 v30; // [rsp+11D8h] [rbp+10D8h]
  LPVOID *p_pv; // [rsp+11E0h] [rbp+10E0h]
  __int64 v32; // [rsp+11E8h] [rbp+10E8h]

  v23 = -2LL;
  v13 = 0;
  ProcessingModeCharacteristicsFromPropertyStore = CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this);
  *a2 = ProcessingModeCharacteristicsFromPropertyStore < 0;
  if ( ProcessingModeCharacteristicsFromPropertyStore < 0 )
  {
    v19 = 0LL;
    *(double *)&pv = 0.0;
    v21.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&PerformanceCount);
    GetSupportedDataRangeForEndpoint(*((struct IMMDevice **)this + 2), &v19);
    v6 = v19;
    PacketSizeConstraints = GetPacketSizeConstraints(
                              *((struct IPropertyStore **)this + 4),
                              (struct PacketSizeConstraints **)&pv);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    v13 = PacketSizeConstraints;
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
    v16 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v16,
            &pcbData) )
      LODWORD(g_MaxCapturePeriodicityInHns) = 10000 * v16;
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    v9 = pv;
    v10 = v13;
    if ( v13 >= 0 && *((_DWORD *)this + 44) )
    {
      v10 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              (__int64)pv,
              pvData != 0,
              OemEnginePeriodicity,
              (__int64)this + 192,
              0LL);
      v13 = v10;
    }
    LODWORD(v24[0]) = 0;
    *(__int64 *)((char *)&v24[28] + 4) = 0LL;
    v25 = 0;
    v26 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v10 >= 0 )
    {
      v13 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              (__int64)v9,
              pvData != 0,
              OemEnginePeriodicity,
              (__int64)this + 184,
              (__int64)v24);
      if ( v13 >= 0 && !*((_DWORD *)this + 45) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v24);
    QueryPerformanceCounter(&v21);
    pwsz = 0LL;
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0
      && (unsigned int)hProvider > 4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v29 = &v13;
      v30 = 4LL;
      if ( Frequency.QuadPart )
        *(double *)&pv = (double)(v21.LowPart - PerformanceCount.LowPart) / (double)(int)Frequency.LowPart;
      else
        *(double *)&pv = 0.0;
      p_pv = &pv;
      v32 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA4FB, v11, v12, 5u, &pData);
    }
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
    CoTaskMemFree(v9);
    CoTaskMemFree(v6);
  }
  return (unsigned int)v13;
}
