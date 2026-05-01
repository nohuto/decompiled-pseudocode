/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x18010EDA8
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r15d
  HWND v8; // rdx
  CCriticalFailureHandler *v9; // rcx
  int v10; // ebx
  CCriticalFailureHandler *v11; // rcx
  CCriticalFailureHandler *v12; // rcx
  unsigned int i; // edi
  __int64 v14; // rbx
  CCriticalFailureHandler *v15; // rcx
  unsigned __int64 *v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-38h]
  unsigned __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  void *v20[3]; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  v20[1] = (void *)-2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 384) & -(__int64)(this != 0LL));
  v20[2] = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v21 = v7;
  v20[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  CApplicationManager::_IWMFromWindow(this, v8, &GUID_611aa8fe_b694_4129_86af_2c2553fff785, v20);
  v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, void *))(*(_QWORD *)a3 + 32LL))(a3, v20[0]);
  v22 = v10;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, &v22);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v10 = v22;
  }
  if ( v10 >= 0 )
    goto LABEL_8;
  if ( v10 != -2147024882 && v10 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v9,
      &v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12FFu,
      v17,
      v18);
    v10 = v22;
  }
  if ( v10 >= 0 )
  {
LABEL_8:
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveShellCreationBehavior,
            &GUID_ac46f07f_3544_48d9_b2d3_f57b388ae361,
            &v24);
    v22 = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, &v22);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v10 = v22;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
    if ( v10 != -2147024882 && v10 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v22,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1303u,
        v17,
        v18);
      v10 = v22;
    }
    if ( v10 >= 0 )
    {
LABEL_15:
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v24 + 72LL))(v24, 0LL, &v23);
      v22 = v10;
      for ( i = 0; ; ++i )
      {
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v12, &v22);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v10 = v22;
        }
        if ( v10 < 0 )
        {
          if ( v10 != -2147024882 && v10 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v12,
              &v22,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1308u,
              v17,
              v18);
            v10 = v22;
          }
          if ( v10 < 0 )
            break;
        }
        if ( i >= v23 )
          break;
        v19 = 0LL;
        v14 = v24;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v19);
        v17 = &v19;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *))(*(_QWORD *)v14 + 80LL))(
                v14,
                0LL,
                i,
                &GUID_00000000_0000_0000_c000_000000000046);
        v22 = v10;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v15, &v22);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v10 = v22;
        }
        if ( v10 >= 0 )
          goto LABEL_31;
        if ( v10 != -2147024882 && v10 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v15,
            &v22,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1311u,
            &v19,
            v18);
          v10 = v22;
        }
        if ( v10 >= 0 )
        {
LABEL_31:
          v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned __int64))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  v19);
          v22 = v10;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v19);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v10;
}
