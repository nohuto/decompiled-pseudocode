/*
 * XREFs of PoSetCsSessionGoal @ 0x14022F3C8
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     TtmpSetCsSessionGoal @ 0x1406D9C54 (TtmpSetCsSessionGoal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 PoSetCsSessionGoal()
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)&xmmword_14036E6E0 + 1) )
    return (*((__int64 (**)(void))&xmmword_14036E6E0 + 1))();
  return result;
}
