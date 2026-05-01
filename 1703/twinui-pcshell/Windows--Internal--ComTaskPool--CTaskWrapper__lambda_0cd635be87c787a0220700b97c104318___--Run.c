/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318___::Run @ 0x18006BAE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C (_lambda_1d725a211fae648eb22a29137fc16fd7_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_1d725a211fae648eb22a29137fc16fd7_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
