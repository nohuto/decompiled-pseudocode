/*
 * XREFs of ??1?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAA@XZ @ 0x14001B800
 * Callers:
 *     _dynamic_atexit_destructor_for__SubmixList__ @ 0x140020CC0 (_dynamic_atexit_destructor_for__SubmixList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::~CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>()
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
}
