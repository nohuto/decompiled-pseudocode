/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1800096D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000E790 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800192E4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // ecx
  unsigned int First; // ebx
  int v8; // r14d
  bool v9; // r12
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  bool v15; // cf
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-71h] BYREF
  int v23; // [rsp+74h] [rbp-6Dh]
  __int64 v24; // [rsp+78h] [rbp-69h] BYREF
  __int64 v25; // [rsp+80h] [rbp-61h] BYREF
  char v26; // [rsp+89h] [rbp-58h]
  int v27; // [rsp+8Ch] [rbp-55h] BYREF
  __int64 v28; // [rsp+90h] [rbp-51h] BYREF
  struct IImmersiveApplication *v29; // [rsp+98h] [rbp-49h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+C0h] [rbp-21h] BYREF
  _BYTE v35[40]; // [rsp+D0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v34[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 128LL))(a3, &v22) < 0 )
  {
    v22 = 0;
  }
  else if ( v22 > 0x11 || (v6 = 131346, !_bittest(&v6, v22)) )
  {
    First = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x756,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL);
    return First;
  }
  v8 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 80LL))(a3, &v27) >= 0 )
    v8 = 2 - (v27 != 0);
  v9 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 112LL))(a3, v35) >= 0;
  v25 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 64LL))(a3, &v25);
  v24 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 144LL))(a3, &v24);
  v28 = 0LL;
  v23 = (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 96LL))(
          a3,
          &v28,
          (char *)&v28 + 4) >= 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v26 = 1;
  v21 = 0LL;
  v29 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (char *)this - 216,
            &v29,
            &v21,
            0LL);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( (First & 0x80000000) != 0 )
  {
    v10 = First;
    v11 = 1929LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v10);
    goto LABEL_30;
  }
  v12 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 176LL))(
          a3,
          &v31,
          &v30);
  First = v12;
  if ( v12 < 0 )
  {
    v11 = 1934LL;
LABEL_22:
    v10 = (unsigned int)v12;
    goto LABEL_23;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 560LL))(v21, v31, v30);
  First = v12;
  if ( v12 < 0 )
  {
    v11 = 1935LL;
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 192LL))(
          a3,
          &v33,
          &v32);
  First = v12;
  if ( v12 < 0 )
  {
    v11 = 1939LL;
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 568LL))(v21, v33, v32);
  First = v12;
  if ( v12 < 0 )
  {
    v11 = 1940LL;
    goto LABEL_22;
  }
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _QWORD *))(*(_QWORD *)a3 + 208LL))(a3, v34) < 0
    || (v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 592LL))(v21, v34[0]), First = v13, v13 >= 0) )
  {
    v15 = (_BYTE)v23 != 0;
    LOBYTE(v23) = -(char)v23;
    v13 = CApplicationManager::_SetViewPositionHelper(
            (char *)this - 216,
            v25,
            (unsigned __int64)v35 & -(__int64)v9,
            v24,
            v8,
            *((_DWORD *)this + 156),
            0LL,
            (unsigned __int64)&v28 & -(__int64)v15,
            1,
            v22,
            a2,
            v21,
            v21);
    First = v13;
    if ( v13 >= 0 )
    {
      v17 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      First = 0;
      goto LABEL_36;
    }
    v14 = 1960LL;
  }
  else
  {
    v14 = 1946LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_30:
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
LABEL_36:
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return First;
}
