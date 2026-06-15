/*
 * XREFs of ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005560 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x1400089A0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000A5F0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B3B0 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000CB04 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DA10 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14002F510 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F724 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003D994 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003F840 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140044680 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(_QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
