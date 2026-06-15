/*
 * XREFs of ??1?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAA@XZ @ 0x1800803B4
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$2 @ 0x18005C040 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x1800989D7 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::~CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>(
        __int64 *a1)
{
  ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::RemoveAll(a1);
}
