/*
 * XREFs of ??$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@ZW42@W43@PEAVWindowArrangementView@@@SmartCookie@@QEAAJPEAUIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@Z12PEAVWindowArrangementView@@@Z @ 0x1802D9DEC
 * Callers:
 *     _lambda_adf88bafc3ef94521e0755b235cf6fdc_::operator() @ 0x1802DA21C (_lambda_adf88bafc3ef94521e0755b235cf6fdc_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800A3D80 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     wistd::function_long___cdecl(unsigned_long)_::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c___ @ 0x1802D26EC (wistd--function_long___cdecl(unsigned_long)_--operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c.c)
 */

__int64 SmartCookie::Register<IShellTargetingContractManager,long (IShellTargetingContractManager::*)(enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,IShellTargetingContractNotification *,unsigned long *),long (IShellTargetingContractManager::*)(unsigned long),enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,WindowArrangementView *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 112) )
  {
    v5 = -2147019873;
    v6 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
  if ( v5 < 0 )
  {
    v6 = 41LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
  v8[1] = (__int64) IVirtualDesktopNotification::`vcall'{32,{flat}};
  wistd::function_long___cdecl_unsigned_long__::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c___((_QWORD *)a1, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return 0LL;
}
