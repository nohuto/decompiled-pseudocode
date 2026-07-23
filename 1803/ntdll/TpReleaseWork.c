/*
 * XREFs of TpReleaseWork @ 0x1800589B0
 * Callers:
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 * Callees:
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_180058A10(Work, 1LL, 0LL) && (unsigned int)sub_180058A78(Work, 1LL) )
  {
    *((_QWORD *)Work + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
