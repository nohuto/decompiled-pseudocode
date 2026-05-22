/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004A698
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18004A5A0 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  unsigned int v5; // edi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  const char *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // eax
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int128 v28; // [rsp+30h] [rbp-28h]
  __int64 v29; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_OWORD *)a2 + 1);
  v27 = *(_OWORD *)a2;
  v29 = *((_QWORD *)a2 + 4);
  v28 = v3;
  if ( this )
    *(_QWORD *)&v28 = (char *)this + 32;
  else
    *(_QWORD *)&v28 = 0LL;
  v4 = MPCInputProviderBase::RuntimeClassInitialize((MPCMouseProcessor *)((char *)this + 32), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (_QWORD *)((char *)this + 616);
    v8 = *((_QWORD *)this + 77);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = CreateChildInputProcessor(2, &v27, (__int64)this + 616);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = *((_QWORD *)this + 78);
    if ( v10 )
    {
      *((_QWORD *)this + 78) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8,
            (char *)this + 624);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = *((_QWORD *)this + 79);
    if ( v12 )
    {
      *((_QWORD *)this + 79) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8,
            (char *)this + 632);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = *((_QWORD *)this + 80);
    if ( v14 )
    {
      *((_QWORD *)this + 80) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab,
            (char *)this + 640);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = *((_QWORD *)this + 81);
    if ( v16 )
    {
      *((_QWORD *)this + 81) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b,
            (char *)this + 648);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (_QWORD *)((char *)this + 88);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
    v20 = *((_QWORD *)this + 11);
    if ( v20 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 88LL))(
            v19,
            *((_QWORD *)this + 10),
            (char *)this + 88);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    if ( !*v18 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x77,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        v22);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
    v24 = *((_QWORD *)this + 76);
    v25 = v23;
    if ( v24 )
    {
      *((_QWORD *)this + 76) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 80LL))(v25, (char *)this + 608);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v26);
      JUMPOUT(0x18004A9D3LL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
