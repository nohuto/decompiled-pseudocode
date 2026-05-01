/*
 * XREFs of ??$?0UIGameListEntry_Private@GamesEnumeration@Preview@Gaming@Windows@@@CMarshaledInterface@@QEAA@PEAUIGameListEntry_Private@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18001BCB8
 * Callers:
 *     _lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator() @ 0x18001A924 (_lambda_f57c409ef9907fe20f12ddbbf436a36a_--operator().c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180025080 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

CMarshaledInterface *__fastcall CMarshaledInterface::CMarshaledInterface(
        CMarshaledInterface *this,
        struct IUnknown *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf
  DWORD CurrentThreadId; // eax
  bool v8; // sf
  _DWORD *v9; // rcx
  __int64 v10; // rax

  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = &CMarshaledInterface::CMarshalStream::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    v4[6] = 2;
    *((_QWORD *)v4 + 4) = 0LL;
    v4[10] = 0;
    CurrentThreadId = GetCurrentThreadId();
    v5[6] = 2;
    v5[10] = CurrentThreadId;
    v8 = (int)AgileGitPtr::Initialize((AgileGitPtr *)(v5 + 8), &GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3, a2) < 0;
    v9 = v5;
    v10 = *(_QWORD *)v5;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_DWORD *))(v10 + 8))(v5);
      *(_QWORD *)this = v5;
      v9 = v5;
      v10 = *(_QWORD *)v5;
    }
    (*(void (__fastcall **)(_DWORD *))(v10 + 16))(v9);
  }
  return this;
}
