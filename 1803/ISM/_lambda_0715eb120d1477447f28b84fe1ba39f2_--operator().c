/*
 * XREFs of _lambda_0715eb120d1477447f28b84fe1ba39f2_::operator() @ 0x18004E924
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0715eb120d1477447f28b84fe1ba39f2__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x1800511B0 (std--_Func_impl_no_alloc__lambda_0715eb120d1477447f28b84fe1ba39f2__void_IMPCInputPr_ea_1800511B0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180040B4C (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004F5D4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_0715eb120d1477447f28b84fe1ba39f2_::operator()(_QWORD *a1, __int64 a2)
{
  const char *v4; // r9
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  unsigned __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+50h] [rbp-B8h]
  _BYTE v22[320]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v21 = -2LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x202,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, *(_QWORD *)a1[1]);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    v6 = *(__int64 **)(*a1 + 2024LL);
    v7 = *v6;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(v7 + 72))(v6, v8, v22) < 0 )
      return;
    v9 = *a1 + 2048LL;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, v22, v10, v9);
    (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v19, *a1);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 2024LL) + 80LL))(
            *(_QWORD *)(*a1 + 2024LL),
            (__int64)(v20 - v19) / 184);
    v12 = retaddr;
    if ( v11 >= 0 )
      goto LABEL_17;
    goto LABEL_20;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
    return;
  if ( !*(_BYTE *)(*(_QWORD *)a1[1] + 1720LL) )
  {
    v13 = *a1 + 2048LL;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
    MPCHolographicInputManager::ProcessCursorData(*a1, a2, *(_QWORD *)a1[1] + 600LL, v14, v13);
  }
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, &v19, *a1);
  v15 = v20;
  v16 = v19;
  if ( v19 != v20 )
  {
    do
    {
      *(_DWORD *)(v16 + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
      v16 += 184LL;
    }
    while ( v16 != v15 );
    v15 = v20;
    v16 = v19;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(**(_QWORD **)(*a1 + 2024LL) + 80LL))(
          *(_QWORD *)(*a1 + 2024LL),
          (__int64)(v15 - v16) / 184,
          v16);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      v18,
      (void *)0x215,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x18004EC19LL);
  }
LABEL_17:
  std::vector<PointData3D>::~vector<PointData3D>(&v19);
}
