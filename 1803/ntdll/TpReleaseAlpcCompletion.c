/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800567B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_180056970(Alpc, 1LL, 0LL) && (unsigned int)sub_180058A78((char *)Alpc + 72, 1LL) )
  {
    *((_QWORD *)Alpc + 32) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Alpc + 18, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(char *))Alpc + 10))((char *)Alpc + 72);
  }
}
