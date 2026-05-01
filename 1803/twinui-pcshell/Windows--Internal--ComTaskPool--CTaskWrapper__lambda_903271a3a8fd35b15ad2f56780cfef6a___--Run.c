/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___::Run @ 0x180137200
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f5c3a3508d94124ca65af9e8c1942170_::operator() @ 0x180136824 (_lambda_f5c3a3508d94124ca65af9e8c1942170_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_f5c3a3508d94124ca65af9e8c1942170_::operator()((struct CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
  ReleaseSRWLockExclusive(v3);
}
