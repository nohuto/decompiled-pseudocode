/*
 * XREFs of ?get_DisplayInfo@TrayInfoTipAppInfo@SystemTray@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x180264F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIAppDisplayInfo@ApplicationModel@Windows@@@?$com_ptr_t@VTrayInfoTipDisplayInfo@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x180264ADC (--$copy_to@UIAppDisplayInfo@ApplicationModel@Windows@@@-$com_ptr_t@VTrayInfoTipDisplayInfo@Syste.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfo::get_DisplayInfo(
        SystemTray::TrayInfoTipAppInfo *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::com_ptr_t<SystemTray::TrayInfoTipDisplayInfo,wil::err_exception_policy>::copy_to<Windows::ApplicationModel::IAppDisplayInfo>(
      (__int64 *)this + 9,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
                           v2);
  }
  return result;
}
