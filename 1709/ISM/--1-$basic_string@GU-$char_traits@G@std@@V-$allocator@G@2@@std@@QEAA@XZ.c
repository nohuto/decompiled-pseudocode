/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180028C14
 * Callers:
 *     _DWMHardwareCursor::UpdateBitmapSource_::_1_::dtor$1 @ 0x1800CDBEC (_DWMHardwareCursor--UpdateBitmapSource_--_1_--dtor$1.c)
 *     _Input::PropertyInfo::Describe_::_1_::dtor$0 @ 0x1800CE37C (_Input--PropertyInfo--Describe_--_1_--dtor$0.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x1800D0B84 (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1);
}
