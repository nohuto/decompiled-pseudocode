/*
 * XREFs of TpCancelAsyncIoOperation @ 0x180013D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)sub_1800176B8(Io, 0LL, 0LL) )
  {
    _m_prefetchw((char *)Io + 280);
    v2 = *((_DWORD *)Io + 70);
    while ( v2 > 0 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)Io + 70, v2 - 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
      {
        sub_18007358C((char *)Io + 56, 0xFFFFFFFFLL, 0LL);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
