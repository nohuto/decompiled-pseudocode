/*
 * XREFs of ?__abi_Platform_?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@____abi_get_Value@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJPEAIPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@@Z @ 0x1801276B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x1801275C0 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform___IBoxArray_VXmlnsDefinition_Markup_Xaml_UI_Windows______abi_get_Value__Q__IBoxArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJPEAIPEAPEAVXmlnsDefinition_Markup_Xaml_UI_Windows___Z(
        _BYTE *a1,
        _DWORD *a2,
        char **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax

  v5 = 0;
  if ( a1[128] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    Platform::Details::__abi_array_copy_to_and_release<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(v6, a3, a2);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v5;
}
