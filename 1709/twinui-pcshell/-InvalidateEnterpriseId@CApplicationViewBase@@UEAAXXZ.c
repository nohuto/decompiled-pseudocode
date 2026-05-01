/*
 * XREFs of ?InvalidateEnterpriseId@CApplicationViewBase@@UEAAXXZ @ 0x1800853F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewBase::InvalidateEnterpriseId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  LOBYTE(this[4].Ptr) = 1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
