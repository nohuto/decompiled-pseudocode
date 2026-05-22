/*
 * XREFs of ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x180035448
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180059198 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _lambda_39145382b85a56bf0c3f442b4c54cd44_::_lambda_invoker_cdecl_ @ 0x1800A98A0 (_lambda_39145382b85a56bf0c3f442b4c54cd44_--_lambda_invoker_cdecl_.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800AA0A0 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     std::_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std::allocator_int__bool_Navigation::Server::IMonitorView_____ptr64_::_Move @ 0x180035FE0 (std--_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std--allocator_int__bool__ea_180035FE0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::GetViewIdFromWindowId(struct IViewHierarchy *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned int v8; // ebx
  _QWORD v10[7]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp-11h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  _BYTE *v13; // [rsp+78h] [rbp-1h]
  _BYTE v14[56]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+3Fh]
  unsigned int v16; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+F0h] [rbp+77h]
  _QWORD *v19; // [rsp+F8h] [rbp+7Fh]

  v12 = -2LL;
  v16 = 0;
  v10[0] = off_1800D4B40;
  v10[1] = a2;
  v11 = v10;
  v19 = v10;
  v3 = 0LL;
  v18 = 0LL;
  v13 = v14;
  v15 = 0LL;
  v15 = std::_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std::allocator_int__bool_Navigation::Server::IMonitorView_____ptr64_::_Move(
          v10,
          v14);
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _BYTE *))(*(_QWORD *)a1 + 56LL))(a1, &v17, v14);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v3 = v17;
    v18 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v11 )
    {
      v4 = v10;
      LOBYTE(v4) = v11 != v10;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 32LL))(v11, v4);
    }
    if ( v3 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 120LL))(v3, &v16);
      if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 81, v5);
    }
  }
  else if ( v11 )
  {
    v7 = v10;
    LOBYTE(v7) = v11 != v10;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 32LL))(v11, v7);
  }
  v8 = v16;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v8;
}
