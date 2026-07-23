/*
 * XREFs of TpReleaseIoCompletion @ 0x1800816C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_1800176B8((PPEB_LDR_DATA)Io, 1LL, 0LL) )
  {
    LOBYTE(v2) = sub_1800144B8((__int64)Io, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Io + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
    }
  }
}
