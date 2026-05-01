/*
 * XREFs of ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x1801B4E50
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1801B4EA0 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopDataSource::Uninitialize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 37;
  AcquireSRWLockExclusive(this + 37);
  VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)&this[-2]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
