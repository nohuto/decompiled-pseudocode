/*
 * XREFs of EditionActivateMitInput @ 0x1C0108F20
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 *     ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C01090D8 (-InitMitIocpSupport@@YAJHPEAX0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall EditionActivateMitInput(int a1, __int64 a2, void *a3)
{
  _DWORD *v3; // rdx
  unsigned int v4; // edi
  int inited; // ebx
  __int64 v6; // rax

  v3 = gpMitInfo;
  if ( !gpMitInfo )
  {
    v3 = &gMitInfo;
    gpMitInfo = &gMitInfo;
  }
  v3[13] = a1;
  if ( a1 )
  {
    EtwTraceDitMmcssWorkStop();
    v3 = gpMitInfo;
  }
  else
  {
    gbDITInHitTest = 1;
  }
  if ( gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing )
  {
    v4 = v3[14];
    v3[14] = 0;
    inited = InitMitIocpSupport(v4, v3, a3);
    if ( inited >= 0 )
    {
      v6 = LockInputThreadDesktop(*(_QWORD *)(gptiRit + 408LL));
      if ( !grpdeskDitStartup )
        MEMORY[0] = v6;
      if ( (unsigned int)WaitForRitDisEngagement(v4) )
      {
        gbNoMoreDITHitTest = 0;
        inited = 0;
      }
      else
      {
        LockInputThreadDesktop(grpdeskDitStartup);
        inited = -1073741823;
      }
    }
  }
  else
  {
    inited = -1073741822;
  }
  if ( gbDITInHitTest == 1 )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
  }
  return inited >= 0;
}
