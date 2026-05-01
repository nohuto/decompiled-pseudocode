/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11a7567f3465c52bdf1b4059be609446___::Run @ 0x18006ED10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aa48c572b33de96146be9e3e412c5ad4_::operator() @ 0x1800685B0 (_lambda_aa48c572b33de96146be9e3e412c5ad4_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11a7567f3465c52bdf1b4059be609446___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_aa48c572b33de96146be9e3e412c5ad4_::operator()((CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
