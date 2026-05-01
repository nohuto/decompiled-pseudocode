/*
 * XREFs of ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1802C6F4C
 * Callers:
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1802C4DA8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1802CE85C (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::GetOperableViews(
        TabletModePositioner *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray **a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  CWinRTApplicationView **v12; // rcx
  __int64 (__fastcall ***v13)(CWin32ApplicationView *, struct _GUID *, void **); // rbx
  struct IApplicationView *v14; // rdx
  int v15; // eax
  CWinRTApplicationView *v17; // [rsp+30h] [rbp-50h] BYREF
  void *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  CWinRTApplicationView *v20; // [rsp+48h] [rbp-38h] BYREF
  TabletModePositionerHelpers *v21; // [rsp+50h] [rbp-30h] BYREF
  void **v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+60h] [rbp-20h] BYREF
  CWinRTApplicationView *v24; // [rsp+68h] [rbp-18h] BYREF
  void **v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  void *v27; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 45);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v28);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v3 + 56LL))(
         v3,
         1LL,
         a2,
         &v28);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v27);
    v7 = v10;
    if ( v10 >= 0 )
    {
      ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
        (__int64)&v18,
        v28);
      LODWORD(v20) = 0;
      v21 = 0LL;
      v22 = &v18;
      ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v20);
      v12 = (CWinRTApplicationView **)&v23;
      v24 = 0LL;
      v23 = v19;
      v25 = &v18;
      while ( 1 )
      {
        ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(v12);
        if ( (_DWORD)v20 == v23 && v22 == v25 )
          break;
        v13 = (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v21;
        v17 = v21;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v17);
        if ( TabletModePositionerHelpers::IsOperableView(v13, v14) )
        {
          v15 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **)))(*(_QWORD *)v27 + 40LL))(
                  v27,
                  v13);
          v7 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x788,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v15);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v18);
            goto LABEL_16;
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
        LODWORD(v20) = (_DWORD)v20 + 1;
        v12 = &v20;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v18);
      v10 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v27)(
              v27,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a3);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 1931LL;
        goto LABEL_5;
      }
      v7 = 0;
    }
    else
    {
      v11 = 1922LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77F,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v28);
  return v7;
}
