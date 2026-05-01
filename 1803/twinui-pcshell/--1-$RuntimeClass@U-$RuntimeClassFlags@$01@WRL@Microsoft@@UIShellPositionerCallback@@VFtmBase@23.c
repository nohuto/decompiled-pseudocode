/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800256E4
 * Callers:
 *     ??_E?$ShellPositionerCallback@V_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x180025590 (--_E-$ShellPositionerCallback@V_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_@@@Details@ShellPosition.c)
 *     ??_G?$ShellPositionerCallback@V_lambda_f1e02a3692b4c9337fd01f6030d19989_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x18009D820 (--_G-$ShellPositionerCallback@V_lambda_f1e02a3692b4c9337fd01f6030d19989_@@@Details@ShellPosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 44) = -1073741823;
  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
