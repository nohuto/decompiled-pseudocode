/*
 * XREFs of _lambda_46f447173730af1e316e4d8e7839b9be_::operator() @ 0x18008FE3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::Run @ 0x18008FE30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___--Run.c)
 * Callees:
 *     ?SetPreferredAspectRatioHint@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@@Z @ 0x180016D70 (-SetPreferredAspectRatioHint@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_46f447173730af1e316e4d8e7839b9be_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rax
  bool v4; // cl
  struct tagSIZE *v5; // rdx
  __int64 (__fastcall *v6)(CApplicationFrameWrapper *, struct tagSIZE *); // rax
  CApplicationFrameWrapper *v7; // rcx
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(a1[1] + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = a1[3];
    v4 = 0;
    v9 = v3;
    if ( (int)v3 > 0 )
      v4 = SHIDWORD(v3) > 0;
    v5 = (struct tagSIZE *)((unsigned __int64)&v9 & -(__int64)v4);
    v6 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct tagSIZE *))(**(_QWORD **)(a1[2] + 120LL) + 200LL);
    v7 = *(CApplicationFrameWrapper **)(a1[2] + 120LL);
    if ( v6 == CApplicationFrameWrapper::SetPreferredAspectRatioHint )
      CApplicationFrameWrapper::SetPreferredAspectRatioHint(v7, v5);
    else
      v6(v7, v5);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(a1[1] + 204LL);
  ReleaseSRWLockExclusive(v8);
}
