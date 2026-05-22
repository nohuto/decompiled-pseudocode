/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180061118
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800564A4 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180056734 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800579EC (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x180059878 (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800611E4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x180061330 (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x180060D64 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v4; // r11d
  unsigned int (__fastcall *v5)(bool); // rdx
  signed int LastError; // eax
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  ISMTracing *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = (4 * a3) | (2 * a2) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0);
  if ( *((_DWORD *)this + 15) != v4 || a4 )
  {
    *((_DWORD *)this + 15) = v4;
    v5 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
    v11 = (v4 & 0x1A) != 24;
    if ( v5 )
    {
      if ( !v5((v4 & 0x1A) != 24) )
      {
        LastError = GetLastError();
        v7 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v7 = (unsigned int)LastError;
        if ( (v7 & 0x80000000) != 0LL )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xFB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            (const char *)v7);
          JUMPOUT(0x1800611E0LL);
        }
      }
      v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v8 )
      {
        if ( *v8 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCCursorManager_Update2DCursor_(v9, &v11);
        }
      }
    }
  }
}
