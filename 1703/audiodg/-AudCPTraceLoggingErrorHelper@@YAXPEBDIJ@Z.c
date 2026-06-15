/*
 * XREFs of ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140018B34 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140018C70 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140018D40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400191D0 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14001B9C0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14001BA38 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14001BEA0 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 *     ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140053B80 (-GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x140053C50 (-GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140053CD0 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140053F80 (-GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140054000 (-GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x1400540A0 (-GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140054124 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400545D8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400546E8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400547BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x1400548C0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140054A30 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140054C40 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140054D80 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140055560 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400558E0 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140055B80 (-GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056040 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall AudCPTraceLoggingErrorHelper(const char *a1, int a2, int a3)
{
  const CHAR *v3; // r9
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+7h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  int *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF
  int v15; // [rsp+C0h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  if ( (unsigned int)dword_140085020 > 2 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_140085020, 1uLL) )
    {
      TlgCreateSz(&pDesc, v3);
      v10 = 0;
      v13 = 0;
      v8 = &v14;
      v9 = 4;
      v12 = 4;
      v11 = &v15;
      TlgWrite((TraceLoggingHProvider)&dword_140085020, &unk_14006F844, v4, v5, 5u, &pData);
    }
  }
}
