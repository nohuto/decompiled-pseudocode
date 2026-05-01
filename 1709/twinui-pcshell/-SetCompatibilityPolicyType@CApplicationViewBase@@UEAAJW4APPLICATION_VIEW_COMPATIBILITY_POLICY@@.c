/*
 * XREFs of ?SetCompatibilityPolicyType@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z @ 0x180084DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::SetCompatibilityPolicyType(__int64 a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)(a1 + 40);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 40));
  *(_DWORD *)(a1 + 80) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
