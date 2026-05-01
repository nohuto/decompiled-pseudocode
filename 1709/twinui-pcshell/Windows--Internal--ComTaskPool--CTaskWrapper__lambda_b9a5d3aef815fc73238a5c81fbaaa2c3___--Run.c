/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___::Run @ 0x18006EE00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1bed2b100b1af394f2735e08786001a_::operator() @ 0x1800681D8 (_lambda_e1bed2b100b1af394f2735e08786001a_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_e1bed2b100b1af394f2735e08786001a_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
