/*
 * XREFs of TpReleaseIoCompletion @ 0x1800572C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_180025900((PPEB_LDR_DATA)Io, 1LL, 0LL) && (unsigned int)sub_180058A78(Io, 1LL) )
  {
    *((_QWORD *)Io + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
