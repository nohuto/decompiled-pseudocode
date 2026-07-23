/*
 * XREFs of sub_180006EE8 @ 0x180006EE8
 * Callers:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800FFBCC @ 0x1800FFBCC (sub_1800FFBCC.c)
 */

bool __fastcall sub_180006EE8(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int16 v8; // ax

  v4 = (dword_18015BFDC & 4) == 0
    && (v8 = *(_WORD *)(a1 + 172), v8 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)word_1801195E0[v8]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
  else
    v5 = 2147353482LL;
  if ( *(_BYTE *)v5
    || (RtlGetCurrentServiceSessionId()
      ? (UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger)
      : (UserModeGlobalLogger = 2147353472LL),
        *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v4 )
      sub_1800FFBCC(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
  }
  return v4;
}
