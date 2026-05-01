/*
 * XREFs of ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E9870 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1800E9B44 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800EA098 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Instance@CommonPeopleTelemetry@@KAPEAV1@XZ @ 0x1800E730C (-Instance@CommonPeopleTelemetry@@KAPEAV1@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x1800E7A6C (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1800ECE78 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_4f9db91f7b3ef4e45d712402b4d08f96___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PeoplePaneViewManager::NotifyListeners(__int64 a1, int a2, const unsigned __int16 *a3, int a4)
{
  _DWORD *v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rax
  int v12; // ebx
  IUnknown **v13; // rax
  __int64 v14; // rcx
  void *v15; // [rsp+40h] [rbp-11h] BYREF
  __int64 v16; // [rsp+48h] [rbp-9h]
  __int64 v17; // [rsp+50h] [rbp-1h]
  char v18; // [rsp+58h] [rbp+7h]
  __int64 v19; // [rsp+60h] [rbp+Fh] BYREF
  int v20; // [rsp+68h] [rbp+17h]
  LPVOID pv; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  char v24; // [rsp+88h] [rbp+37h]
  int v25; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v27; // [rsp+B8h] [rbp+67h] BYREF

  v8 = (_DWORD *)*((_QWORD *)CommonPeopleTelemetry::Instance() + 1);
  if ( v8 && *v8 )
  {
    CommonPeopleTelemetry::Instance();
    CommonPeopleTelemetry::PeoplePaneViewChanged_(v9, a2);
  }
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v15,
          a3,
          0xFFFFFFFFFFFFFFFFuLL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x324,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
  v19 = a1;
  v20 = a2;
  v22 = v16;
  v23 = v17;
  v11 = v15;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  pv = v11;
  v24 = 0;
  v18 = 1;
  v25 = a4;
  v12 = *(_DWORD *)(a1 + 212);
  v13 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
                       &v27,
                       &v19);
  Windows::Internal::ComTaskPool::RunTask(0, 2u, v12, 0, *v13, 0LL);
  v14 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( pv )
    CoTaskMemFree(pv);
}
