/*
 * XREFs of ?GetIids@CAppMemoryReport@System@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetIids(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(a1 - 16);
}
