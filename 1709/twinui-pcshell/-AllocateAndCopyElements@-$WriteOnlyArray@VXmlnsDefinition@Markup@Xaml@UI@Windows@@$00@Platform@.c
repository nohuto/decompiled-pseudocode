/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180151730
 * Callers:
 *     ??0?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18015166C (--0-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefin.c)
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x180151840 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801E339E (__Platform_CoTaskMemAlloc.c)
 *     WindowsDuplicateString_0 @ 0x1801E3435 (WindowsDuplicateString_0.c)
 */

char *__fastcall Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rsi
  char *v4; // rdi
  char *v6; // rax
  unsigned int v7; // r15d
  HSTRING *v8; // rbx
  __int64 v9; // r14
  HSTRING v10; // rbp
  HSTRING v11; // rcx
  HRESULT v12; // eax
  HSTRING v13; // rbp
  HSTRING v14; // rcx
  HRESULT v15; // eax
  HSTRING newString; // [rsp+60h] [rbp+18h] BYREF
  HSTRING v17; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0xFFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v6 = (char *)_Platform_CoTaskMemAlloc(16LL * a2);
  v4 = v6;
  if ( !v6 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset(v6, 0, 16 * v2);
  v7 = 0;
  if ( (_DWORD)v2 )
  {
    v8 = (HSTRING *)(v4 + 8);
    v9 = a1 - (_QWORD)v4;
    do
    {
      v10 = *(HSTRING *)((char *)v8 + v9 - 8);
      v11 = *(v8 - 1);
      if ( v11 != v10 )
      {
        if ( v11 )
          WindowsDeleteString_0(v11);
        *(v8 - 1) = 0LL;
        if ( v10 )
        {
          v12 = WindowsDuplicateString_0(v10, &newString);
          if ( v12 < 0 )
            __abi_WinRTraiseException(v12);
          *(v8 - 1) = newString;
        }
      }
      v13 = *(HSTRING *)((char *)v8 + v9);
      v14 = *v8;
      if ( *v8 != v13 )
      {
        if ( v14 )
          WindowsDeleteString_0(v14);
        *v8 = 0LL;
        if ( v13 )
        {
          v15 = WindowsDuplicateString_0(v13, &v17);
          if ( v15 < 0 )
            __abi_WinRTraiseException(v15);
          *v8 = v17;
        }
      }
      ++v7;
      v8 += 2;
    }
    while ( v7 < (unsigned int)v2 );
  }
  return v4;
}
