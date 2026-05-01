/*
 * XREFs of ?UnsubscribeFromServices@TabletModeViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802D1FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::UnsubscribeFromServices(
        TabletModeViewManager *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(char *, struct IServiceProvider *))(*((_QWORD *)this + 8) + 64LL))((char *)this + 64, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  return 0LL;
}
