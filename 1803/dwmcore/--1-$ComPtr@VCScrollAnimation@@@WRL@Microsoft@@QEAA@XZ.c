/*
 * XREFs of ??1?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAA@XZ @ 0x180193280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<CScrollAnimation>::~ComPtr<CScrollAnimation>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
