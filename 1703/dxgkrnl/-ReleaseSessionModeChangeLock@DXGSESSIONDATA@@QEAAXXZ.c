/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C000D514
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00993A0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(struct _KTHREAD **this)
{
  char *v1; // rcx

  if ( this[2315] == KeGetCurrentThread() )
  {
    v1 = (char *)(this + 2314);
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this + 2314, 0LL);
  }
  KeLeaveCriticalRegion();
}
