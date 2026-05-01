/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::Run @ 0x18006B190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::Run(
        _QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rcx
  bool v6; // al
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(a1[3] + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = a1[5];
    v4 = 1;
    v5 = a1[6];
    v8 = v3;
    v9 = v5;
    v6 = (int)v3 > 0 && SHIDWORD(v3) > 0;
    if ( (int)v5 <= 0 || SHIDWORD(v5) <= 0 )
      v4 = 0;
    (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(a1[4] + 112LL) + 184LL))(
      *(_QWORD *)(a1[4] + 112LL),
      (unsigned __int64)&v8 & -(__int64)v6,
      (unsigned __int64)&v9 & -(__int64)(v4 != 0));
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(a1[3] + 196LL);
  ReleaseSRWLockExclusive(v7);
}
