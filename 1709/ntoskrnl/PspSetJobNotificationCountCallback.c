/*
 * XREFs of PspSetJobNotificationCountCallback @ 0x14059A1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobNotificationCountCallback(__int64 a1, _DWORD *a2)
{
  if ( *a2 )
    ++*(_DWORD *)(a1 + 868);
  else
    --*(_DWORD *)(a1 + 868);
  return 0LL;
}
