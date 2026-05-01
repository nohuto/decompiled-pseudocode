/*
 * XREFs of ?HICONFromBitmap@CortanaDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180185D20
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801872AC (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

HICON __fastcall CortanaDesktopExperienceView::HICONFromBitmap(HBITMAP a1)
{
  int SystemMetrics; // edi
  int v3; // ebx
  HDC DC; // rax
  HBITMAP CompatibleBitmap; // rbx
  HICON v6; // rdi
  ICONINFO piconinfo; // [rsp+20h] [rbp-28h] BYREF

  SystemMetrics = GetSystemMetrics(12);
  v3 = GetSystemMetrics(11);
  DC = GetDC(0LL);
  CompatibleBitmap = CreateCompatibleBitmap(DC, v3, SystemMetrics);
  if ( CompatibleBitmap )
  {
    memset_0(&piconinfo, 0, sizeof(piconinfo));
    piconinfo.fIcon = 1;
    piconinfo.hbmColor = a1;
    piconinfo.hbmMask = CompatibleBitmap;
    v6 = CreateIconIndirect(&piconinfo);
  }
  else
  {
    v6 = 0LL;
  }
  if ( CompatibleBitmap )
    DeleteObject(CompatibleBitmap);
  return v6;
}
