/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140017630
 * Callers:
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140016FD0 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x140054A24 (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(CCrossProcessBaseServerEndpoint *this)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // r9

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
      *((unsigned int *)this + 38),
      *((_QWORD *)this + 50));
  }
  if ( (*((_DWORD *)this + 38) & 0x40000) != 0 )
  {
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 7) + 156LL), 0, 0) & 1;
    if ( v2 )
    {
      v3 = *((_QWORD *)this + 50);
      if ( v3 )
      {
        _InterlockedExchange64((volatile __int64 *)this + 49, v3);
        *((_QWORD *)this + 50) = 0LL;
      }
    }
    v4 = *((_QWORD *)this + 49);
    if ( v4 )
    {
      if ( (*((_BYTE *)this + 152) & 1) == 0 || v2 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 5u )
        {
          SetEvent(*((HANDLE *)this + 49));
        }
        else
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids, v4);
          SetEvent(*((HANDLE *)this + 49));
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids);
    }
  }
}
