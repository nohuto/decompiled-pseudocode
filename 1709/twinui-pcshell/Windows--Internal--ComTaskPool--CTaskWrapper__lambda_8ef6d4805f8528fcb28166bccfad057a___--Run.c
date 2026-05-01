/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ef6d4805f8528fcb28166bccfad057a___::Run @ 0x18006EC30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3dca9bc61b2dec62e80cc000dd474755_::operator() @ 0x180069208 (_lambda_3dca9bc61b2dec62e80cc000dd474755_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ef6d4805f8528fcb28166bccfad057a___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_3dca9bc61b2dec62e80cc000dd474755_::operator()((unsigned int *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
