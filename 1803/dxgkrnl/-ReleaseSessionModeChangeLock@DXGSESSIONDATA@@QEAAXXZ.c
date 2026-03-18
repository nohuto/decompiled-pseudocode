/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0001BBC
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C00E292C (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  char *v1; // r8
  bool v2; // zf
  char *v3; // rcx

  v1 = (char *)this + 18520;
  v2 = *((_QWORD *)this + 2316) == (_QWORD)KeGetCurrentThread();
  v3 = (char *)this + 18520;
  if ( v2 )
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
}
