/*
 * XREFs of ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800596E0
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18005934C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800559E8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180055B84 (-MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::UpdateDoubleClickValues(MPCHolographicInputManager *this)
{
  char v2; // di
  UINT v3; // edx
  UINT v4; // eax
  int SystemMetrics; // eax
  const char *v6; // r9
  const char *v7; // r9
  _DWORD *v8; // rcx
  ISMTracing *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT v11; // [rsp+30h] [rbp+8h] BYREF
  UINT uiParam; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 417) == *((_QWORD *)this + 418)
    || (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 417) + 48LL))(**((_QWORD **)this + 417)) == 2
    || (v2 = 1, *((_DWORD *)this + 846) != 1) )
  {
    v2 = 0;
  }
  if ( v2 != *((_BYTE *)this + 3416) )
  {
    if ( v2 )
      v3 = *((_DWORD *)this + 857);
    else
      v3 = *((_DWORD *)this + 855);
    uiParam = v3;
    if ( v2 )
      v4 = *((_DWORD *)this + 858);
    else
      v4 = *((_DWORD *)this + 856);
    v11 = v4;
    if ( v2 )
    {
      *((_DWORD *)this + 855) = GetSystemMetrics(36);
      SystemMetrics = GetSystemMetrics(37);
      v3 = uiParam;
      *((_DWORD *)this + 856) = SystemMetrics;
    }
    if ( !SystemParametersInfoA(0x1Du, v3, 0LL, 2u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x53E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v6);
    if ( !SystemParametersInfoA(0x1Eu, v11, 0LL, 2u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x53F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v7);
    *((_BYTE *)this + 3416) = v2;
    v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v8 )
    {
      if ( *v8 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
          v9,
          (const bool *)this + 3416,
          (const int *)&uiParam,
          (const int *)&v11);
      }
    }
  }
}
