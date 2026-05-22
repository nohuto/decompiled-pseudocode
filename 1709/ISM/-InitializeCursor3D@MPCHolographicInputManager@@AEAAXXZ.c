/*
 * XREFs of ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x180058964
 * Callers:
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800595F4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHolographicInputManager::InitializeCursor3D(MPCHolographicInputManager *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, char *); // rcx
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rcx
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v16[656]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+AB0h] [rbp+9A8h]

  v15[1] = -2LL;
  *(_QWORD *)v14 = 0LL;
  v13 = 0LL;
  v15[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  v16[1] = 514;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 382) + 96LL))(*((_QWORD *)this + 382), v15);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 382) + 80LL))(*((_QWORD *)this + 382), &v13);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = v13;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  if ( *(_QWORD *)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v5)[2])(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, int *))(*(_QWORD *)v4 + 24LL))(
         v4,
         v16,
         v15[0],
         0LL,
         v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  v8 = *((_QWORD *)this + 388);
  if ( v8 )
  {
    *((_QWORD *)this + 388) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (**v7)(v7, &GUID_a906d320_9167_4955_a961_8a982929b899, (char *)this + 3104);
  if ( v9 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3A0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  if ( *(_QWORD *)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v12)[2])(v12);
  }
}
