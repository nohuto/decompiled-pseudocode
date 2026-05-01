/*
 * XREFs of ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x1801BBA50
 * Callers:
 *     ?Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Foundation@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@567@@Z @ 0x1801BB9E0 (-Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x1801BBE9C (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipActivator::CanActivate(
        SystemTray::TrayInfoTipActivator *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        unsigned __int8 *a5)
{
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a5 = SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(a2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipactivator.cpp",
                           v5);
  }
  return result;
}
