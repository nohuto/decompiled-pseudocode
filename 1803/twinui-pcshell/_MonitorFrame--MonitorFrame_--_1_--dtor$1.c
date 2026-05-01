/*
 * XREFs of _MonitorFrame::MonitorFrame_::_1_::dtor$1 @ 0x180205E3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFrame::MonitorFrame_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(*(_QWORD *)(a2 + 64) + 40LL));
}
