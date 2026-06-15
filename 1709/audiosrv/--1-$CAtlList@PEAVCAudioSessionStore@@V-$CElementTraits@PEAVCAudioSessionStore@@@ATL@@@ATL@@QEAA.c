/*
 * XREFs of ??1?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAA@XZ @ 0x180060EB0
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$2 @ 0x180060D34 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x18007F727 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x1800A2DC3 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x1800A2DD6 (_CMonitor--CMonitor_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::~CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>(
        __int64 a1)
{
  return ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll(a1);
}
