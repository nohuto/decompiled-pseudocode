/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180056304
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800570C8 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     WPP_SF_Sdl @ 0x18004FDAC (WPP_SF_Sdl.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180050130 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, __int64 a3, int a4)
{
  bool v7; // di
  struct IUnknown **GITSitePtr; // rsi
  bool v9; // si
  __int64 v10; // rcx
  __m128i si128; // xmm6
  HWND ApplicationWindow; // rax
  void *v13; // rcx
  unsigned int v14; // ebx
  void *v15; // rdx
  void *v17; // [rsp+38h] [rbp-49h] BYREF
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  __m128i v19; // [rsp+48h] [rbp-39h] BYREF
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  int v22; // [rsp+60h] [rbp-21h]
  HWND v23; // [rsp+68h] [rbp-19h]
  HWND v24; // [rsp+70h] [rbp-11h]
  _BYTE *v25; // [rsp+78h] [rbp-9h]
  bool v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  _BYTE v28[16]; // [rsp+90h] [rbp+Fh] BYREF

  v27 = -2LL;
  v7 = (*(_DWORD *)(a1 + 496) & 4) != 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdl(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)a2,
      a3,
      *(const wchar_t **)(a1 + 504),
      *(_DWORD *)(a1 + 512),
      1);
  v17 = 0LL;
  if ( v7 )
  {
    GITSitePtr = (struct IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(a1 + 40, &v18);
    v9 = (int)IAMPrivate_QueryObject(
                *GITSitePtr,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &v17) >= 0;
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)(a1 + 88) + 328LL))(a1 + 88, &v18, v28);
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224));
      v19 = si128;
      v20 = 0;
      v21 = 6;
      v22 = a4;
      v23 = ApplicationWindow;
      v24 = a2;
      v25 = v28;
      v26 = v7;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v17 + 40LL))(v17, &v19) < 0 )
      {
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
  }
  v14 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224),
          a2);
  v15 = v17;
  if ( v17 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 48LL))(v17);
    v15 = v17;
  }
  if ( v15 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v14;
}
