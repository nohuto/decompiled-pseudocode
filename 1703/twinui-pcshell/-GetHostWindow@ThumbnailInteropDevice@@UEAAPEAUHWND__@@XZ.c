/*
 * XREFs of ?GetHostWindow@ThumbnailInteropDevice@@UEAAPEAUHWND__@@XZ @ 0x180166870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ThumbnailInteropDevice::GetHostWindow(ThumbnailInteropDevice *this)
{
  return *(HWND *)(*((_QWORD *)this + 2) + 24LL);
}
