/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180058688
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D648 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D8F4 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004EC1C (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x180050CE4 (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x1800588D4 (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x180058A78 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v5; // edi
  __int64 v8; // rax
  int v9; // r8d
  unsigned int (__fastcall *v10)(bool); // rax
  char v11; // r8
  signed int LastError; // eax
  unsigned __int64 v13; // r9
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v17; // [rsp+38h] [rbp+10h] BYREF

  v5 = a3;
  MPCHolographicInputManager::GetInstance();
  v9 = (4 * v5) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0) | ((a2 | *(_BYTE *)(v8 + 2010)) != 0
                                                                                                  ? 2
                                                                                                  : 0);
  if ( *((_DWORD *)this + 15) != v9 || a4 )
  {
    v10 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
    *((_DWORD *)this + 15) = v9;
    v11 = v9 & 0x1A;
    v17 = v11 != 24;
    if ( v10 )
    {
      if ( !v10(v11 != 24) )
      {
        LastError = GetLastError();
        v13 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v13 = (unsigned int)LastError;
        if ( (v13 & 0x80000000) != 0LL )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xFD,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            (const char *)v13);
          JUMPOUT(0x180058780LL);
        }
      }
      v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v14 )
      {
        if ( *v14 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCCursorManager_Update2DCursor_(v15, &v17);
        }
      }
    }
  }
}
