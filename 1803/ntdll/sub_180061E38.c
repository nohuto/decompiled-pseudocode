/*
 * XREFs of sub_180061E38 @ 0x180061E38
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 */

bool __fastcall sub_180061E38(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int16 v8; // ax

  v4 = (dword_18015D040 & 4) == 0
    && (v8 = *(_WORD *)(a1 + 172), v8 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)word_180118FE0[v8]
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
      sub_1800FE558(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
  }
  return v4;
}
