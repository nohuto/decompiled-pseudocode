/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18007B150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)sub_180025900((PPEB_LDR_DATA)Io, 0LL, 0LL) )
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
        sub_180055584((_RTL_SRWLOCK *)Io + 7, -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
