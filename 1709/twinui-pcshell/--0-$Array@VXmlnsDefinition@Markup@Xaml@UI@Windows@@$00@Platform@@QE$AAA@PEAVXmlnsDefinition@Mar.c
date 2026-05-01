/*
 * XREFs of ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x1801524CC
 * Callers:
 *     ?GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x18014DE84 (-GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV-$Array@VXmlns.c)
 *     ?get@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@Value@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x1801519A0 (-get@-Q-$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@Value@-$Array@VXmlnsDefin.c)
 * Callees:
 *     ??0?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18015166C (--0-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefin.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
        Platform::Details *a1,
        __int64 a2,
        unsigned int a3)
{
  void *v4; // rdx

  Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
    (__int64)a1 + 32,
    a2,
    a3);
  *(_QWORD *)a1 = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::UI::Xaml::Markup::XmlnsDefinition>'};
  *((_QWORD *)a1 + 1) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = ___7__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__6B__I__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 3) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::IDisposable'};
  *((_QWORD *)a1 + 4) = ___7__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__6B__I__WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 5) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>'};
  *((_QWORD *)a1 + 6) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>'};
  *((_QWORD *)a1 + 7) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>'};
  *((_QWORD *)a1 + 8) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>'};
  *((_QWORD *)a1 + 14) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 15) = &Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxArrayVtable(a1, v4);
  return a1;
}
