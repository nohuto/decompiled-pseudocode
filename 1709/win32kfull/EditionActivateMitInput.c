/*
 * XREFs of EditionActivateMitInput @ 0x1C00FD690
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitDisEngagement @ 0x1C00FD760 (WaitForRitDisEngagement.c)
 *     ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C00FD804 (-InitMitIocpSupport@@YAJHPEAX0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionActivateMitInput(int a1, void *a2, void *a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebx

  v3 = gpMitInfo;
  v4 = 0;
  if ( !gpMitInfo )
  {
    v3 = &gMitInfo;
    gpMitInfo = &gMitInfo;
  }
  v3[13] = a1;
  if ( a1 )
    EtwTraceDitMmcssWorkStop();
  else
    gbDITInHitTest = 1;
  if ( gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing )
  {
    v5 = *((_DWORD *)gpMitInfo + 14);
    *((_DWORD *)gpMitInfo + 14) = 0;
    if ( (int)InitMitIocpSupport(v5, a2, a3) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = WaitForRitDisEngagement(v5);
      if ( v4 )
        gbNoMoreDITHitTest = 0;
    }
  }
  if ( gbDITInHitTest )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
  }
  return v4;
}
