/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___::Run @ 0x18006B6B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x180067D74 (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_9d63f641584ad32e324d3d55f9a00553_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
