/*
 * XREFs of ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18014729C
 * Callers:
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801474C0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180147994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
        CDesktopRenderTarget *this,
        const struct CDisplay *a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  const struct CDisplay **v6; // rcx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 36) )
  {
    while ( 1 )
    {
      v6 = *(const struct CDisplay ***)(*((_QWORD *)this + 15) + 8LL * v5);
      if ( v6[14] == a2 )
      {
        if ( (*((unsigned __int8 (__fastcall **)(const struct CDisplay **))*v6 + 22))(v6) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 36) )
        return (struct CHwndRenderTarget *)v2;
    }
    return *(struct CHwndRenderTarget **)(*((_QWORD *)this + 15) + 8LL * v5);
  }
  return (struct CHwndRenderTarget *)v2;
}
