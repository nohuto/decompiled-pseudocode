/*
 * XREFs of ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801AE880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180020F20 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1801AAD14 (--$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _LogEventWithViewHostItemData @ 0x1801B2B30 (_LogEventWithViewHostItemData.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall HolographicPositioner::GetLastActiveItem(
        HolographicPositioner *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct IApplicationView *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v11; // rbx
  CWinRTApplicationView *v13; // [rsp+20h] [rbp-49h] BYREF
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v14; // [rsp+28h] [rbp-41h] BYREF
  __int64 v15; // [rsp+30h] [rbp-39h] BYREF
  CWinRTApplicationView *v16; // [rsp+38h] [rbp-31h] BYREF
  CWinRTApplicationView *v17; // [rsp+40h] [rbp-29h] BYREF
  struct IApplicationView *v18; // [rsp+48h] [rbp-21h] BYREF
  void **v19; // [rsp+50h] [rbp-19h]
  unsigned __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  void *v21; // [rsp+60h] [rbp-9h] BYREF
  int v22; // [rsp+68h] [rbp-1h]
  CWinRTApplicationView *v23; // [rsp+70h] [rbp+7h] BYREF
  CWinRTApplicationView *v24; // [rsp+78h] [rbp+Fh] BYREF
  void **v25; // [rsp+80h] [rbp+17h]
  __int64 v26; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v28; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  int v30; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = -2LL;
  *a2 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
      (__int64)&v21,
      v15);
    LODWORD(v17) = 0;
    v18 = 0LL;
    v19 = &v21;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v17);
    LODWORD(v23) = v22;
    v24 = 0LL;
    v25 = &v21;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v23);
    while ( (_DWORD)v17 != (_DWORD)v23 || v19 != v25 )
    {
      v8 = v18;
      v13 = v18;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v13);
      if ( (int)HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 24), v8, &v29) >= 0 && v29 )
      {
        HolographicPositioner::_FindViewHostItem((char *)this - 160, &v31, v8);
        v9 = v31;
        if ( v31 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 80LL))(v31, &v28) >= 0 && (_BYTE)v28 )
        {
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 120LL))(v9, &v30) >= 0 && v30 == 1 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v16, &v13);
            Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)&v14, &v31);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
            break;
          }
          if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)v8 + 184LL))(v8, &v20) >= 0
            && v20 > v4 )
          {
            v4 = v20;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v16, &v13);
            Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)&v14, &v31);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
      LODWORD(v17) = (_DWORD)v17 + 1;
      ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v17);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v21);
    if ( v16 )
    {
      v11 = v14;
      LogEventWithViewHostItemData(
        v14,
        HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const *,unsigned int &>);
      v14 = 0LL;
      *a2 = v11;
    }
    else
    {
      v28 = 0;
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(v10, &v28);
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return v7;
}
