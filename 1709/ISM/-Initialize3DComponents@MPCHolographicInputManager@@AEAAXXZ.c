/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800564A4
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180058FD0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AF60 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180016CD8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x180060DFC (--0MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180061118 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  MPCCursorManager *v2; // rax
  const char *v3; // r9
  __int64 v4; // rbx
  const char *v5; // r9
  HMODULE v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  MPCCursorManager **v11; // rdi
  MPCCursorManager **v12; // rsi
  MPCCursorManager *v13; // rbx
  __int64 v14; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  MPCCursorManager *v16; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 3128) )
  {
    v16 = (MPCCursorManager *)operator new(0x48uLL);
    v2 = MPCCursorManager::MPCCursorManager(v16);
    v4 = *((_QWORD *)this + 394);
    *((_QWORD *)this + 394) = v2;
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
    if ( !*((_QWORD *)this + 394) )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x51,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v3);
      __debugbreak();
    }
    if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
    {
      LODWORD(v16) = 0;
      v7 = RtlQueryWnfStateData(
             &v16,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this,
             0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x5D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v8 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 3368,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             (unsigned int)v16,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this,
             0LL,
             0,
             1,
             -2LL);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x68,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      LODWORD(v16) = 0;
      v9 = RtlQueryWnfStateData(
             &v16,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             MPCHolographicInputManager::Input3DSwitchDisableCallback,
             this,
             0LL);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x71,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v10 = RtlSubscribeWnfStateChangeNotification(
              (char *)this + 3376,
              WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
              (unsigned int)v16,
              MPCHolographicInputManager::Input3DSwitchDisableCallback,
              this,
              0LL,
              0,
              1,
              v14);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x7C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    v11 = (MPCCursorManager **)*((_QWORD *)this + 385);
    v12 = (MPCCursorManager **)*((_QWORD *)this + 386);
    while ( v11 != v12 )
    {
      v13 = *v11;
      v16 = v13;
      if ( v13 )
        (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v13 + 8LL))(v13);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v13 + 280LL))(v13);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v13 + 16LL))(v13);
      ++v11;
    }
    *((_BYTE *)this + 3128) = 1;
  }
}
