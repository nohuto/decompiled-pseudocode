/*
 * XREFs of ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1801F9668
 * Callers:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1801F9D94 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x1802000EC (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x18021B414 (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x180099771 (WindowsDuplicateString_0.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall Platform::Details::DuplicateString(Platform::Details *this, HSTRING *a2, HSTRING *a3)
{
  HRESULT v3; // eax

  if ( this )
  {
    v3 = WindowsDuplicateString_0((HSTRING)this, a2);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
  }
  else
  {
    *a2 = 0LL;
  }
}
