/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x1C00198DC
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001BCF4 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhResetNotifyCompletion @ 0x1C0047B3C (UsbhResetNotifyCompletion.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // al
  __int64 v7; // rax

  v3 = PdoExt(a2);
  v4 = PdoExt(a2) + 944;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v4 + 136) = 1;
  *(_BYTE *)(v4 + 132) = v5;
  *(_DWORD *)(v4 + 88) = 2018460752;
  *(_DWORD *)(v4 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v4;
  *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
  if ( *(_DWORD *)(PdoExt(a2) + 1124) == 3 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1208));
    *(_DWORD *)(v3 + 784) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 1208), v6);
  }
  v7 = PdoExt(a2);
  *(_DWORD *)(v7 + 1080) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v7 + 1032) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v7 + 1076));
}
