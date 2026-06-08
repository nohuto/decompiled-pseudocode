/*
 * XREFs of RegisterGuestIdleStates @ 0x1C00275B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 264) & 0x200LL) != 0 )
    return RegisterVmIdleStates();
  else
    return 0LL;
}
