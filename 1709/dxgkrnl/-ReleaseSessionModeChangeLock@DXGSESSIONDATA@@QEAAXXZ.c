/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0007FEC
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C008FFAC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(struct _KTHREAD **this)
{
  char *v1; // rcx

  if ( this[2316] == KeGetCurrentThread() )
  {
    v1 = (char *)(this + 2315);
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this + 2315, 0LL);
  }
  KeLeaveCriticalRegion();
}
