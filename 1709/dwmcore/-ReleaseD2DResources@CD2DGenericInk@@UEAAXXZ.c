/*
 * XREFs of ?ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ @ 0x1801B4080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DGenericInk::ReleaseD2DResources(CD2DGenericInk *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
}
