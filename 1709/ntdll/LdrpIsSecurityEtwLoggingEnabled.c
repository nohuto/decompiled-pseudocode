/*
 * XREFs of LdrpIsSecurityEtwLoggingEnabled @ 0x18004DE54
 * Callers:
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

char LdrpIsSecurityEtwLoggingEnabled()
{
  char v0; // bl
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  char *v5; // rcx

  v0 = 0;
  v1 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 )
  {
    v5 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v5 & 0x40) != 0 )
      return 1;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
      return 1;
  }
  return v0;
}
