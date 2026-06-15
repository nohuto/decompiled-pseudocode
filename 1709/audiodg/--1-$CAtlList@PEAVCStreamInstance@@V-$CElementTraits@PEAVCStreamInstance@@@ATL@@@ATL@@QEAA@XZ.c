/*
 * XREFs of ??1?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140030D30
 * Callers:
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$2 @ 0x140021590 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$2.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$3 @ 0x1400215A0 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$3.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$2 @ 0x140021642 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$2.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$3 @ 0x140021652 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x140021888 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x140021898 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x1400218A8 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x140021926 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x140021936 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x140021946 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::~CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(a1);
}
