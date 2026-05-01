/*
 * XREFs of ?MakeSolidColorBackgroundVisual@DesktopBackgroundFactory@@AEAA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@USize@Foundation@7@@Z @ 0x1801691AC
 * Callers:
 *     ?CreateThumbnailVisual@DesktopBackgroundFactory@@UEAAJPEAUICompositor@Composition@UI@Windows@@USize@Foundation@5@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIDuplicateVisual@ComposableShell@Internal@5@@Z @ 0x180169030 (-CreateThumbnailVisual@DesktopBackgroundFactory@@UEAAJPEAUICompositor@Composition@UI@Windows@@US.c)
 * Callees:
 *     ?MakeSolidColorVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UColor@UI@Windows@@PEAUICompositor@Composition@45@USize@Foundation@5@@Z @ 0x18016A9E0 (-MakeSolidColorVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr.c)
 */

__int64 __fastcall DesktopBackgroundFactory::MakeSolidColorBackgroundVisual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DWORD SysColor; // eax
  unsigned int v9; // [rsp+58h] [rbp+10h]

  SysColor = GetSysColor(1);
  LOBYTE(v9) = -1;
  *(_WORD *)((char *)&v9 + 1) = SysColor;
  HIBYTE(v9) = BYTE2(SysColor);
  MakeSolidColorVisual(a2, v9, a3, a4, 0);
  return a2;
}
