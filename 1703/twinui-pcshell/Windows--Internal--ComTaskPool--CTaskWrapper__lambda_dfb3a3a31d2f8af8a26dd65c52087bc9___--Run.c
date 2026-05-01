/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___::Run @ 0x18006BC40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eb88fe4cf858de5e6f9898dba3345098_::operator() @ 0x1800662D8 (_lambda_eb88fe4cf858de5e6f9898dba3345098_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_eb88fe4cf858de5e6f9898dba3345098_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
