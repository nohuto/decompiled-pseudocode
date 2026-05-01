/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run @ 0x18006E890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x18006A540 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_4dbb30731e1cb4b517ffd4972428404c_::operator()((struct IImmersiveApplication **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
