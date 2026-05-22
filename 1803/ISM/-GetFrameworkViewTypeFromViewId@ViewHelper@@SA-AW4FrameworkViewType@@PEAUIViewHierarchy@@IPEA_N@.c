/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800198EC
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v27; // [rsp+80h] [rbp+20h] BYREF
  __int64 v28; // [rsp+90h] [rbp+30h] BYREF
  __int64 v29; // [rsp+98h] [rbp+38h] BYREF

  v28 = a3;
  v23[1] = -2LL;
  v3 = 5;
  LOBYTE(v28) = 0;
  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v23, a2);
  v4 = v23[0];
  if ( !v23[0] )
    goto LABEL_23;
  v5 = L"FrameworkViewType";
  v25 = L"FrameworkViewType";
  v6 = 0;
  do
  {
    ++v5;
    ++v6;
  }
  while ( *v5 );
  v24 = v6 | 0x80000000;
  v29 = 0LL;
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23[0]
                                                                                               + 136LL))(
         v23[0],
         &v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (**v22)(v22, &GUID_3ec52a26_f33c_4241_8dc1_da292661fe9a, &v29);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 72LL))(
          v29,
          (unsigned __int64)&v24 & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64),
          &v28);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_29;
  }
  if ( (_BYTE)v28 )
  {
    v21 = 0LL;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 48LL))(
            v29,
            (unsigned __int64)&v24 & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64),
            &v21);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v13 = (**v21)(v21, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v20);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v27);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      v3 = v27;
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
      }
      goto LABEL_18;
    }
LABEL_29:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0xD4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v3 = 0;
LABEL_18:
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
  }
  v18 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v4 = v23[0];
LABEL_23:
  if ( v4 )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
