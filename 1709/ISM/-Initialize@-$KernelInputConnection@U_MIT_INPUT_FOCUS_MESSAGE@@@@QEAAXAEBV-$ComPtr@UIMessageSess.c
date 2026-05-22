/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x18001DBF0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AF60 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rbx
  _BYTE *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // r8
  _BYTE *v10; // rax
  _BYTE *v11; // r8
  _BYTE *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[56]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE *v30; // [rsp+80h] [rbp-21h]
  _BYTE v31[56]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE *v32; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v7 = a1 + 8;
  v8 = 0LL;
  v30 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v9 )
  {
    v8 = (_BYTE *)(**v9)(*(_QWORD *)(a4 + 56), v29);
    v30 = v8;
  }
  v10 = v8;
  if ( v8 != v29 && (_QWORD *)v7[7] != v7 )
  {
    v8 = (_BYTE *)v7[7];
    v30 = v8;
    v7[7] = v10;
    goto LABEL_25;
  }
  v11 = 0LL;
  v32 = 0LL;
  if ( v8 )
  {
    if ( v8 == v29 )
    {
      v11 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 8LL))(v8, v31);
      v32 = v11;
      v8 = v30;
      if ( !v30 )
        goto LABEL_12;
      v12 = v29;
      LOBYTE(v12) = v30 != v29;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v12, v11);
      v11 = v32;
    }
    else
    {
      v11 = v8;
      v32 = v8;
    }
    v8 = 0LL;
    v30 = 0LL;
  }
LABEL_12:
  v13 = (_QWORD *)v7[7];
  if ( !v13 )
    goto LABEL_19;
  v8 = (_BYTE *)v7[7];
  if ( v13 == v7 )
  {
    v8 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*v13 + 8LL))(v8, v29);
    v30 = v8;
    v15 = (_QWORD *)v7[7];
    if ( !v15 )
    {
      v11 = v32;
      goto LABEL_19;
    }
    LOBYTE(v14) = v15 != v7;
    (*(void (__fastcall **)(_QWORD, __int64))(*v15 + 32LL))(v7[7], v14);
    v8 = v30;
    v11 = v32;
  }
  else
  {
    v30 = (_BYTE *)v7[7];
  }
  v7[7] = 0LL;
LABEL_19:
  if ( v11 )
  {
    if ( v11 == v31 )
    {
      v7[7] = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v11 + 8LL))(v11, v7);
      if ( v32 )
      {
        v16 = v31;
        LOBYTE(v16) = v32 != v31;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v32 + 32LL))(v32, v16);
      }
      v8 = v30;
    }
    else
    {
      v7[7] = v11;
    }
  }
LABEL_25:
  if ( v8 )
  {
    v17 = v29;
    LOBYTE(v17) = v8 != v29;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v17);
  }
  v18 = *a2;
  v19 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)v18 + 64LL))(
          v18,
          L"Kernel\\MIT\\InputPort",
          a1);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  LOBYTE(v21) = 1;
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v21);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    *a2);
  v23 = *a2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    a1[1]);
  v24 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)v23 + 80LL))(
          v23,
          KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::s_OnKernelInputEventStatic,
          a1,
          *a1,
          a1 + 2);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 112LL))(*a2, a1[2], a1 + 3);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  v26 = MITCoreMsgKOpenConnectionTo(2LL, a1 + 3);
  if ( v26 < 0 )
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v26);
  v28 = *(_QWORD *)(a4 + 56);
  if ( v28 )
  {
    LOBYTE(v27) = v28 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL))(v28, v27);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
}
