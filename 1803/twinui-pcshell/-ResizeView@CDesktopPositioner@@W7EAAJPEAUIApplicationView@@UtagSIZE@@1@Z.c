/*
 * XREFs of ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800AF260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::ResizeView(
        __int64 a1,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  return CDesktopPositioner::ResizeView((CDesktopPositioner *)(a1 - 8), a2, a3, a4);
}
