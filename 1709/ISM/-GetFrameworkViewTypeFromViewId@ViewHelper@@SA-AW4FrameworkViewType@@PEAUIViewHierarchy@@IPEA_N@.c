/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800358D0
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v26; // [rsp+80h] [rbp+20h] BYREF
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF

  v27 = a3;
  v22[1] = -2LL;
  v3 = 5;
  LOBYTE(v27) = 0;
  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v22, a2);
  v4 = v22[0];
  if ( v22[0] )
  {
    v5 = L"FrameworkViewType";
    v24 = L"FrameworkViewType";
    v6 = 0;
    do
    {
      ++v5;
      ++v6;
    }
    while ( *v5 );
    v23 = v6 | 0x80000000;
    v28 = 0LL;
    v21 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22[0]
                                                                                                 + 136LL))(
           v22[0],
           &v21);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xC9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (**v21)(v21, &GUID_3ec52a26_f33c_4241_8dc1_da292661fe9a, &v28);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 72LL))(
            v28,
            (unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)v24 >> 64),
            &v27);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( (_BYTE)v27 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 48LL))(
              v28,
              (unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)v24 >> 64),
              &v20);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v12 = (**v20)(v20, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v19);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v26);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v3 = v26;
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
    }
    else
    {
      v3 = 0;
    }
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
    }
    v17 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v4 = v22[0];
  }
  if ( v4 )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
