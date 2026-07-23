/*
 * XREFs of sub_180042604 @ 0x180042604
 * Callers:
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

char sub_180042604()
{
  char v0; // bl
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  USHORT *v5; // rcx

  v0 = 0;
  v1 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 )
  {
    v5 = RtlGetCurrentServiceSessionId()
       ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
       : (USHORT *)2147353477;
    if ( (*(_BYTE *)v5 & 0x40) != 0 )
      return 1;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
      return 1;
  }
  return v0;
}
