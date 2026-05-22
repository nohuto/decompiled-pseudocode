/*
 * XREFs of ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180050574 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _lambda_44ea6c42bf870d75ce9c33fd848cc99e_::_lambda_invoker_cdecl_ @ 0x180085780 (_lambda_44ea6c42bf870d75ce9c33fd848cc99e_--_lambda_invoker_cdecl_.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800860FC (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180086D80 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Move @ 0x18001A000 (std--_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation-_ea_18001A000.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::GetViewIdFromWindowId(struct IViewHierarchy *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  unsigned int v6; // ebx
  _QWORD v8[7]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-11h]
  __int64 v10; // [rsp+60h] [rbp-9h]
  _BYTE *v11; // [rsp+68h] [rbp-1h]
  _BYTE v12[56]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+3Fh]
  unsigned int v14; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+77h]
  _QWORD *v17; // [rsp+E8h] [rbp+7Fh]

  v10 = -2LL;
  v14 = 0;
  v8[0] = off_1800EB950;
  v8[1] = a2;
  v9 = v8;
  v17 = v8;
  v3 = 0LL;
  v16 = 0LL;
  v11 = v12;
  v13 = 0LL;
  v13 = std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Move(
          v8,
          v12);
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _BYTE *))(*(_QWORD *)a1 + 56LL))(a1, &v15, v12);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v3 = v15;
    v16 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v9 )
    {
      v4 = v8;
      LOBYTE(v4) = v9 != v8;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v4);
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 120LL))(v3, &v14);
  }
  else if ( v9 )
  {
    v5 = v8;
    LOBYTE(v5) = v9 != v8;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v5);
  }
  v6 = v14;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
