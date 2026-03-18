/*
 * XREFs of PoSetCsSessionGoal @ 0x1402435C0
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     TtmpSetCsSessionGoal @ 0x140710064 (TtmpSetCsSessionGoal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 PoSetCsSessionGoal()
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)&xmmword_14038D4D0 + 1) )
    return (*((__int64 (**)(void))&xmmword_14038D4D0 + 1))();
  return result;
}
