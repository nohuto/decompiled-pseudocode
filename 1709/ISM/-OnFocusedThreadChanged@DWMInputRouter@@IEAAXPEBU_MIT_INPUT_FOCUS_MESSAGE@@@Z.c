/*
 * XREFs of ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18001B250
 * Callers:
 *     ?OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z @ 0x18001B220 (-OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z.c)
 *     std::_Func_impl__lambda_bc2c326073decbf1a8b1d63714aebc46__std::allocator_int__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call @ 0x1800203F0 (std--_Func_impl__lambda_bc2c326073decbf1a8b1d63714aebc46__std--allocator_int__void__ea_1800203F0.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800198FC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DWMInputRouter::OnFocusedThreadChanged(DWMInputRouter *this, const struct _MIT_INPUT_FOCUS_MESSAGE *a2)
{
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // si
  __int64 v13; // rcx
  int v14; // eax
  struct IInputTarget *v15; // rbx
  int v16; // eax
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IInputTarget *v21; // [rsp+88h] [rbp+28h] BYREF
  int v22; // [rsp+90h] [rbp+30h] BYREF
  int v23; // [rsp+98h] [rbp+38h] BYREF

  v19[1] = -2LL;
  if ( *(_DWORD *)a2 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 30);
    if ( !v5 )
      goto LABEL_28;
    LODWORD(v21) = 0;
    v22 = 0;
    v23 = 0;
    v17 = 0;
    v19[0] = 0LL;
    v18 = 0LL;
    v6 = (**v5)(v5, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v18);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x705,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)v18 + 32LL))(v18, &v21);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x707,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v22);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x708,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v23);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x709,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x70A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 64LL))(v18, v19);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x70B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = *(_DWORD *)a2 == (_DWORD)v21
       && *((_DWORD *)a2 + 1) == v22
       && *((_DWORD *)a2 + 2) == v23
       && *((_DWORD *)a2 + 6) == v17
       && *((_QWORD *)a2 + 2) == v19[0];
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( !v12 )
    {
LABEL_28:
      v21 = 0LL;
      v14 = DWMInputRouter::CreateAndRegisterTarget(
              this,
              *(_DWORD *)a2,
              *((_DWORD *)a2 + 1),
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 6),
              *((_QWORD *)a2 + 2),
              &v21);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x71F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      v15 = v21;
      v16 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)this + 136LL))(this, v21);
      if ( v16 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x722,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v16);
      if ( v15 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else if ( *((_QWORD *)this + 30) )
  {
    v4 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD))(*(_QWORD *)this + 136LL))(this, 0LL);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x6F2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
}
