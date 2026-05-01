/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x18000C340
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800088C0 (-Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x1800088D0 (-Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::CProcessMemoryReport::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::Release(this);
}
