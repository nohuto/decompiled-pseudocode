/*
 * XREFs of ??$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x1801683F4
 * Callers:
 *     ?OnSourceSizeChanged@ThumbnailInteropFactoryBase@@UEAAXPEAX@Z @ 0x180167B30 (-OnSourceSizeChanged@ThumbnailInteropFactoryBase@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@12@$$QEAPEAUHSTRING__@@@Z @ 0x180168748 (--$Make@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VThumbna.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ThumbnailSourceEventArgs,HSTRING__ *>(_QWORD *a1, __int64 a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ThumbnailSourceEventArgs,HSTRING__ *>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v3);
    __debugbreak();
  }
  return a1;
}
