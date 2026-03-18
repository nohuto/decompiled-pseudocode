/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x1401093A0
 * Callers:
 *     KeIntSteerPeriodic @ 0x140034710 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogState @ 0x140169544 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x14024A018 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
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
                             *(_QWORD *)(a1 + 8))
       || *(_BYTE *)(v2 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 80LL, v3, v1));
}
