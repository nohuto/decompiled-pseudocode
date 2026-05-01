/*
 * XREFs of ?v_WndProc@ThumbnailInteropWindow@ThumbnailInteropDevice@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180166EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThumbnailSourceSizeChange@ThumbnailInteropDevice@@AEAAXPEAX@Z @ 0x180166F0C (-OnThumbnailSourceSizeChange@ThumbnailInteropDevice@@AEAAXPEAX@Z.c)
 */

LRESULT __fastcall ThumbnailInteropDevice::ThumbnailInteropWindow::v_WndProc(
        ThumbnailInteropDevice::ThumbnailInteropWindow *this,
        HWND a2,
        UINT a3,
        void *a4,
        LPARAM a5)
{
  ThumbnailInteropDevice *v5; // rcx

  if ( a3 == 16 )
    return 0LL;
  if ( a3 == 807 )
  {
    v5 = (ThumbnailInteropDevice *)*((_QWORD *)this + 2);
    if ( v5 )
    {
      ThumbnailInteropDevice::OnThumbnailSourceSizeChange(v5, a4);
      return 0LL;
    }
  }
  return DefWindowProcW(a2, a3, (WPARAM)a4, a5);
}
