/*
 * XREFs of ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x14001BB60
 * Callers:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001E2C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@AEBV01@@Z @ 0x14003186C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

struct ATL::IAtlStringMgr *__fastcall ATL::CAtlStringMgr::Clone(ATL::CAtlStringMgr *this)
{
  return this;
}
