/*
 * XREFs of _lambda_27c488e7e724f5c55d6bceab808aefe7_::operator() @ 0x1801EA074
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27c488e7e724f5c55d6bceab808aefe7___::Run @ 0x1801ED740 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27c488e7e724f5c55d6bceab808aefe7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801E8B4C (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_27c488e7e724f5c55d6bceab808aefe7_::operator()(__int64 a1)
{
  unsigned int v2; // edi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, wil **); // rcx
  int v4; // eax
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  wil *v27; // rcx
  const char *v29; // r9
  wil *v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32[9]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+20h] BYREF

  v32[1] = -2LL;
  try
  {
    v2 = *(_DWORD *)(a1 + 16);
    v30 = 0LL;
    v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, wil **))(*(_QWORD *)a1 + 48LL);
    v30 = 0LL;
    v4 = (**v3)(v3, &GUID_05f3eb97_d7d7_4f49_919d_368bc0323fb4, &v30);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        137LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = *(_DWORD *)(a1 + 20);
    v37 = 0LL;
    if ( v5 )
    {
      if ( v5 <= 0 )
        goto LABEL_10;
      if ( v5 > 2 )
      {
        switch ( v5 )
        {
          case 3:
LABEL_13:
            v36 = 1;
            v8 = 0LL;
            v32[0] = 0LL;
            v38 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
            v9 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                   &v38,
                   (int *)&v36);
            if ( v9 >= 0 )
            {
              v8 = v38;
              v38 = 0LL;
              v32[0] = v8;
              v9 = 0;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
            if ( v9 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                189LL,
                (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                (const char *)(unsigned int)v9);
            v10 = (*(__int64 (__fastcall **)(wil *, _QWORD, __int64))(*(_QWORD *)v30 + 56LL))(v30, v2, v8);
            if ( v10 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                190LL,
                (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                (const char *)(unsigned int)v10);
            v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
            v12 = v37;
            v37 = 0LL;
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL))(
                    v11,
                    v2,
                    0LL,
                    &v37);
            if ( v13 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                193LL,
                (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                (const char *)(unsigned int)v13);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            goto LABEL_43;
          case 4:
            goto LABEL_11;
          case 5:
            goto LABEL_43;
        }
LABEL_10:
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          211LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)0x8000FFFFLL);
LABEL_11:
        v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        v37 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, v2, 1LL, &v37);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            198LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v7);
          goto LABEL_13;
        }
LABEL_43:
        if ( v5 != 3 )
        {
          v26 = (*(__int64 (__fastcall **)(wil *, _QWORD, _QWORD))(*(_QWORD *)v30 + 56LL))(v30, v2, 0LL);
          if ( v26 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              219LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v26);
        }
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v37);
        v27 = v30;
        if ( v30 )
          (*(void (__fastcall **)(wil *))(*(_QWORD *)v30 + 16LL))(v30);
        return 0LL;
      }
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v37 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, v2, 0LL, &v37);
      if ( v15 >= 0 )
        goto LABEL_43;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        182LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 280LL) + 144LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 280LL),
      v32,
      v2);
    v36 = 0;
    v16 = v32[0];
    if ( !v32[0] )
    {
      v31 = 0LL;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v31 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, v2, &v31);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          156LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v18);
LABEL_33:
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v31);
        v21 = v36;
LABEL_37:
        if ( v21 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
          v24 = v37;
          v37 = 0LL;
          if ( v24 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            v21 = v36;
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 72LL))(v23, v21, &v37);
          if ( v25 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              174LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v25);
        }
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v32);
        goto LABEL_43;
      }
      v38 = 0LL;
      v19 = v31;
      SafeRelease<IShellItemArray>(&v38);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 72LL))(v19, &v38);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          159LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v20);
LABEL_32:
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v38);
        goto LABEL_33;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 48LL))(v38, &v36);
      if ( v22 >= 0 )
        goto LABEL_32;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        162LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v22);
    }
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 216LL))(v16);
    v36 = v21;
    goto LABEL_37;
  }
  catch ( ... )
  {
    **(_DWORD **)(a1 + 8) = wil::ResultFromCaughtException(v27);
    v29 = (const char *)**(unsigned int **)(a1 + 8);
    v35 = (unsigned int)v29;
    if ( (int)v29 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v29);
    return v35;
  }
  return 0LL;
}
