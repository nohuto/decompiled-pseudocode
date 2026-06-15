/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x140037620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((volatile signed __int32 **)(a2 + 64));
}
