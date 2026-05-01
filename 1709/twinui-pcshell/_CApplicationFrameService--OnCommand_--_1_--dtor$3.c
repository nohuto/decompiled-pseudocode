/*
 * XREFs of _CApplicationFrameService::OnCommand_::_1_::dtor$3 @ 0x1801E8ACF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationFrameService::OnCommand_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
