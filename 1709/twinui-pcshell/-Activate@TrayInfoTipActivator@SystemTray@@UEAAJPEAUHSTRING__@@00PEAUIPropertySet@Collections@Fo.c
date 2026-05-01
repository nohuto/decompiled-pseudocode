/*
 * XREFs of ?Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Foundation@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@567@@Z @ 0x1801BB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x1801BBA50 (-CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipActivator::Activate(
        SystemTray::TrayInfoTipActivator *a1,
        HSTRING a2,
        __int64 a3,
        HSTRING a4,
        struct Windows::Foundation::Collections::IPropertySet *a5)
{
  int CanActivate; // eax
  const char *v6; // r9
  __int64 result; // rax
  unsigned __int8 v8[4]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = -2LL;
  try
  {
    CanActivate = SystemTray::TrayInfoTipActivator::CanActivate(a1, a2, a4, a5, v8);
    if ( CanActivate < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipactivator.cpp",
        (const char *)(unsigned int)CanActivate);
    if ( v8[0] )
      result = 0LL;
    else
      result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipactivator.cpp",
                           v6);
  }
  return result;
}
