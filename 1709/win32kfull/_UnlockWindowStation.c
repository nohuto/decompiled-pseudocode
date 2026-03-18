/*
 * XREFs of _UnlockWindowStation @ 0x1C01200EC
 * Callers:
 *     NtUserUnlockWindowStation @ 0x1C0120090 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1)
{
  int v2; // eax
  int v3; // ecx

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = -2;
    if ( (v2 & 8) == 0 )
      v3 = -4;
    gdwLocks &= v3;
    *(_DWORD *)(a1 + 32) = v3 & v2;
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, gpidLogon);
    return 0LL;
  }
}
