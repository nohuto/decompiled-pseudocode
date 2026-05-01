/*
 * XREFs of ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8
 * Callers:
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003D4E4 (-SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800B346C (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x1800B5468 (--$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?SetDouble@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@N@Z @ 0x1800B58AC (-SetDouble@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1800B8DA0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800C970C (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        struct Windows::Foundation::IPropertyValueStatics **a2)
{
  HRESULT v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x18003D255LL);
  }
  return RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, a2);
}
