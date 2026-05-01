/*
 * XREFs of ??_9IPropertyValue@Foundation@Windows@@$BKA@AA @ 0x1800A27CC
 * Callers:
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18006CA90 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x180094294 (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetHolographicAppInstanceId@Holographic@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@34@PEAU_GUID@@@Z @ 0x1801AE5D0 (-GetHolographicAppInstanceId@Holographic@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall  Windows::Foundation::IPropertyValue::`vcall'{160,{flat}}(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
}
