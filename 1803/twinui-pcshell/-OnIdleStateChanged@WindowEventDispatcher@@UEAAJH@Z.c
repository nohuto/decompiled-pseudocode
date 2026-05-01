/*
 * XREFs of ?OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z @ 0x1801D6920
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ @ 0x1801CBBC4 (-IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ.c)
 */

__int64 __fastcall WindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  ShellExperienceConfiguration *v2; // rcx

  v1 = this + 33;
  AcquireSRWLockExclusive(this + 33);
  ShellExperienceConfiguration::IsSuspensionEnabled(v2);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return 0LL;
}
