/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180050E64
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180050EF4 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x18009817C (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800981A4 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800E9DC0 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x1800E9E00 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800EA250 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800EB4D0 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1800EB654 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800EBEBC (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        bool *a2)
{
  int ProcessingModeCharacteristicsFromPropertyStore; // eax
  struct KSMULTIPLE_ITEM *v6; // rbx
  struct KSMULTIPLE_ITEM *v7; // rdi
  int PacketSizeConstraints; // eax
  __int64 OemEnginePeriodicity; // r15
  void *v10; // rsi
  int v11; // eax
  int SupportedDataRangeForEndpoint; // eax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG Count; // [rsp+60h] [rbp-A0h]
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  double TimeSec; // [rsp+70h] [rbp-90h] BYREF
  struct KSMULTIPLE_ITEM *v22; // [rsp+78h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  struct KSMULTIPLE_ITEM *v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29[541]; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+119Ch] [rbp+109Ch]
  GUID v31; // [rsp+11A0h] [rbp+10A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+11B0h] [rbp+10B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+11D0h] [rbp+10D0h] BYREF
  int *v34; // [rsp+11E0h] [rbp+10E0h]
  __int64 v35; // [rsp+11E8h] [rbp+10E8h]
  struct KSMULTIPLE_ITEM **p_TimeSec; // [rsp+11F0h] [rbp+10F0h]
  __int64 v37; // [rsp+11F8h] [rbp+10F8h]

  v28 = -2LL;
  v15 = 0;
  ProcessingModeCharacteristicsFromPropertyStore = CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this);
  *a2 = ProcessingModeCharacteristicsFromPropertyStore < 0;
  if ( ProcessingModeCharacteristicsFromPropertyStore < 0 )
  {
    v22 = 0LL;
    v6 = 0LL;
    v24 = 0LL;
    pv = 0LL;
    Count = 0;
    TimeSec = 0.0;
    PerformanceCount.QuadPart = 0LL;
    v25 = 0LL;
    QueryPerformanceFrequency(&Frequency);
    CQPCStopWatch::Start((CQPCStopWatch *)&v25);
    GetSupportedDataRangeForEndpoint(eHostProcessConnector, *((struct IMMDevice **)this + 2), &v22);
    v7 = v22;
    PacketSizeConstraints = GetPacketSizeConstraints(
                              *((struct IPropertyStore **)this + 4),
                              (struct PacketSizeConstraints **)&pv);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    v15 = PacketSizeConstraints;
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
    v18 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v18,
            &pcbData) )
      LODWORD(g_MaxCapturePeriodicityInHns) = 10000 * v18;
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    v10 = pv;
    v11 = v15;
    if ( v15 >= 0 && *((_DWORD *)this + 44) )
    {
      SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                        eKeywordDetectorConnector,
                                        *((struct IMMDevice **)this + 2),
                                        &v24);
      v6 = v24;
      if ( SupportedDataRangeForEndpoint >= 0 )
      {
        Count = v24->Count;
        *(_QWORD *)&TimeSec = &v24[1];
      }
      v11 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              (__int64)v10,
              pvData != 0,
              OemEnginePeriodicity,
              (__int64)this + 192,
              0LL);
      v15 = v11;
    }
    LODWORD(v29[0]) = 0;
    *(__int64 *)((char *)&v29[28] + 4) = 0LL;
    v30 = 0;
    v31 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v11 >= 0 )
    {
      v15 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              this,
              (__int64)v10,
              pvData != 0,
              OemEnginePeriodicity,
              (__int64)this + 184,
              (__int64)v29);
      if ( v15 >= 0 && !*((_DWORD *)this + 45) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v29);
    QueryPerformanceCounter(&PerformanceCount);
    pwsz = 0LL;
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0
      && (unsigned int)hProvider > 4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v34 = &v15;
      v35 = 4LL;
      TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v25);
      p_TimeSec = (struct KSMULTIPLE_ITEM **)&TimeSec;
      v37 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014750D, v13, v14, 5u, &pData);
    }
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
    CoTaskMemFree(v10);
    CoTaskMemFree(v6);
    CoTaskMemFree(v7);
  }
  return (unsigned int)v15;
}
