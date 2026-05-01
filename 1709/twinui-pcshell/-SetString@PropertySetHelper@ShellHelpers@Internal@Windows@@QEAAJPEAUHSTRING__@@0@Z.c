/*
 * XREFs of ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800B346C
 * Callers:
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800DA1E0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1800DCC84 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x1801DDBB4 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJA@AA @ 0x18001D1FC (--_9IPropertyValue@Foundation@Windows@@$BJA@AA.c)
 *     ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8 (-_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIProperty.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003D258 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        HSTRING a3)
{
  int PropertyValueFactory; // eax
  int v6; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v7; // rcx
  int v8; // eax
  int v9; // eax
  struct Windows::Foundation::IPropertyValue *v10; // rcx
  struct Windows::Foundation::IPropertyValueStatics *v11; // rcx
  struct Windows::Foundation::IPropertyValue *v13[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Foundation::IPropertyValueStatics *v15; // [rsp+78h] [rbp+38h] BYREF

  v13[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v15 = 0LL;
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(this, &v15);
  v6 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
    goto LABEL_3;
  }
  v8 =  Windows::Foundation::IPropertyValue::`vcall'{144,{flat}}((__int64)v15);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v8);
LABEL_3:
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v6;
  }
  v13[0] = 0LL;
  v9 = ((__int64 (__fastcall *)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **))*MEMORY[0])(
         0LL,
         &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
         v13);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x54,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
    v10 = v13[0];
    goto LABEL_10;
  }
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v13[0]);
  v10 = v13[0];
  if ( v6 < 0 )
  {
LABEL_10:
    if ( v10 )
    {
      v13[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_3;
  }
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0;
}
