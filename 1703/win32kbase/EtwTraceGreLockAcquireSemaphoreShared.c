/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0
 * Callers:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C000D1F8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0037FA0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C005B9C4 (DrvNotifyModeChangeStartStop.c)
 *     GreLockVisRgnShared @ 0x1C005BB60 (GreLockVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C005BBF0 (GreLockVisRgnSharedOrExclusive.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 *     GreSfmOpenTokenEvent @ 0x1C007D990 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C007DAD0 (GreSfmGetNotificationTokens.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0089F40 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     DxEngLockShareSem @ 0x1C00F0910 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C00FB5B0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pz(a1, &LockAcquireShared);
  }
  return result;
}
