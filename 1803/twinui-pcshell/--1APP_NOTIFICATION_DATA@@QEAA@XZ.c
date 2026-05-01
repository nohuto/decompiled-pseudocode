/*
 * XREFs of ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x1800F91A0
 * Callers:
 *     _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$3 @ 0x1800B4178 (_CImmersiveApp--_ScheduleApplicationNotifications_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA(
        APP_NOTIFICATION_DATA *this,
        const struct std::nothrow_t *a2)
{
  operator delete(*(void **)this, a2);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
