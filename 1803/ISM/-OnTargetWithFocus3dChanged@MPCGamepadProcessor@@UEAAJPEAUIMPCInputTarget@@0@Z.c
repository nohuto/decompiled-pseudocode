/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180093660
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::OnTargetWithFocus3dChanged(
        MPCGamepadProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3,
        const char *a4)
{
  struct MPCGamepadInputHelper *Instance; // rax
  struct MPCGamepadInputHelper *v6; // rbx
  HWND v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  Instance = MPCGamepadInputHelper::GetInstance((__int64)this, (__int64)a2, (__int64)a3, a4);
  v6 = Instance;
  if ( a3 )
  {
    *(_BYTE *)Instance = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) == 1;
    v7 = (HWND)(*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 64LL))(a3);
    *((_QWORD *)v6 + 1) = v7;
    *((_QWORD *)v6 + 2) = GetAncestor(v7, 2u);
    v15 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v15);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, (__int64)v6 + 24);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v14 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x1800937D7LL);
    }
    *((_BYTE *)v6 + 1) = v14 != 0;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    *(_WORD *)Instance = 0;
    *((_DWORD *)Instance + 6) = 0;
    *((_QWORD *)Instance + 2) = 0LL;
    *((_QWORD *)Instance + 1) = 0LL;
  }
  MPCHolographicInputManager::GetInstance();
  *((_BYTE *)v6 + 38) = *(_BYTE *)(v11 + 2011);
  MPCGamepadInputHelper::UpdateGamepadFocus(v6);
  return 0LL;
}
