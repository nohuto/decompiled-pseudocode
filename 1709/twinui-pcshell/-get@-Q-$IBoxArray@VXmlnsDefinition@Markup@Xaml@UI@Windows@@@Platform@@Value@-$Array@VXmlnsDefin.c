/*
 * XREFs of ?get@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@Value@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x1801519A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x1801524CC (--0-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Mar.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__Q__IBoxArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___Platform__Value___Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAP_01E_AAV42_XZ(
        _BYTE *a1)
{
  _BYTE *v1; // rbx
  void *v3; // [rsp+40h] [rbp+8h]

  v1 = a1;
  if ( a1 )
  {
    if ( a1[76] )
    {
      v3 = Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
      return Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
               v3,
               *((_QWORD *)v1 + 10),
               *((unsigned int *)v1 + 18));
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (__int64)v1;
}
