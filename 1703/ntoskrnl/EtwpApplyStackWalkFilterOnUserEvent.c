/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1407129E4
 * Callers:
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkFilter @ 0x14025730C (EtwpApplyStackWalkFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}
