/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8___::Run @ 0x18006BA70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4 (_lambda_c4af78c0c8077c37e96163482dfb0569_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_c4af78c0c8077c37e96163482dfb0569_::operator()((unsigned int *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
