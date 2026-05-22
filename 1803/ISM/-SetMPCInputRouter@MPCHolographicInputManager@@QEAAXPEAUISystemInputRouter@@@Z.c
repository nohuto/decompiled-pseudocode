/*
 * XREFs of ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180050910
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008598C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x18004FDAC (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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

  v4 = (struct ISystemInputRouter *)*((_QWORD *)this + 243);
  if ( v4 )
  {
    if ( v4 != a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x551,
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
      v7 = *((_QWORD *)this + 243);
      *((_QWORD *)this + 243) = a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *((_QWORD *)this + 244);
    if ( v8 )
    {
      *((_QWORD *)this + 244) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 243))(
           *((_QWORD *)this + 243),
           &GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e,
           (char *)this + 1952);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x556,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800509F0LL);
    }
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
}
