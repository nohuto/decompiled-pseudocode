/*
 * XREFs of _Towupper @ 0x1800A5F28
 * Callers:
 *     ?do_toupper@?$ctype@G@std@@MEBAGG@Z @ 0x180029F70 (-do_toupper@-$ctype@G@std@@MEBAGG@Z.c)
 *     ?do_toupper@?$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z @ 0x180029F80 (-do_toupper@-$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800AD6F8 (_GetLocaleHandleByColl.c)
 *     __crtLCMapStringW_Stub @ 0x1800AD7CC (__crtLCMapStringW_Stub.c)
 */

wchar_t __cdecl Towupper(wchar_t a1, const _Ctypevec *a2)
{
  __int64 LocaleHandleByColl; // rax
  wchar_t v4; // cx
  int v5; // eax
  wchar_t v7; // [rsp+50h] [rbp+8h] BYREF
  wchar_t v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = a1;
  v8 = a1;
  LocaleHandleByColl = GetLocaleHandleByColl(a2);
  if ( v7 == 0xFFFF )
    return v8;
  if ( !LocaleHandleByColl && v7 < 0x100u )
  {
    if ( (unsigned __int16)(v7 - 97) <= 0x19u )
      return v7 - 32;
    return v8;
  }
  v5 = _crtLCMapStringW_Stub(LocaleHandleByColl, 512, (unsigned int)&v7, 1, (__int64)&v8, 1, *(&a2->_Page + 1));
  v4 = v8;
  if ( !v5 )
    return v7;
  return v4;
}
