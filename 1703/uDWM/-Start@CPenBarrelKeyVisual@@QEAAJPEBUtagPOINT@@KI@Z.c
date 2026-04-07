/*
 * XREFs of ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008D9D0
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070414 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800173E8 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800195DC (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180041538 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008D924 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Start(CPenBarrelKeyVisual *this, const struct tagPOINT *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  struct CBitmapSource *v7; // rdx
  CImage *v8; // rcx

  *(struct tagPOINT *)((char *)this + 300) = *a2;
  *((_DWORD *)this + 77) = a3;
  *((_DWORD *)this + 74) = a4;
  v5 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v6 = MulDiv(20, v5, 96);
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 39);
  v8 = (CImage *)*((_QWORD *)this + 40);
  *((_DWORD *)this + 84) = v6;
  CImage::SetBitmapSource(v8, v7);
  CPenBarrelKeyVisual::PlaceVisuals(this);
  CVisual::SetOpacity(this, 1.0);
  CPenBarrelKeyVisual::UpdateBarrelAlpha((CVisual **)this);
  return 0LL;
}
