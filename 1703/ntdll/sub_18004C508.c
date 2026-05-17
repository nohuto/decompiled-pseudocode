/*
 * XREFs of sub_18004C508 @ 0x18004C508
 * Callers:
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

char sub_18004C508()
{
  char v0; // bl
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  char *v5; // rcx

  v0 = 0;
  v1 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 )
  {
    v5 = (unsigned int)RtlGetCurrentServiceSessionId()
       ? (char *)NtCurrentPeb()->HotpatchInformation + 555
       : (char *)2147353477;
    if ( (*v5 & 0x40) != 0 )
      return 1;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
      return 1;
  }
  return v0;
}
