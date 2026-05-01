/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run @ 0x18006B640
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x1800680D4 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_4dbb30731e1cb4b517ffd4972428404c_::operator()((struct IImmersiveApplication **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
