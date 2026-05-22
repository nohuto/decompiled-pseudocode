/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800372E4
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037410 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v2; // rsi
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rsi
  __int64 v12; // rcx
  int v13; // eax
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v15 = *(_OWORD *)a2;
  v7 = *((_QWORD *)a2 + 4);
  v17 = *((_QWORD *)&v6 + 1);
  v8 = (_QWORD *)((char *)this + 576);
  v16 = v2 & -(__int64)(this != 0LL);
  v9 = *((_QWORD *)this + 72);
  v18 = v7;
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ChildInputProcessor = CreateChildInputProcessor(64, v15, (__int64)this + 576);
  if ( ChildInputProcessor < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    __debugbreak();
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v8;
  v12 = *((_QWORD *)this + 73);
  if ( v12 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (**v11)(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 584);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  return 0LL;
}
