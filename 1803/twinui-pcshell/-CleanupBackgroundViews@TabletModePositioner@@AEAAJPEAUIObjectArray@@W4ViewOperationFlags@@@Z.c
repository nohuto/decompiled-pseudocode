/*
 * XREFs of ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1802C4DA8
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1802C7EC4 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1802C801C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1802CE85C (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1802C5C5C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIAp.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1802C6F4C (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::CleanupBackgroundViews(__int64 a1, struct IObjectArray *a2, char a3)
{
  HRESULT OperableViews; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CWinRTApplicationView **v9; // rcx
  CWinRTApplicationView *v10; // rdi
  struct IApplicationView *v11; // rcx
  int inited; // eax
  __int64 v13; // rdx
  void *v14; // rbx
  void *ppvOut; // [rsp+20h] [rbp-49h] BYREF
  struct IObjectArray *v17; // [rsp+28h] [rbp-41h] BYREF
  CWinRTApplicationView *v18; // [rsp+30h] [rbp-39h] BYREF
  CWinRTApplicationView *v19; // [rsp+38h] [rbp-31h] BYREF
  void **v20; // [rsp+40h] [rbp-29h]
  CWinRTApplicationView *v21; // [rsp+48h] [rbp-21h] BYREF
  void *v22; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+58h] [rbp-11h]
  int v24; // [rsp+60h] [rbp-9h] BYREF
  CWinRTApplicationView *v25; // [rsp+68h] [rbp-1h] BYREF
  void **v26; // [rsp+70h] [rbp+7h]
  __int128 v27; // [rsp+78h] [rbp+Fh] BYREF
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]
  int v30; // [rsp+90h] [rbp+27h]
  int v31; // [rsp+94h] [rbp+2Bh]
  int v32; // [rsp+98h] [rbp+2Fh]
  int v33; // [rsp+9Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = 0LL;
  if ( a2 )
  {
    ppvOut = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&ppvOut);
    ppvOut = v17;
    v17 = a2;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&ppvOut);
LABEL_9:
    ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
      (__int64)&v22,
      (__int64)v17);
    LODWORD(v18) = 0;
    v19 = 0LL;
    v20 = &v22;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
    v9 = (CWinRTApplicationView **)&v24;
    v25 = 0LL;
    v24 = v23;
    v26 = &v22;
    while ( 1 )
    {
      ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(v9);
      if ( (_DWORD)v18 == v24 && v20 == v26 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v22);
        v7 = 0;
        goto LABEL_23;
      }
      v10 = v19;
      v21 = v19;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, CWinRTApplicationView *))(**(_QWORD **)(a1 + 248) + 184LL))(
              *(_QWORD *)(a1 + 248),
              v10) )
        break;
LABEL_21:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
      LODWORD(v18) = (_DWORD)v18 + 1;
      v9 = &v18;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
               v11,
               (struct IApplicationViewOperation **)&ppvOut);
    if ( inited >= 0 )
    {
      v14 = ppvOut;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 96LL))(ppvOut, 0LL);
      if ( (a3 & 1) != 0 )
      {
        v28 = 0;
        v30 = 0;
        v31 = 0;
        v27 = 0LL;
        v32 = 3;
        v29 = 1;
        v33 = 1;
        (*(void (__fastcall **)(void *, __int128 *))(*(_QWORD *)v14 + 128LL))(v14, &v27);
      }
      inited = (*(__int64 (__fastcall **)(CWinRTApplicationView *, void *))(*(_QWORD *)v10 + 320LL))(v10, v14);
      if ( inited >= 0 )
        goto LABEL_20;
      v13 = 1630LL;
    }
    else
    {
      v13 = 1617LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_21;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  OperableViews = IUnknown_QueryService(
                    *(IUnknown **)(a1 + 16),
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &ppvOut);
  v7 = OperableViews;
  if ( OperableViews >= 0 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v17);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v17);
    v7 = OperableViews;
    if ( OperableViews >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v8 = 1606LL;
  }
  else
  {
    v8 = 1605LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)OperableViews);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
LABEL_23:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v17);
  return v7;
}
