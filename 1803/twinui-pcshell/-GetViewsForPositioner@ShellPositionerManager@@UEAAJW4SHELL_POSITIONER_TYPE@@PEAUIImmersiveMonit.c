/*
 * XREFs of ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1802B94E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180305810 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::GetViewsForPositioner(
        __int64 a1,
        int a2,
        struct IApplicationView *a3,
        _QWORD *a4)
{
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int i; // edi
  void *v17; // rbx
  struct IImmersiveMonitor *v18; // r8
  void *v20; // [rsp+30h] [rbp-20h] BYREF
  void *v21; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF
  struct IApplicationView *v25; // [rsp+98h] [rbp+48h] BYREF

  v22[1] = (struct IShellPositionerPriority *)-2LL;
  *a4 = 0LL;
  v21 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v21);
  v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 32LL))(v8, &v21);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 327LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v20);
    v10 = v14;
    if ( v14 >= 0 )
    {
      for ( i = 0; i < v24; ++i )
      {
        v25 = 0LL;
        v17 = v21;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v17 + 32LL))(
               v17,
               i,
               &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
               &v25) >= 0
          && (!a3 || ApplicationViewHelpers::IsViewOnMonitor(v25, a3, v18)) )
        {
          v22[0] = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v22);
          if ( (int)ShellPositionerManager::GetPositionerPriorityForView(
                      (ShellPositionerManager *)(a1 - 88),
                      (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v25,
                      v22) >= 0
            && (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22[0] + 24LL))(v22[0]) == a2 )
          {
            (*(void (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)v20 + 40LL))(v20, v25);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v22);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
      }
      v14 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v20)(
              v20,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a4);
      v10 = v14;
      if ( v14 >= 0 )
        goto LABEL_20;
      v15 = 350LL;
    }
    else
    {
      v15 = 330LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_21;
  }
  v11 = 324LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_21:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v21);
  return v10;
}
