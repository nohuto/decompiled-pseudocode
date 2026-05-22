/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800AA300 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800198FC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800595F4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  struct IMPCInputTarget **v7; // rsi
  __int64 v8; // rcx
  struct IInputTarget *v9; // rbx
  int MPCTarget; // eax
  MPCHolographicInputManager *v11; // rax
  __int64 v12; // r8
  const char *v13; // r9
  PSRWLOCK v14; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IInputTarget *v18; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 812) )
  {
    *((_BYTE *)this + 812) = 1;
    v4 = *((_QWORD *)this + 95);
    if ( !v4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x258,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)retaddr);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(__int64, char *, __int64, wil::details::in1diag3 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           (char *)this + 768,
           a3,
           retaddr);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x25C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v18 = 0LL;
    v6 = DWMInputRouter::CreateAndRegisterTarget(
           this,
           *((_DWORD *)this + 192),
           *((_DWORD *)this + 193),
           0,
           0,
           0LL,
           &v18);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x266,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (struct IMPCInputTarget **)((char *)this + 752);
    v8 = *((_QWORD *)this + 94);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v18;
    MPCTarget = MPCInputRouter::CreateMPCTarget(this, v18, 0LL, (struct IMPCInputTarget **)this + 94);
    if ( MPCTarget < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)MPCTarget);
      __debugbreak();
    }
    MPCInputRouter::Set3DFocusTarget(this, *v7);
    MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(v11, this, v12, v13);
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v14);
    v16 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 88LL))(
            PostProcessor,
            (char *)this + 728);
    if ( v16 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x276,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v16);
    if ( v9 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
