/*
 * XREFs of ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0014C84
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK(DXGPROCESSVIDMMLOCK *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = v1 + 136;
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
