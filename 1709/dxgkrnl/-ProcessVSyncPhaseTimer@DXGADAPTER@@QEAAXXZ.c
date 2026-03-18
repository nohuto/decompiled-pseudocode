/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0084E4C
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00B3EA0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0002190 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this)
{
  char *v1; // rbx

  v1 = (char *)this + 3592;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3592));
  if ( *((_DWORD *)this + 856) == 1 )
  {
    DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, 1);
  }
  else
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
