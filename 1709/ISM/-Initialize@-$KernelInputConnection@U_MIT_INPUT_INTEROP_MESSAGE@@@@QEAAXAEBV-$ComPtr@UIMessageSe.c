/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180010E88
 * Callers:
 *     ?s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x18000EAC0 (-s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000EED8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AF60 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v8; // rbx
  _BYTE *v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // r8
  _BYTE *v11; // rax
  _BYTE *v12; // r8
  _BYTE *v13; // rdx
  _QWORD *v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // r8
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE v30[56]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *v31; // [rsp+78h] [rbp-31h]
  _BYTE v32[56]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE *v33; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v8 = a1 + 8;
  v9 = 0LL;
  v31 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v10 )
  {
    v9 = (_BYTE *)(**v10)(*(_QWORD *)(a4 + 56), v30);
    v31 = v9;
  }
  v11 = v9;
  if ( v9 != v30 && (_QWORD *)v8[7] != v8 )
  {
    v9 = (_BYTE *)v8[7];
    v31 = v9;
    v8[7] = v11;
    goto LABEL_25;
  }
  v12 = 0LL;
  v33 = 0LL;
  if ( v9 )
  {
    if ( v9 == v30 )
    {
      v12 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 8LL))(v9, v32);
      v33 = v12;
      v9 = v31;
      if ( !v31 )
        goto LABEL_12;
      v13 = v30;
      LOBYTE(v13) = v31 != v30;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v31 + 32LL))(v31, v13, v12);
      v12 = v33;
    }
    else
    {
      v12 = v9;
      v33 = v9;
    }
    v9 = 0LL;
    v31 = 0LL;
  }
LABEL_12:
  v14 = (_QWORD *)v8[7];
  if ( !v14 )
    goto LABEL_19;
  v9 = (_BYTE *)v8[7];
  if ( v14 == v8 )
  {
    v9 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*v14 + 8LL))(v9, v30);
    v31 = v9;
    v16 = (_QWORD *)v8[7];
    if ( !v16 )
    {
      v12 = v33;
      goto LABEL_19;
    }
    LOBYTE(v15) = v16 != v8;
    (*(void (__fastcall **)(_QWORD, __int64))(*v16 + 32LL))(v8[7], v15);
    v9 = v31;
    v12 = v33;
  }
  else
  {
    v31 = (_BYTE *)v8[7];
  }
  v8[7] = 0LL;
LABEL_19:
  if ( v12 )
  {
    if ( v12 == v32 )
    {
      v8[7] = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v12 + 8LL))(v12, v8);
      if ( v33 )
      {
        v17 = v32;
        LOBYTE(v17) = v33 != v32;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v17);
      }
      v9 = v31;
    }
    else
    {
      v8[7] = v12;
    }
  }
LABEL_25:
  if ( v9 )
  {
    v18 = v30;
    LOBYTE(v18) = v9 != v30;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v18);
  }
  v19 = *a2;
  v20 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)v19 + 64LL))(
          v19,
          L"Kernel\\MIT\\InputPort",
          a1);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v22);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    *a2);
  v24 = *a2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    a1[1]);
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)v24 + 80LL))(
          v24,
          KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::s_OnKernelInputEventStatic,
          a1,
          *a1,
          a1 + 2);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 112LL))(*a2, a1[2], a1 + 3);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = MITCoreMsgKOpenConnectionTo(a3, a1 + 3);
  if ( v27 < 0 )
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v27);
  v29 = *(_QWORD *)(a4 + 56);
  if ( v29 )
  {
    LOBYTE(v28) = v29 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v28);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
}
