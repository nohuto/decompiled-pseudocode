/*
 * XREFs of ndisGetNewPatternEntryId @ 0x1C00BB08C
 * Callers:
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BA92C (ndisMiniportPreAddWoLPattern.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00D4D0C (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00D6FD8 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(__int64 **a1)
{
  __int64 *v1; // rdx
  unsigned int i; // r8d
  unsigned int v4; // ecx

  v1 = *a1;
  for ( i = 0; v1; i = v4 )
  {
    v4 = *((_DWORD *)v1 + 10);
    if ( v4 > i + 1 )
      break;
    v1 = (__int64 *)*v1;
  }
  return i + 1;
}
