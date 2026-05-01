/*
 * XREFs of ?get_PropertyChanged@ThumbnailSourceEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180167740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ThumbnailSourceEventArgs::get_PropertyChanged(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[7], a2);
}
