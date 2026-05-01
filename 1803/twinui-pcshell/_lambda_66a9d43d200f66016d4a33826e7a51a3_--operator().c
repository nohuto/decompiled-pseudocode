/*
 * XREFs of _lambda_66a9d43d200f66016d4a33826e7a51a3_::operator() @ 0x18008F8BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_66a9d43d200f66016d4a33826e7a51a3___::Run @ 0x18008F8B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_66a9d43d200f66016d4a33826e7a51a3___--Run.c)
 * Callees:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180013BD0 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x180016EA0 (-SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_66a9d43d200f66016d4a33826e7a51a3_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  CApplicationFrameWrapper *v4; // rcx
  const struct tagSIZE *v5; // rdx
  __int64 (__fastcall *v6)(CApplicationFrameWrapper *, const struct tagSIZE *); // rax
  int v7; // eax
  CFrameApplicationPresentation *v8; // rcx
  void (*v9)(void); // rax
  RTL_SRWLOCK *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(CApplicationFrameWrapper **)(v3 + 120);
    v5 = (const struct tagSIZE *)(v3 + 152);
    v6 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, const struct tagSIZE *))(*(_QWORD *)v4 + 80LL);
    if ( v6 == CApplicationFrameWrapper::SetMinimumSize )
      v7 = CApplicationFrameWrapper::SetMinimumSize(v4, v5);
    else
      v7 = v6(v4, v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x533,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v7,
        v11);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = *(CFrameApplicationPresentation **)(a1 + 16);
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 192LL);
    if ( (char *)v9 == (char *)CFrameApplicationPresentation::UpdateSizeConstraints )
      CFrameApplicationPresentation::UpdateSizeConstraints(v8);
    else
      v9();
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL);
  ReleaseSRWLockExclusive(v10);
}
