/*
 * XREFs of RtlSidEqualLevel @ 0x1800E5120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlSidEqualLevel(PSID Sid1, PSID Sid2, PBOOLEAN EqualLevel)
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
  *EqualLevel = *((_DWORD *)Sid1 + 2) == *((_DWORD *)Sid2 + 2);
  return 0;
}
