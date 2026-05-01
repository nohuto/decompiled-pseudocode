/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1800588F4
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800596D4 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_Sdl @ 0x1800522DC (WPP_SF_Sdl.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180052660 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18005AFC4 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, __int64 a3, int a4)
{
  bool v7; // di
  bool v8; // si
  struct IUnknown *v9; // rcx
  __m128i si128; // xmm6
  HWND ApplicationWindow; // rax
  void *v12; // rcx
  unsigned int v13; // ebx
  void *v14; // rdx
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
  v7 = (*(_DWORD *)(a1 + 536) & 4) != 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdl(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)a2,
      a3,
      *(const wchar_t **)(a1 + 544),
      *(_DWORD *)(a1 + 552),
      1);
  v16 = 0LL;
  if ( v7 )
  {
    v17 = 0LL;
    v18 = 1;
    (*(void (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)(a1 + 56) + 32LL))(
      a1 + 56,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v17);
    v8 = (int)IAMPrivate_QueryObject(
                v17,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &v16) >= 0;
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    }
    if ( v8 )
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
      v26 = v7;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v16 + 40LL))(v16, &v19) < 0 )
      {
        v12 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  v13 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264),
          a2);
  v14 = v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 48LL))(v16);
    v14 = v16;
  }
  if ( v14 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v13;
}
