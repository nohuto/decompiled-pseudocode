/*
 * XREFs of ??1InternalHitTestResult@HitTestHelper@@QEAA@XZ @ 0x18006510C
 * Callers:
 *     _DragNDropProcessorLegacy::HitTest_::_1_::dtor$0 @ 0x1800E6E68 (_DragNDropProcessorLegacy--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x1800E7BFA (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x1800E7CB8 (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$2 @ 0x1800E7E90 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$2.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x1800E83D7 (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall HitTestHelper::InternalHitTestResult::~InternalHitTestResult(
        HitTestHelper::InternalHitTestResult *this,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 4);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v3);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)this + 8, a2);
}
