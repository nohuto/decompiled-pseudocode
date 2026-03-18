/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x1C00C8B90
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01E3CA0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1)
{
  BOOL v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  v1 = IsNonImmersiveBand(a1);
  v3 = 0;
  if ( !v1 || (*(_BYTE *)(v2 + 306) & 0x40) != 0 )
    return 1;
  return v3;
}
