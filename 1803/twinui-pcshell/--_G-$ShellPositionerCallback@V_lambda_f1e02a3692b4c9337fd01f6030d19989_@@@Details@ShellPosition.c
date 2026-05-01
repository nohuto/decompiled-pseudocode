/*
 * XREFs of ??_G?$ShellPositionerCallback@V_lambda_f1e02a3692b4c9337fd01f6030d19989_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x18009D820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800256E4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWinRTApplicationView **__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_f1e02a3692b4c9337fd01f6030d19989_>::`scalar deleting destructor'(
        CWinRTApplicationView **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1 + 6);
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
