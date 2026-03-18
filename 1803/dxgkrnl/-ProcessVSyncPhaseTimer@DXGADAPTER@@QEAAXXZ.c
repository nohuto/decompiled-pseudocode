/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00F52DC
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00AA5D0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015ACC (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this)
{
  char *v1; // rbx
  __int64 v3; // r8

  v1 = (char *)this + 3752;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3752));
  if ( *((_DWORD *)this + 896) == 1 )
  {
    LOBYTE(v3) = 1;
    DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v3);
  }
  else
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
