/*
 * XREFs of ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800128E0
 * Callers:
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18000F8F0 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18000F9B0 (-Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
