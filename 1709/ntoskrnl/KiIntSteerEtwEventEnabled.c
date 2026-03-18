/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140093280
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogState @ 0x1400B3634 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x14020BA1C (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 */

bool __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int8 v3; // r10

  return KiIntSteerEtwHandle
      && ((unsigned __int8)EtwpLevelKeywordEnabled(
                             *(_QWORD *)(KiIntSteerEtwHandle + 32) + 80LL,
                             *(unsigned __int8 *)(a1 + 4),
                             *(_QWORD *)(a1 + 8),
                             KiIntSteerEtwHandle)
       || *(_BYTE *)(v2 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 80LL, v3, v1, v2));
}
