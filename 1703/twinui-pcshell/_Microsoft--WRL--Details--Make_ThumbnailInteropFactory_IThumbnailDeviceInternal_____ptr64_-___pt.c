/*
 * XREFs of _Microsoft::WRL::Details::Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801A4A19
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180167CCC (--1-$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ptr64_____ptr64_HWND_______ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ThumbnailInteropFactory>::~ComPtr<ThumbnailInteropFactory>(*(__int64 **)(a2 + 96));
  }
  return result;
}
