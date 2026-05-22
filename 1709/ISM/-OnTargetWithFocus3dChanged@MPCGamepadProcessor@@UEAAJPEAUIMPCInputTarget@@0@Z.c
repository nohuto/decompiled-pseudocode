/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180037550
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::OnTargetWithFocus3dChanged(
        MPCGamepadProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  struct MPCGamepadInputHelper *Instance; // rax
  struct MPCGamepadInputHelper *v5; // rbx
  HWND v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  Instance = MPCGamepadInputHelper::GetInstance();
  v5 = Instance;
  if ( a3 )
  {
    *(_BYTE *)Instance = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) == 1;
    v6 = (HWND)(*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 64LL))(a3);
    *((_QWORD *)v5 + 1) = v6;
    *((_QWORD *)v5 + 2) = GetAncestor(v6, 2u);
    v13 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v13);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, (__int64)v5 + 24);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v12 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 56LL))(v13, &v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    *((_BYTE *)v5 + 1) = v12 != 0;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    *(_WORD *)Instance = 0;
    *((_DWORD *)Instance + 6) = 0;
    *((_QWORD *)Instance + 2) = 0LL;
    *((_QWORD *)Instance + 1) = 0LL;
  }
  MPCGamepadInputHelper::UpdateGamepadFocus(v5);
  return 0LL;
}
