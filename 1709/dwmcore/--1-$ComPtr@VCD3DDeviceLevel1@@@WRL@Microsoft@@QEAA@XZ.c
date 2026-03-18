/*
 * XREFs of ??1?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEAA@XZ @ 0x18011DEC4
 * Callers:
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801C15A4 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::~ComPtr<CD3DDeviceLevel1>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(a1);
}
