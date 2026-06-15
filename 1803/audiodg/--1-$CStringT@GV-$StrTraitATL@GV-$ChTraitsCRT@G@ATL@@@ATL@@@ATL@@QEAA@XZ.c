/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140030120
 * Callers:
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$2 @ 0x14001F560 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x14001F56C (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x140057BA6 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
