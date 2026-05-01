/*
 * XREFs of ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x1802B99FC
 * Callers:
 *     ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802BA260 (-SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::RecoverPriorities(ShellPositionerManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // edi
  void *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  void *v11; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationView *v12; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 20);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v11);
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 24LL))(v2, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 988LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 991LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v10; ++i )
  {
    v12 = 0LL;
    v7 = v11;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v7 + 32LL))(
           v7,
           i,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v12) >= 0 )
      ShellPositionerManager::GetPositionerPriorityForView(
        this,
        (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v12,
        0LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  }
  v4 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v11);
  return v4;
}
