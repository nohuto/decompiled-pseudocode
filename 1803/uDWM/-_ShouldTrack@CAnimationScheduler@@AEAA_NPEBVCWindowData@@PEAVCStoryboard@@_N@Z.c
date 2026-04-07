/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000B6C8
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000C070 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18006C600 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180001B3C (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  char v4; // bl
  HWND *v9; // rdi

  v4 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( *((_DWORD *)a3 + 6) == 4 || !CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return v4;
    return 1;
  }
  v9 = a2;
  if ( a2 )
  {
    while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 88LL))(
              a3,
              *((unsigned int *)v9 + 150)) == -1 )
    {
      v9 = (HWND *)v9[68];
      if ( !v9 )
        return v4;
    }
    if ( a4
      || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 96LL))(
            a3,
            *((unsigned int *)v9 + 150)) & 2) == 0 )
    {
      if ( v9 != a2 )
        return ((_DWORD)v9[75] & 0x10000000) != 0;
      return 1;
    }
  }
  return v4;
}
