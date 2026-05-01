/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18003F14C
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__&___ptr64_1__1_::Invoke @ 0x180044A70 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x18003F41C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800412E0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  int GlomForWindow; // eax
  struct IImmersiveApplicationInternal *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-49h] BYREF
  struct IImmersiveApplicationInternal *v22[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h]
  _QWORD v24[3]; // [rsp+58h] [rbp-21h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp-9h] BYREF
  CAppViewManager *v26[2]; // [rsp+80h] [rbp+7h] BYREF
  char v27; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  bool v29; // [rsp+E0h] [rbp+67h] BYREF
  int v30; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v23 = -2LL;
  v24[0] = this;
  v24[1] = a2;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___(v26, v24);
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v24[0] = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(struct _GUID *)v22 = *a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal **, int *))(**((_QWORD **)this + 22)
                                                                                         + 24LL))(
         *((_QWORD *)this + 22),
         v22,
         &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x44C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v16 = v27;
    goto LABEL_30;
  }
  if ( v30 )
  {
    v21 = 0LL;
    v9 = *((_QWORD *)this + 22);
    *(struct _GUID *)v22 = *a2;
    (*(void (__fastcall **)(__int64, struct IImmersiveApplicationInternal **, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v9 + 56LL))(
      v9,
      v22,
      &v21);
    v22[0] = 0LL;
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, v22, &v29);
    v8 = GlomForWindow;
    v11 = v22[0];
    if ( GlomForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x457,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)GlomForWindow);
LABEL_14:
      if ( v11 )
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 16LL))(v11);
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      goto LABEL_18;
    }
    if ( v29 )
    {
      v8 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_14;
    }
    v31 = 0LL;
    v12 = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v31);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 1120LL;
      goto LABEL_12;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, __int64, _QWORD))(**((_QWORD **)this + 14) + 88LL))(
            *((_QWORD *)this + 14),
            a3,
            v11,
            v31,
            0LL);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 1121LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
      v14 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_14;
    }
    v17 = *((_QWORD *)this + 22);
    v25 = *a2;
    (*(void (__fastcall **)(__int64, struct _GUID *, __int64, __int64))(*(_QWORD *)v17 + 40LL))(v17, &v25, 2LL, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 168LL))(*((_QWORD *)this + 14), v31);
    v18 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 16LL))(v11);
    v19 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v16 = 0;
  v8 = 0;
LABEL_30:
  if ( v16 )
    CAppViewManager::_ObliterateOperation(v26[0], (const struct _GUID *)v26[1]);
  return v8;
}
