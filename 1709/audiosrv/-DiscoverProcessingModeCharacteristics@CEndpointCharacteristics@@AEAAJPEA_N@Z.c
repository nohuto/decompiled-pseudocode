/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800B3FC8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18005A438 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B2864 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x1800B28A4 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800B2F84 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800B5600 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1800B5784 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B5F24 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800B62B4 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        bool *a2)
{
  int ProcessingModeCharacteristicsFromPropertyStore; // eax
  struct KSMULTIPLE_ITEM *v5; // rbx
  ULONG Count; // r12d
  struct KSMULTIPLE_ITEM *v7; // r13
  int SupportedDataRangeForEndpoint; // eax
  struct KSMULTIPLE_ITEM *v9; // rdi
  int PacketSizeConstraints; // eax
  __int64 OemEnginePeriodicity; // r15
  void *v12; // rsi
  int v13; // eax
  int v14; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v22; // [rsp+60h] [rbp-A0h]
  double v23; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR pwsz; // [rsp+70h] [rbp-90h] BYREF
  struct KSMULTIPLE_ITEM *v25; // [rsp+78h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  struct KSMULTIPLE_ITEM *v27; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER v29; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32[541]; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+119Ch] [rbp+109Ch]
  GUID v34; // [rsp+11A0h] [rbp+10A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+11B0h] [rbp+10B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+11D0h] [rbp+10D0h] BYREF
  int *v37; // [rsp+11E0h] [rbp+10E0h]
  __int64 v38; // [rsp+11E8h] [rbp+10E8h]
  double *v39; // [rsp+11F0h] [rbp+10F0h]
  __int64 v40; // [rsp+11F8h] [rbp+10F8h]

  v31 = -2LL;
  v18 = 0;
  ProcessingModeCharacteristicsFromPropertyStore = CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this);
  *a2 = ProcessingModeCharacteristicsFromPropertyStore < 0;
  if ( ProcessingModeCharacteristicsFromPropertyStore < 0 )
  {
    v25 = 0LL;
    v5 = 0LL;
    v27 = 0LL;
    pv = 0LL;
    Count = 0;
    v22 = 0;
    v7 = 0LL;
    v23 = 0.0;
    v29.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&PerformanceCount);
    SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                      eHostProcessConnector,
                                      *((struct IMMDevice **)this + 2),
                                      &v25);
    v9 = v25;
    if ( SupportedDataRangeForEndpoint >= 0 )
    {
      Count = v25->Count;
      v7 = v25 + 1;
    }
    PacketSizeConstraints = GetPacketSizeConstraints(
                              *((struct IPropertyStore **)this + 4),
                              (struct PacketSizeConstraints **)&pv);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    v18 = PacketSizeConstraints;
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
    v21 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v21,
            &pcbData) )
      LODWORD(g_MaxCapturePeriodicityInHns) = 10000 * v21;
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    v12 = pv;
    v13 = v18;
    if ( v18 >= 0 && *((_DWORD *)this + 44) )
    {
      v14 = GetSupportedDataRangeForEndpoint(eKeywordDetectorConnector, *((struct IMMDevice **)this + 2), &v27);
      v5 = v27;
      if ( v14 >= 0 )
      {
        v22 = v27->Count;
        *(_QWORD *)&v23 = &v27[1];
      }
      v13 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              3,
              v22,
              *(__int64 *)&v23,
              (__int64)v12,
              pvData != 0,
              OemEnginePeriodicity,
              (void ***)this + 24,
              0LL);
      v18 = v13;
    }
    LODWORD(v32[0]) = 0;
    *(__int64 *)((char *)&v32[28] + 4) = 0LL;
    v33 = 0;
    v34 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v13 >= 0 )
    {
      v18 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              0,
              Count,
              (__int64)v7,
              (__int64)v12,
              pvData != 0,
              OemEnginePeriodicity,
              (void ***)this + 23,
              (__int64)v32);
      if ( v18 >= 0 && !*((_DWORD *)this + 45) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v32);
    QueryPerformanceCounter(&v29);
    pwsz = 0LL;
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0
      && (unsigned int)hProvider > 4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v37 = &v18;
      v38 = 4LL;
      if ( Frequency.QuadPart )
        v23 = (double)(v29.LowPart - PerformanceCount.LowPart) / (double)(int)Frequency.LowPart;
      else
        v23 = 0.0;
      v39 = &v23;
      v40 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801107E0, v15, v16, 5u, &pData);
    }
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
    CoTaskMemFree(v12);
    CoTaskMemFree(v5);
    CoTaskMemFree(v9);
  }
  return (unsigned int)v18;
}
