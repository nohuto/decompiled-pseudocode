/*
 * XREFs of _SurfaceHubPositioner::OnApplicationViewChanged_::_1_::dtor$1 @ 0x1800B2090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SurfaceHubPositioner::OnApplicationViewChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 64);
}
