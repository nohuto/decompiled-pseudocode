/*
 * XREFs of ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0120DB8
 * Callers:
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01204D0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0120FAC (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 */

char __fastcall InputExtensibilityCallout::PrepareForUserModeCallout(
        InputExtensibilityCallout *this,
        struct RawInputManagerDeviceObject *a2,
        char a3)
{
  __int64 v3; // rdi
  InputExtensibilityCallout *v7; // rcx
  char v8; // bl

  v3 = *((_QWORD *)a2 + 52);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !gptiCurrent
    || *(struct _KTHREAD **)(v3 + 40) != KeGetCurrentThread() )
  {
    return 0;
  }
  v8 = 1;
  *(_BYTE *)(v3 + 75) = 1;
  *((_BYTE *)this + 8) = 1;
  if ( InputExtensibilityCallout::ShouldUpdateInputBufferLockState(v7, (const struct RawInputManagerObject *)v3) )
  {
    *(_QWORD *)(v3 + 560) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 552, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a3 )
  {
    *(_QWORD *)(v3 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
    KeLeaveCriticalRegion();
  }
  ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0);
  *((_QWORD *)gptiCurrent + 165) = a2;
  return v8;
}
