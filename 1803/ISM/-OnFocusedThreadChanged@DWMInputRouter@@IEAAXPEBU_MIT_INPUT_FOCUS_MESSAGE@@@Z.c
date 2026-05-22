/*
 * XREFs of ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18007FF60
 * Callers:
 *     ?OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z @ 0x18007FF30 (-OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_40dc550b2993ae9e5862738a76c90acf__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call @ 0x180081ED0 (std--_Func_impl_no_alloc__lambda_40dc550b2993ae9e5862738a76c90acf__void__MIT_INPUT__ea_180081ED0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DWMInputRouter::OnFocusedThreadChanged(DWMInputRouter *this, const struct _MIT_INPUT_FOCUS_MESSAGE *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // si
  __int64 v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  struct IInputTarget *v19; // rbx
  int v20; // eax
  int v21; // [rsp+50h] [rbp-30h] BYREF
  int v22; // [rsp+54h] [rbp-2Ch] BYREF
  int v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct IInputTarget *v27; // [rsp+A8h] [rbp+28h] BYREF
  int v28; // [rsp+B0h] [rbp+30h] BYREF
  int v29; // [rsp+B8h] [rbp+38h] BYREF

  v25[1] = -2LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 34);
  if ( !*(_DWORD *)a2 )
  {
    if ( !v4 )
      return;
    v5 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD))(*(_QWORD *)this + 112LL))(this, 0LL);
    if ( v5 >= 0 )
      return;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x772,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v5);
LABEL_32:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x787,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( !v4 )
    goto LABEL_26;
  LODWORD(v27) = 0;
  v28 = 0;
  v29 = 0;
  v21 = 0;
  v25[0] = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
  v6 = (**v4)(v4, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v24);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_32;
  v8 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)v24 + 32LL))(v24, &v27);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x789,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 40LL))(v24, &v28);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v29);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 56LL))(v24, &v21);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 64LL))(v24, v25);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 72LL))(v24, &v22);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 80LL))(v24, &v23);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_40;
  }
  v15 = *(_DWORD *)a2 == (_DWORD)v27
     && *((_DWORD *)a2 + 1) == v28
     && *((_DWORD *)a2 + 2) == v29
     && *((_DWORD *)a2 + 6) == v21
     && *((_QWORD *)a2 + 2) == v25[0]
     && *((_DWORD *)a2 + 7) == v22
     && *((_DWORD *)a2 + 8) == v23;
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( !v15 )
  {
LABEL_26:
    v27 = 0LL;
    v17 = DWMInputRouter::CreateAndRegisterTarget(
            this,
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 1),
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 6),
            *((_QWORD *)a2 + 2),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)a2 + 8),
            &v27);
    v18 = retaddr;
    if ( v17 >= 0 )
    {
      v19 = v27;
      v20 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)this + 112LL))(this, v27);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7AA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      if ( v19 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
      return;
    }
LABEL_40:
    wil::details::in1diag3::FailFast_Hr(
      v18,
      (void *)0x7A7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
}
