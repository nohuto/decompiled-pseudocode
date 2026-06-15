/*
 * XREFs of ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0
 * Callers:
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14005BD14 (privateCreateSpatialCrossProcessEndpoint.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005E53C (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005E604 (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005E960 (-GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005E9C0 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005EA18 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005EB00 (-GetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSpatialCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x14005EB70 (-GetLatency@CSpatialCrossProcessBaseEndpoint@@UEAAJPEA_J@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005EBEC (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005EC6C (-GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14005ECE4 (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005ED60 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005EE34 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005EED8 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005F004 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005F2C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005F644 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005FB90 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005FD58 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 *     ?ValidateDescriptor@SpatialBlock@@QEAAJXZ @ 0x14005FDEC (-ValidateDescriptor@SpatialBlock@@QEAAJXZ.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005FE38 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140060150 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400602A0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400603A0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetCharacteristics@CSpatialCrossProcessClientEndpoint@@UEAAJPEAK@Z @ 0x1400604A0 (-GetCharacteristics@CSpatialCrossProcessClientEndpoint@@UEAAJPEAK@Z.c)
 *     ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x1400604E0 (-GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x140060580 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x1400605D0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x140060730 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?GetAllocatedObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI0@Z @ 0x1400609F0 (-GetAllocatedObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI0@Z.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140060A60 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140060BC0 (-GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetFrameCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140060D50 (-GetFrameCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140060DB0 (-GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140060E20 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140060F20 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140061020 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140061120 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400615D0 (-GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x140061680 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x1400618F0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 *     ?GetAllocatedObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI0@Z @ 0x140061F80 (-GetAllocatedObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI0@Z.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x140061FF0 (-GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x140062060 (-GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400620F0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140062270 (-GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x1400622F0 (-GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140062370 (-GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 *     ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400623F0 (-GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?ProcessComplete@CSpatialCrossProcessServerInputEndpoint@@UEAAJXZ @ 0x140062460 (-ProcessComplete@CSpatialCrossProcessServerInputEndpoint@@UEAAJXZ.c)
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x1400624A0 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400624E0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  int *v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  int *v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]
  int v13; // [rsp+A8h] [rbp+6Fh] BYREF
  int v14; // [rsp+B0h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  if ( (unsigned int)dword_1400890A0 > 2 )
  {
    TlgCreateSz(&pDesc, psz);
    v9 = 0;
    v12 = 0;
    v7 = &v13;
    v8 = 4;
    v11 = 4;
    v10 = &v14;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_140072585, v3, v4, 5u, &pData);
  }
}
