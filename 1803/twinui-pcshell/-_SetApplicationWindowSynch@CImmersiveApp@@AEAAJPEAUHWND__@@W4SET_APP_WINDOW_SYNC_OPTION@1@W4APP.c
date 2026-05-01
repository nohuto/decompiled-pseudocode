/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180131DE8
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180132104 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005DC44 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180071448 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdl @ 0x18013291C (WPP_SF_Sdl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, int a3, int a4)
{
  int v7; // ebx
  bool v8; // r15
  __int64 (__fastcall *v9)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v10; // rcx
  bool v11; // bl
  __m128i si128; // xmm6
  HWND ApplicationWindow; // rax
  unsigned int v14; // ebx
  void *v16; // [rsp+38h] [rbp-59h] BYREF
  struct IUnknown *v17; // [rsp+40h] [rbp-51h] BYREF
  int v18; // [rsp+48h] [rbp-49h]
  __m128i v19; // [rsp+58h] [rbp-39h] BYREF
  int v20; // [rsp+68h] [rbp-29h]
  int v21; // [rsp+6Ch] [rbp-25h]
  int v22; // [rsp+70h] [rbp-21h]
  HWND v23; // [rsp+78h] [rbp-19h]
  HWND v24; // [rsp+80h] [rbp-11h]
  _BYTE *v25; // [rsp+88h] [rbp-9h]
  bool v26; // [rsp+90h] [rbp-1h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  _BYTE v28[16]; // [rsp+A0h] [rbp+Fh] BYREF

  v27 = -2LL;
  v18 = 0;
  v7 = *(_DWORD *)(a1 + 536) & 4;
  v8 = v7 != 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdl(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, *(_QWORD *)(a1 + 544), *(_DWORD *)(a1 + 552), 1);
  v16 = 0LL;
  if ( v7 )
  {
    v17 = 0LL;
    v18 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v17);
    v9 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*(_QWORD *)(a1 + 48) + 32LL);
    v10 = (RTL_SRWLOCK *)(a1 + 48);
    if ( v9 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v10, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v17);
    else
      v9(v10, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v11 = (int)IAMPrivate_QueryObject(
                 v17,
                 &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                 &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                 &v16) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v17);
    if ( v11 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      (*(void (__fastcall **)(__int64, struct IUnknown **, _BYTE *))(*(_QWORD *)(a1 + 112) + 328LL))(
        a1 + 112,
        &v17,
        v28);
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264));
      v19 = si128;
      v20 = 0;
      v21 = 6;
      v22 = a4;
      v23 = ApplicationWindow;
      v24 = a2;
      v25 = v28;
      v26 = v8;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v16 + 40LL))(v16, &v19) < 0 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
  }
  v14 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264),
          a2);
  if ( v16 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 48LL))(v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v14;
}
