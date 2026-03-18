/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x140750ACC
 * Callers:
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x140280658 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}
