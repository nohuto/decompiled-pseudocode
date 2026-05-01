/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180040AE4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66__&___ptr64__1_long_::Invoke @ 0x180046B30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046B30.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180040DD0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  char v6; // r15
  RTL_SRWLOCK *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  int GlomForWindow; // eax
  struct IImmersiveApplicationInternal *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-49h] BYREF
  struct IImmersiveApplicationInternal *v22[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-29h]
  __int128 v24; // [rsp+60h] [rbp-21h]
  _OWORD v25[2]; // [rsp+78h] [rbp-9h] BYREF
  char v26; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  bool v28; // [rsp+E8h] [rbp+67h] BYREF
  int v29; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+100h] [rbp+7Fh] BYREF

  v23 = -2LL;
  *(_QWORD *)&v24 = this;
  *((_QWORD *)&v24 + 1) = a2;
  v25[1] = v24;
  v6 = 1;
  v26 = 1;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)&v24 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(struct _GUID *)v22 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal **, int *))(**((_QWORD **)this + 24)
                                                                                         + 24LL))(
         *((_QWORD *)this + 24),
         v22,
         &v29);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x453,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_18:
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    goto LABEL_29;
  }
  if ( v29 )
  {
    v21 = 0LL;
    v10 = *((_QWORD *)this + 24);
    *(struct _GUID *)v22 = *a2;
    (*(void (__fastcall **)(__int64, struct IImmersiveApplicationInternal **, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 56LL))(
      v10,
      v22,
      &v21);
    v22[0] = 0LL;
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, v22, &v28);
    v9 = GlomForWindow;
    v12 = v22[0];
    if ( GlomForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x45E,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)GlomForWindow);
LABEL_14:
      if ( v12 )
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v12 + 16LL))(v12);
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
      }
      goto LABEL_18;
    }
    if ( v28 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x463,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_14;
    }
    v30 = 0LL;
    v13 = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v30);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 1127LL;
      goto LABEL_12;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, __int64, _QWORD))(**((_QWORD **)this + 16) + 88LL))(
            *((_QWORD *)this + 16),
            a3,
            v12,
            v30,
            0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 1128LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
      v15 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_14;
    }
    v17 = *((_QWORD *)this + 24);
    v25[0] = *a2;
    (*(void (__fastcall **)(__int64, _OWORD *, __int64, __int64))(*(_QWORD *)v17 + 40LL))(v17, v25, 2LL, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 168LL))(*((_QWORD *)this + 16), v30);
    v18 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v12 )
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v12 + 16LL))(v12);
    v19 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
    }
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v6 = 0;
  v9 = 0;
LABEL_29:
  if ( v6 )
    CAppViewManager::_ObliterateOperation(this, a2);
  return v9;
}
