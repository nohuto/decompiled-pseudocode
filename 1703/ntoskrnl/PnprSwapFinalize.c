/*
 * XREFs of PnprSwapFinalize @ 0x1401FA9BC
 * Callers:
 *     PnprSwap @ 0x1401FA790 (PnprSwap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PnprRecopyMirrorPages @ 0x1401FA618 (PnprRecopyMirrorPages.c)
 *     PnprGetMillisecondCounter @ 0x14041723C (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  __int64 v0; // rcx
  int v1; // ebx
  int MillisecondCounter; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx

  v0 = PnprContext;
  v1 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    PnprRecopyMirrorPages();
    v0 = PnprContext;
  }
  *(_DWORD *)(v0 + 64) &= ~4u;
  if ( (*(_DWORD *)(v0 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(PnprContext + 10704) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v3 = PnprContext;
    *(_DWORD *)(PnprContext + 10772) = MillisecondCounter;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 10704))(*(_QWORD *)(v3 + 10640));
    if ( v1 < 0 )
    {
      v4 = PnprContext;
      v5 = *(_DWORD *)(PnprContext + 10744);
      if ( !v5 )
        v5 = 2963;
      *(_DWORD *)(PnprContext + 10744) = v5;
      v6 = *(_DWORD *)(v4 + 10748);
      if ( !v6 )
        v6 = 8;
      *(_DWORD *)(v4 + 10748) = v6;
    }
    *(_DWORD *)(PnprContext + 10776) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v1;
}
