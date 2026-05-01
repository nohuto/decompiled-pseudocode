/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ae01d123478e9bd18be70bedd94d30f___::Run @ 0x18006ECA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator() @ 0x180068BCC (_lambda_e1365bb4f253a4ea24e8f51062dc9f67_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ae01d123478e9bd18be70bedd94d30f___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
