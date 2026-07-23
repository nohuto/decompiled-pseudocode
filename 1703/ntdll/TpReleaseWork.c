/*
 * XREFs of TpReleaseWork @ 0x180014510
 * Callers:
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_180014918(Work, 1LL, 0LL) )
  {
    LOBYTE(v2) = sub_1800144B8((__int64)Work, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Work + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
    }
  }
}
