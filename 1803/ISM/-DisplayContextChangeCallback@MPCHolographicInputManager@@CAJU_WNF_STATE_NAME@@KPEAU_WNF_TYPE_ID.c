/*
 * XREFs of ?DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180050200
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x1800500D8 (-DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV-$function@$$A6AXXZ@std@@W4MsgPriority@@.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::DisplayContextChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6)
{
  __int64 (__fastcall ***v6)(); // rdx
  __int128 v8; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall **v9)(); // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v11)(); // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a5 && a6 == 4 )
  {
    if ( !a4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x433,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        0LL);
      JUMPOUT(0x1800502CALL);
    }
    LODWORD(v8) = *a5;
    *((_QWORD *)&v8 + 1) = a4;
    v9 = off_1800EE890;
    v10 = v8;
    v11 = &v9;
    MPCHolographicInputManager::DeferInvokeHelper(a4, (__int64)&v9);
    if ( v11 )
    {
      v6 = &v9;
      LOBYTE(v6) = v11 != &v9;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v11)[4])(v11, v6);
    }
  }
  return 0LL;
}
