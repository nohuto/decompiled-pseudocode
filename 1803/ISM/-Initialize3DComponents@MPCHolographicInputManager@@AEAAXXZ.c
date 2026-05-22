/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D648
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800503A0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F2BC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180051A7C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x180058368 (--0MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180058688 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  MPCCursorManager *v2; // rax
  const char *v3; // r9
  __int64 v4; // rbx
  const char *v5; // r9
  HMODULE v6; // rcx
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  MPCCursorManager **v12; // rsi
  MPCCursorManager **v13; // rbp
  MPCCursorManager *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  MPCCursorManager *v17; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 2008) )
    return;
  v17 = (MPCCursorManager *)operator new(0x48uLL);
  v2 = MPCCursorManager::MPCCursorManager(v17);
  v4 = *((_QWORD *)this + 254);
  *((_QWORD *)this + 254) = v2;
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 66) )
    {
      if ( !(unsigned int)MITDisableMouseIntercept() )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x39,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v5);
LABEL_23:
        wil::details::in1diag3::_FailFast_NullAlloc(
          v7,
          (void *)0x51,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v3);
        __debugbreak();
      }
      *(_BYTE *)(v4 + 66) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v4, 1, 1, 1);
    }
    v6 = *(HMODULE *)(v4 + 40);
    if ( v6 )
      FreeLibrary(v6);
    operator delete((void *)v4);
  }
  v7 = retaddr;
  if ( !*((_QWORD *)this + 254) )
    goto LABEL_23;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    LODWORD(v17) = 0;
    v8 = RtlQueryWnfStateData(
           &v17,
           WNF_HOLO_USER_DISPLAY_CONTEXT,
           MPCHolographicInputManager::DisplayContextChangeCallback,
           this,
           0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x5D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 2256,
           WNF_HOLO_USER_DISPLAY_CONTEXT,
           (unsigned int)v17,
           MPCHolographicInputManager::DisplayContextChangeCallback,
           this,
           0LL,
           0,
           1,
           -2LL);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    LODWORD(v17) = 0;
    v10 = RtlQueryWnfStateData(
            &v17,
            WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
            MPCHolographicInputManager::Input3DSwitchDisableCallback,
            this,
            0LL);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 2264,
            WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
            (unsigned int)v17,
            MPCHolographicInputManager::Input3DSwitchDisableCallback,
            this,
            0LL,
            0,
            1,
            v15);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x7C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x18004D8F1LL);
    }
  }
  v12 = (MPCCursorManager **)*((_QWORD *)this + 246);
  v13 = (MPCCursorManager **)*((_QWORD *)this + 247);
  while ( v12 != v13 )
  {
    v14 = *v12;
    v17 = v14;
    if ( v14 )
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v14 + 8LL))(v14);
    (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v14 + 288LL))(v14);
    (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v14 + 16LL))(v14);
    ++v12;
  }
  *((_BYTE *)this + 2008) = 1;
}
