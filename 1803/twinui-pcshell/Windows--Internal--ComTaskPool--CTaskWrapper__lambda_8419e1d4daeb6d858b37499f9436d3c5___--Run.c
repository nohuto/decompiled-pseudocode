/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8419e1d4daeb6d858b37499f9436d3c5___::Run @ 0x18008CEF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aa8acc1eed1698d6ba192654be930d00_::operator() @ 0x18008CF5C (_lambda_aa8acc1eed1698d6ba192654be930d00_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8419e1d4daeb6d858b37499f9436d3c5___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_aa8acc1eed1698d6ba192654be930d00_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
  ReleaseSRWLockExclusive(v3);
}
