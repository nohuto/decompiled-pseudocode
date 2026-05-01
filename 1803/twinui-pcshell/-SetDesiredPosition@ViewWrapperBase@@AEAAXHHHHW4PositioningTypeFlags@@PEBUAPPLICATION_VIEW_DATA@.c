/*
 * XREFs of ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004F360
 * Callers:
 *     ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18004F960 (-SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004FC50 (-SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1801E6530 (-SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180054D40 (-SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18005AF80 (-v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1801CB850 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::SetDesiredPosition(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        __int128 *a7)
{
  RTL_SRWLOCK *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // di
  char v15; // r13
  bool v16; // r15
  int v17; // ecx
  int v18; // r14d
  bool (__fastcall *v19)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *); // rax
  bool HasViewDataChanged; // al
  char v21; // si
  struct IUnknown *v22; // rdx
  ViewManagerBridge *v23; // rcx
  const struct tagRECT *v24; // r8
  void (__fastcall *v25)(ViewManagerBridge *__hidden, struct IUnknown *, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *); // rax
  unsigned int v26; // ecx
  int v27; // r8d
  int v28; // r14d
  int cy; // r13d
  UINT uFlags; // eax
  const char *v31; // r9
  _DWORD v32[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+50h] [rbp-49h]
  RTL_SRWLOCK *v34; // [rsp+58h] [rbp-41h]
  __int128 v35; // [rsp+60h] [rbp-39h] BYREF
  __int128 v36; // [rsp+70h] [rbp-29h]
  int v37; // [rsp+80h] [rbp-19h]
  __int128 v38; // [rsp+88h] [rbp-11h] BYREF
  __int128 v39; // [rsp+98h] [rbp-1h]
  int v40; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]

  v33 = -2LL;
  v11 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 168) + 296LL);
  AcquireSRWLockExclusive(v11);
  v34 = v11;
  *(_BYTE *)(a1 + 508) = 1;
  v14 = a6;
  if ( (a6 & 1) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 200) == __PAIR64__(a3, a2) )
    {
      v14 = a6 & 0xFE;
    }
    else
    {
      v26 = a3 - *(_DWORD *)(a1 + 204);
      *(_DWORD *)(a1 + 200) = a2;
      *(_DWORD *)(a1 + 208) += a2 - v12;
      *(_DWORD *)(a1 + 212) += v26;
      *(_DWORD *)(a1 + 204) = a3;
    }
  }
  v15 = 0;
  if ( (v14 & 2) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 200);
    if ( *(_DWORD *)(a1 + 208) - (_DWORD)v12 == a4 && *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 204) == a5 )
    {
      if ( !IsPPIEdition() )
        v14 &= ~2u;
    }
    else
    {
      *(_DWORD *)(a1 + 208) = v12 + a4;
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 204) + a5;
      v15 = 1;
    }
  }
  v16 = 0;
  v35 = *(_OWORD *)(a1 + 220);
  v36 = *(_OWORD *)(a1 + 236);
  v37 = *(_DWORD *)(a1 + 252);
  v17 = *(_DWORD *)(a1 + 256);
  if ( v17 == 1 )
    DWORD2(v36) = *(_DWORD *)(a1 + 260);
  if ( a7 )
  {
    v38 = *a7;
    v39 = a7[1];
    v40 = *((_DWORD *)a7 + 8);
    if ( v17 == 1 )
    {
      v18 = *(_DWORD *)(a1 + 260);
      DWORD2(v39) = v18;
    }
    else
    {
      v18 = DWORD2(v39);
    }
    v19 = *(bool (__fastcall **)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)a1 + 128LL);
    if ( v19 == UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged )
    {
      HasViewDataChanged = UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged(
                             (UAPViewWrapper *)a1,
                             (const struct APPLICATION_VIEW_DATA *)&v35,
                             (const struct APPLICATION_VIEW_DATA *)&v38);
    }
    else
    {
      HasViewDataChanged = v19(
                             (UAPViewWrapper *)a1,
                             (const struct APPLICATION_VIEW_DATA *)&v35,
                             (const struct APPLICATION_VIEW_DATA *)&v38);
      v18 = DWORD2(v39);
    }
    v16 = HasViewDataChanged;
    *(_OWORD *)(a1 + 220) = *a7;
    *(_OWORD *)(a1 + 236) = a7[1];
    *(_DWORD *)(a1 + 252) = *((_DWORD *)a7 + 8);
    if ( DWORD2(v36) != v18 )
    {
      v32[0] = 1;
      v32[1] = v18;
      ViewEventDispatcher::HostViewStateOverridesChanged(
        *(ViewEventDispatcher **)(a1 + 168),
        *(_DWORD *)(a1 + 148),
        (const struct HostViewStateOverrides *)v32);
    }
    v35 = v38;
    v36 = v39;
    v37 = v40;
  }
  if ( (v14 & 3) != 0 || v16 )
  {
    LOBYTE(v13) = v16;
    LOBYTE(v12) = v15;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, v12, v13);
    v21 = v14;
    if ( *(_QWORD *)(a1 + 264) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
        v21 = v14 & 0xFD;
      v27 = *(_DWORD *)(a1 + 200);
      v28 = *(_DWORD *)(a1 + 208) - v27;
      cy = *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 204);
      uFlags = (2 * ((v21 & 1) == 0) + 82964) | 1;
      if ( (v21 & 2) != 0 )
        uFlags = 2 * ((v21 & 1) == 0) + 82964;
      if ( SetWindowPos(*(HWND *)(a1 + 264), 0LL, v27, *(_DWORD *)(a1 + 204), v28, cy, uFlags) )
        WindowReadyState::PosChanged((WindowReadyState *)(a1 + 352), v28, cy);
      else
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x938,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          v31);
    }
    if ( (v14 & 2) != 0 || v16 )
    {
      v22 = *(struct IUnknown **)(a1 + 192);
      if ( v22 )
      {
        v23 = *(ViewManagerBridge **)(*(_QWORD *)(a1 + 168) + 520LL);
        v24 = (const struct tagRECT *)(a1 + 200);
        v25 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v23 + 64LL);
        if ( v25 == ViewManagerBridge::SetBoundsForView )
          ViewManagerBridge::SetBoundsForView(v23, v22, v24, (const struct APPLICATION_VIEW_DATA *)&v35);
        else
          v25(v23, v22, v24, (const struct APPLICATION_VIEW_DATA *)&v35);
      }
    }
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
}
