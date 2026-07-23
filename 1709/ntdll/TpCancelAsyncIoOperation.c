/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18000BA70
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18000F958 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 0LL) )
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
        TppBarrierAdjust((char *)Io + 56, 0xFFFFFFFFLL, 0LL);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
