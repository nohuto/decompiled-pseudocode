/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18007C460
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18007CBF0 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x18007A9A0 (-GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileg.c)
 *     ?GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x18007AA34 (-GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivilege.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AsyncWindowPlacement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007E428 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AsyncWindowPlacement@@@wil@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWin32ApplicationView::SetPosition(CWin32ApplicationView *this, struct IApplicationViewPosition *a2)
{
  HWND v3; // r15
  int v4; // eax
  int LastError; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // esi
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 *PrivilegedTabletModeOperations; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 *PrivilegedArrangementOperations; // rax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v30; // [rsp+54h] [rbp-B4h]
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v33[44]; // [rsp+68h] [rbp-A0h]
  WINDOWPLACEMENT wndpl; // [rsp+98h] [rbp-70h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-40h]
  _DWORD v36[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-30h]
  __m128i v38; // [rsp+E8h] [rbp-20h]
  _BYTE v39[16]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v35 = -2LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21));
  v32 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v32) < 0 )
    goto LABEL_24;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v32 + 72LL))(v32, v36);
  LastError = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 432LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v6);
    goto LABEL_48;
  }
  *(_DWORD *)v33 = 44;
  v8 = v36[0];
  *(_DWORD *)&v33[4] = v36[0];
  *(_DWORD *)&v33[8] = v36[1];
  *(_OWORD *)&v33[12] = v37;
  *(__m128i *)&v33[28] = v38;
  *(_OWORD *)&wndpl.length = *(_OWORD *)v33;
  *(_OWORD *)&wndpl.ptMinPosition.y = *(_OWORD *)&v33[16];
  *(_QWORD *)&wndpl.rcNormalPosition.top = *(__int64 *)((char *)v38.m128i_i64 + 4);
  wndpl.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AsyncWindowPlacement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AsyncWindowPlacement>::GetCachedFeatureEnabledState();
  LODWORD(v27[0]) = 0;
  BYTE4(v27[0]) = 3;
  v29 = 0;
  v30 = WORD2(v27[0]);
  v9 = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AsyncWindowPlacement>::GetFeaturePropertyCache'::`2'::data,
    0x9032DCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v29,
    1,
    3);
  wndpl.flags = v8 | 4;
  if ( SetWindowPlacement(v3, &wndpl) )
    goto LABEL_20;
  if ( GetLastError() != 5 )
  {
    v11 = 885LL;
    goto LABEL_13;
  }
  if ( wndpl.showCmd != 1 )
  {
    if ( wndpl.showCmd == 3 )
      goto LABEL_15;
    if ( wndpl.showCmd != 4 && wndpl.showCmd != 9 )
    {
      v11 = 879LL;
LABEL_13:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v11,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    v10);
      goto LABEL_21;
    }
  }
  v9 = 4;
LABEL_15:
  PrivilegedTabletModeOperations = ApplicationViewManagement::CGlobals::GetPrivilegedTabletModeOperations(v27);
  LastError = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*PrivilegedTabletModeOperations
                                                                               + 32LL))(
                *PrivilegedTabletModeOperations,
                v3,
                v9,
                0LL,
                0LL);
  v13 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x36B,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)LastError);
    goto LABEL_21;
  }
LABEL_20:
  LastError = 0;
LABEL_21:
  if ( LastError < 0 )
  {
    v6 = (unsigned int)LastError;
    v7 = 435LL;
    goto LABEL_23;
  }
LABEL_24:
  v28 = 0LL;
  v14 = (**(__int64 (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
          a2,
          &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
          &v28);
  LastError = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 440LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v15);
    goto LABEL_46;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 32LL))(v28, &v31);
  LastError = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v16 = 444LL;
    goto LABEL_44;
  }
  if ( (_DWORD)v31 == 4 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 24LL))(v28, v39);
    LastError = v18;
    if ( v18 < 0 )
    {
      v15 = (unsigned int)v18;
      v16 = 450LL;
      goto LABEL_44;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 40LL))(v28, &v29);
    LastError = v19;
    if ( v19 < 0 )
    {
      v15 = (unsigned int)v19;
      v16 = 453LL;
      goto LABEL_44;
    }
    PrivilegedArrangementOperations = ApplicationViewManagement::CGlobals::GetPrivilegedArrangementOperations(v27);
    LastError = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, int))(*(_QWORD *)*PrivilegedArrangementOperations
                                                                               + 24LL))(
                  *PrivilegedArrangementOperations,
                  v3,
                  v39,
                  0LL,
                  v29);
    v21 = v27[0];
    if ( v27[0] )
    {
      v27[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( LastError < 0 )
    {
      v16 = 454LL;
LABEL_43:
      v15 = (unsigned int)LastError;
      goto LABEL_44;
    }
  }
  else if ( !v32 && (_DWORD)v31 == 3 )
  {
    v22 = ApplicationViewManagement::CGlobals::GetPrivilegedTabletModeOperations(v27);
    LastError = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)*v22 + 32LL))(*v22, v3, 5LL);
    v23 = v27[0];
    if ( v27[0] )
    {
      v27[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( LastError < 0 )
    {
      v16 = 461LL;
      goto LABEL_43;
    }
  }
  LastError = 0;
LABEL_46:
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_48:
  v25 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)LastError;
}
