/*
 * XREFs of _lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_::operator() @ 0x18008F73C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::Run @ 0x18008F730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___--Run.c)
 * Callees:
 *     ?SetSizeConstraintOverridesPhysical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z @ 0x180016DB0 (-SetSizeConstraintOverridesPhysical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // rax
  bool v6; // cl
  struct tagSIZE *v7; // rdx
  CApplicationFrameWrapper *v8; // rcx
  struct tagSIZE *v9; // r8
  __int64 (__fastcall *v10)(CApplicationFrameWrapper *, struct tagSIZE *, struct tagSIZE *); // rax
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(a1[1] + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = a1[3];
    v4 = 1;
    v5 = a1[4];
    v12 = v3;
    v13 = v5;
    v6 = (int)v3 > 0 && SHIDWORD(v3) > 0;
    v7 = (struct tagSIZE *)((unsigned __int64)&v12 & -(__int64)v6);
    if ( (int)v5 <= 0 || SHIDWORD(v5) <= 0 )
      v4 = 0;
    v8 = *(CApplicationFrameWrapper **)(a1[2] + 120LL);
    v9 = (struct tagSIZE *)((unsigned __int64)&v13 & -(__int64)(v4 != 0));
    v10 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)v8 + 184LL);
    if ( v10 == CApplicationFrameWrapper::SetSizeConstraintOverridesPhysical )
      CApplicationFrameWrapper::SetSizeConstraintOverridesPhysical(v8, v7, v9);
    else
      v10(v8, v7, v9);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(a1[1] + 204LL);
  ReleaseSRWLockExclusive(v11);
}
