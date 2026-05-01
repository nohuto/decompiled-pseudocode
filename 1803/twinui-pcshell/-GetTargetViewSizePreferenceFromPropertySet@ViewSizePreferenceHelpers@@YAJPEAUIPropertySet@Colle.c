/*
 * XREFs of ?GetTargetViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18014D854
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetTargetViewSizePreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3)
{
  __int64 v4; // rax
  UAPViewWrapper *v5; // r8
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall ***v9[2])(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-40h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-30h] BYREF

  v9[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  *(_DWORD *)a2 = 0;
  v9[0] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v9);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v10, (const WCHAR **)&off_18034C3B0);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(v9, *(_QWORD *)(v4 + 24), v5, &v8);
  if ( v6 >= 0 )
  {
    *(_DWORD *)a2 = v8;
    v6 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
  return (unsigned int)v6;
}
