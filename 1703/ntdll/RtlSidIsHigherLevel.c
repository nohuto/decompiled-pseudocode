/*
 * XREFs of RtlSidIsHigherLevel @ 0x1800E5A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

NTSTATUS __cdecl RtlSidIsHigherLevel(PSID Sid1, PSID Sid2, PBOOLEAN HigherLevel)
{
  int v3; // r9d
  int v6; // ecx

  v3 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v3 )
    v3 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v3 )
    return -1073741811;
  v6 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v6 )
    v6 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v6 )
    return -1073741811;
  *HigherLevel = *((_DWORD *)Sid1 + 2) > *((_DWORD *)Sid2 + 2);
  return 0;
}
