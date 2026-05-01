/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x18000B770
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x180008520 (-Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180008530 (-Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::CProcessMemoryReport::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IProcessMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
