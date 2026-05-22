/*
 * XREFs of ?AreTargetsTheSame@MPCInputRouter@@AEAA_NPEAUIInputTarget@@0@Z @ 0x1800AA7A8
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall MPCInputRouter::AreTargetsTheSame(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall **v5)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  __int64 (__fastcall **v8)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h] BYREF
  int v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+34h] [rbp-34h] BYREF
  int v29; // [rsp+38h] [rbp-30h] BYREF
  int v30; // [rsp+3Ch] [rbp-2Ch] BYREF
  __int64 v31; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v32[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  MPCInputRouter *v34; // [rsp+A0h] [rbp+38h] BYREF
  int v35; // [rsp+A8h] [rbp+40h] BYREF
  int v36; // [rsp+B0h] [rbp+48h] BYREF
  int v37; // [rsp+B8h] [rbp+50h] BYREF

  v34 = this;
  v32[1] = -2LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    v5 = *a2;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v26);
    v7 = (*v5)((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x378,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v7);
  }
  if ( a3 )
  {
    v8 = *a3;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v25);
    v10 = (*v8)((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v10);
  }
  if ( v26 && v25 )
  {
    v35 = 0;
    v37 = 0;
    v28 = 0;
    v30 = 0;
    v32[0] = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 32LL))(v26, &v35);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 40LL))(v26, &v37);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 48LL))(v26, &v28);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v30);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 64LL))(v26, v32);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    LODWORD(v34) = 0;
    v36 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v25 + 32LL))(v25, &v34);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x395,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 40LL))(v25, &v36);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x396,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48LL))(v25, &v27);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x397,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v29);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x398,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v31);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x399,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v21 = v35 == (_DWORD)v34 && v37 == v36 && v28 == v27 && v30 == v29 && v32[0] == v31;
  }
  else
  {
    v21 = v26 == v25;
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v21;
}
