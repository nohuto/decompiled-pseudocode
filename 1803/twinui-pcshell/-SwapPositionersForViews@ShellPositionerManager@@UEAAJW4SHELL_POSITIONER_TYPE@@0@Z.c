/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1802BA400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800F55B0 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9968 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::SwapPositionersForViews(__int64 a1, unsigned int a2, int a3)
{
  int v3; // edi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  const struct _GUID *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // r14
  void *v15; // rbx
  int v16; // eax
  int PositionerPriorityForView; // eax
  int v18; // esi
  struct IShellPositionerPriority *v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  struct IApplicationView *v27; // [rsp+30h] [rbp-30h] BYREF
  struct IShellPositionerPriority *v28; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  void *v30[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v32; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+50h]
  void *v34; // [rsp+B8h] [rbp+58h] BYREF

  v33 = a3;
  v30[1] = (void *)-2LL;
  v3 = a3;
  v30[0] = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v30);
  v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 24LL))(v6, v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_33;
  }
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
  v11 = CEnumerableObjectCollection::CreateInstance(v10, v9, &v34);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 262LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_32;
  }
  v11 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v34 + 48LL))(v34, v30[0]);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 263LL;
    goto LABEL_9;
  }
  v11 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v32);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 266LL;
    goto LABEL_9;
  }
  if ( !v32 )
    goto LABEL_25;
  v13 = v32 - 1;
  v14 = v32;
  do
  {
    v27 = 0LL;
    v15 = v34;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    v16 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v15 + 32LL))(
            v15,
            v13,
            &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
            &v27);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        271LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_21:
      v21 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v34 + 56LL))(v34, v13);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          298LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v21);
      goto LABEL_23;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v28);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                  (ShellPositionerManager *)(a1 - 88),
                                  (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v27,
                                  &v28);
    v18 = PositionerPriorityForView;
    if ( PositionerPriorityForView >= 0 )
    {
      v19 = v28;
      if ( (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v28 + 24LL))(v28) != a2 )
      {
        v20 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v34 + 56LL))(v34, v13);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            282LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v20);
      }
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD, _QWORD))(*(_QWORD *)v19 + 56LL))(v19, a2, v33);
      ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)(a1 - 88), v27);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        275LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v28);
    if ( v18 < 0 )
      goto LABEL_21;
LABEL_23:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    --v13;
    --v14;
  }
  while ( v14 );
  v3 = v33;
LABEL_25:
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v29);
  v22 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v34)(
          v34,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          &v29);
  v8 = v22;
  if ( v22 < 0 )
  {
    v23 = (unsigned int)v22;
    v24 = 304LL;
    goto LABEL_29;
  }
  v25 = ShellPositionerManager::PerformPositionerHandoff(a1 - 88, v29, 0LL, 0LL, a2, v3);
  v8 = v25;
  if ( v25 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v25);
    v23 = v8;
    v24 = 305LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v23);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v29);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
LABEL_33:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v30);
  return v8;
}
