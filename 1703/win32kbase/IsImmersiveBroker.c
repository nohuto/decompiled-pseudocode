/*
 * XREFs of IsImmersiveBroker @ 0x1C0078530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBroker(__int64 a1)
{
  PVOID v2; // rax
  unsigned int v3; // ecx

  if ( (*(_DWORD *)(a1 + 768) & 0x30) == 0x20 )
    return 1LL;
  v2 = *(PVOID *)a1;
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == g_pepDwm )
      return 1LL;
  }
  LOBYTE(v3) = v2 == gpepCSRSS;
  return v3;
}
