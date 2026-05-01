/*
 * XREFs of _wil::MakeOrThrow_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_tagRECT_&___ptr64__::_1_::dtor$0 @ 0x1801A49A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180167CCC (--1-$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_____ptr64_tagRECT_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ThumbnailInteropFactory>::~ComPtr<ThumbnailInteropFactory>(*(__int64 **)(a2 + 64));
  }
  return result;
}
