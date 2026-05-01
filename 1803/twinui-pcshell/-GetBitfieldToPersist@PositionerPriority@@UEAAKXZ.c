/*
 * XREFs of ?GetBitfieldToPersist@PositionerPriority@@UEAAKXZ @ 0x1800249B0
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PositionerPriority::GetBitfieldToPersist(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  unsigned int v3; // edi
  unsigned __int64 i; // rcx

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = 0;
  for ( i = 0LL; i < 7; ++i )
  {
    if ( *((_BYTE *)&this[3].Ptr + i) )
      v3 |= 1 << i;
  }
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
