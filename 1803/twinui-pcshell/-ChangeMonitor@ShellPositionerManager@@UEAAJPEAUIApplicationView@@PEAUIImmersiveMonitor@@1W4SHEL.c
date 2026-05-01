/*
 * XREFs of ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802B8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800F55B0 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9864 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x180305654 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ChangeMonitor(
        __int64 a1,
        ApplicationViewHelpers *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // edi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  ShellPositionerManager *v11; // r14
  int PositionerPriorityForView; // eax
  __int64 v13; // rdx
  struct IShellPositionerPriority *v14; // rdi
  int v15; // r12d
  unsigned int v16; // r15d
  __int64 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct IShellPositionerPriority *v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF

  v20 = a3;
  v17[1] = -2LL;
  if ( a2 )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v17[0] = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v17);
    if ( ApplicationFromView )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
      v11 = (ShellPositionerManager *)(a1 - 88);
      PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                    v11,
                                    (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2,
                                    &v19);
      v8 = PositionerPriorityForView;
      if ( PositionerPriorityForView >= 0 )
      {
        v14 = v19;
        v15 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v19 + 24LL))(v19);
        v16 = a5;
        if ( v15 != a5 )
        {
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, a5);
          ShellPositionerManager::PersistPositionerPriority(v11, a2);
        }
        if ( v20
          || (PositionerPriorityForView = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)a2 + 80LL))(
                                            a2,
                                            &v20),
              v8 = PositionerPriorityForView,
              PositionerPriorityForView >= 0) )
        {
          (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)ApplicationFromView
                                                                                  + 224LL))(
            ApplicationFromView,
            a4,
            0LL);
          PositionerPriorityForView = ShellPositionerManager::PerformPositionerHandoff(v11, a2, v20, a4, v15, v16);
          v8 = PositionerPriorityForView;
          if ( PositionerPriorityForView >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
            return 0LL;
          }
          v13 = 399LL;
        }
        else
        {
          v13 = 387LL;
        }
      }
      else
      {
        v13 = 375LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
    }
    else
    {
      v8 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)0x80004001LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    return v8;
  }
  if ( a3 )
  {
    v8 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)0x80004001LL);
    return v8;
  }
  return 0LL;
}
