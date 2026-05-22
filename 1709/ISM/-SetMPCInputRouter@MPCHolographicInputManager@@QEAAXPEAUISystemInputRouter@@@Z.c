/*
 * XREFs of ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800595F4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x180058964 (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::SetMPCInputRouter(
        MPCHolographicInputManager *this,
        struct ISystemInputRouter *a2,
        __int64 a3,
        const char *a4)
{
  struct ISystemInputRouter *v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct ISystemInputRouter *)*((_QWORD *)this + 382);
  if ( v4 )
  {
    if ( v4 != a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x521,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        a4);
      __debugbreak();
    }
  }
  else
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *((_QWORD *)this + 382);
      *((_QWORD *)this + 382) = a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *((_QWORD *)this + 383);
    if ( v8 )
    {
      *((_QWORD *)this + 383) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 382))(
           *((_QWORD *)this + 382),
           &GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e,
           (char *)this + 3064);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x526,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800596DCLL);
    }
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
}
