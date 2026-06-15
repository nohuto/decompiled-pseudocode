/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140031168
 * Callers:
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$2 @ 0x140021C6E (_CSystemAudioDeviceCollection--Add_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x140021C7A (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x140059F42 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x14005A638 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
