/*
 * XREFs of ??1?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5EF0
 * Callers:
 *     _Win32BackedViewHostItem::put_Visibility_::_1_::dtor$0 @ 0x1801BA59A (_Win32BackedViewHostItem--put_Visibility_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::~ComPtr<PresentationReadyChangedEventArgs>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(a1);
}
