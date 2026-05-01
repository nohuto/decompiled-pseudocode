/*
 * XREFs of ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1801C3F90
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C1208 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801C1EA8 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C29C0 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C44C0 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1801BEEF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___--CTaskW.c)
 *     ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x1801BF6A4 (--$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneVi.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PeoplePaneViewManager::NotifyListeners(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi
  void *v11; // rbx
  void *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-11h] BYREF
  __int64 v14; // [rsp+48h] [rbp-9h]
  __int64 v15; // [rsp+50h] [rbp-1h]
  char v16; // [rsp+58h] [rbp+7h]
  __int64 v17; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v18; // [rsp+68h] [rbp+17h]
  _QWORD v19[3]; // [rsp+70h] [rbp+1Fh] BYREF
  char v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  void *v23; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+C0h] [rbp+6Fh] BYREF

  v24 = a2;
  CommonPeopleTelemetry::PeoplePaneViewChanged<enum PeoplePaneViewChange &>(&v24);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v13,
         a3,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1009LL,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
  v17 = a1;
  v18 = a2;
  v19[1] = v14;
  v19[2] = v15;
  v9 = v13;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v19[0] = v9;
  v20 = 0;
  v16 = 1;
  v21 = a4;
  v10 = *(_DWORD *)(a1 + 500);
  v11 = 0LL;
  v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
                    (__int64)v12,
                    (__int64)&v17);
  v23 = v11;
  Windows::Internal::ComTaskPool::RunTask(0, 2u, v10, 0, (struct Windows::Internal::IComPoolTask *)v11, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v23);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
}
