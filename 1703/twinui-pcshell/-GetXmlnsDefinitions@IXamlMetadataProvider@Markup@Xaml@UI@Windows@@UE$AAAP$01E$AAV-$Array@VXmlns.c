/*
 * XREFs of ?GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x18012386C
 * Callers:
 *     ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x180123194 (-GetXmlnsDefinitions@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18012819C (--0-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Mar.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXmlnsDefinitions(__int64 a1)
{
  int v1; // eax
  int v2; // ebx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  void *v7; // [rsp+50h] [rbp+18h]

  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v5, &v6);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v5;
  v3 = v6;
  if ( (unsigned int)v5 > 0xFFFFFFF )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
  }
  v7 = Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
  result = Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
             v7,
             0LL,
             0LL);
  if ( *(_DWORD *)(result + 72) || *(_QWORD *)(result + 80) )
  {
    __abi_WinRTraiseFailureException();
    __debugbreak();
  }
  *(_DWORD *)(result + 72) = v2;
  *(_BYTE *)(result + 76) = 0;
  *(_QWORD *)(result + 80) = v3;
  v5 = 0LL;
  return result;
}
