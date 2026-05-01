/*
 * XREFs of ?UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C5180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromServices(
        PeoplePaneViewManager *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 320));
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 192));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  return 0LL;
}
