/*
 * XREFs of _lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator() @ 0x18005770C
 * Callers:
 *     std::_Func_impl__lambda_3e33307cb1e17c9b7f6fa64480bfac10__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180059E70 (std--_Func_impl__lambda_3e33307cb1e17c9b7f6fa64480bfac10__std--allocator_int__void__ea_180059E70.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180039B94 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180058234 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator()(_QWORD *a1, __int64 a2)
{
  const char *v4; // r9
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  _BYTE v20[320]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v19 = -2LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, *(_QWORD *)a1[1]);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    v6 = *(__int64 **)(*a1 + 3144LL);
    v7 = *v6;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(v7 + 64))(v6, v8, v20) < 0 )
      return;
    v9 = *a1 + 3160LL;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 312LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, v20, v10, v9);
    (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v17, *a1);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 3144LL) + 72LL))(
            *(_QWORD *)(*a1 + 3144LL),
            (__int64)(v18 - v17) / 184);
    if ( v11 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
      return;
    v12 = *a1 + 3160LL;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 312LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, *(_QWORD *)a1[1] + 776LL, v13, v12);
    (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v17, *a1);
    v14 = v18;
    v15 = v17;
    if ( v17 != v18 )
    {
      do
      {
        *(_DWORD *)(v15 + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 312LL))(a2);
        v15 += 184LL;
      }
      while ( v15 != v14 );
      v14 = v18;
      v15 = v17;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(**(_QWORD **)(*a1 + 3144LL) + 72LL))(
            *(_QWORD *)(*a1 + 3144LL),
            (__int64)(v14 - v15) / 184,
            v15);
    if ( v16 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x208,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v16);
  }
  std::vector<PointData3D>::~vector<PointData3D>(&v17);
}
