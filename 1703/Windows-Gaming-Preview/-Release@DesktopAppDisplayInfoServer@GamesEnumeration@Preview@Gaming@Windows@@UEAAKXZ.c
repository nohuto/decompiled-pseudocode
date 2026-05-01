/*
 * XREFs of ?Release@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18001C970
 * Callers:
 *     ?Release@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18001BD80 (-Release@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18001BE90 (-Release@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
