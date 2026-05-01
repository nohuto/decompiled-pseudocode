/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180190CB0
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x180191E60 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019590C (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ @ 0x1801995F0 (-Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18008C180 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate_ @ 0x1801907AC (Microsoft--WRL--Details--MakeAndInitialize__WaitForCompletion_Windows--Foundation--IAsyncActionC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  APTTYPE v8; // [rsp+20h] [rbp-30h]
  APTTYPEQUALIFIER v9; // [rsp+28h] [rbp-28h]
  void *v10[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  v12 = a2;
  v14 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v13 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate_(&v13);
  v12 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v13);
    v12 = v4;
    if ( v4 >= 0 )
    {
      v10[0] = *(void **)(v13 + 56);
      v10[1] = 0LL;
      v5 = SHProcessMessagesUntilEventsEx((HWND)v10[0], v10, 1u, 0xFFFFFFFF, v8, v9);
      v6 = v12;
      if ( v5 == -1 )
        v6 = -2147467259;
      v12 = v6;
      v11 = 0LL;
      if ( v6 >= 0 && *(_DWORD *)(v13 + 48) != 1 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
               a1,
               &GUID_00000036_0000_0000_c000_000000000046,
               &v11) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 64LL))(v11, &v12);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      v4 = v12;
    }
  }
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v4;
}
