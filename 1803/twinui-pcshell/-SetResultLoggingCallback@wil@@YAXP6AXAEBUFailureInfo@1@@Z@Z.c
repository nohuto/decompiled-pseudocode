/*
 * XREFs of ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x1800961FC
 * Callers:
 *     DllMain @ 0x18009C5CC (DllMain.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::SetResultLoggingCallback(wil *this, void (*a2)(const struct wil::FailureInfo *))
{
  if ( wil::details::g_pfnLoggingCallback && this && (char *)wil::details::g_pfnLoggingCallback != (char *)this )
    __fastfail(7u);
  wil::details::g_pfnLoggingCallback = (void (*)(const struct wil::FailureInfo *))this;
}
