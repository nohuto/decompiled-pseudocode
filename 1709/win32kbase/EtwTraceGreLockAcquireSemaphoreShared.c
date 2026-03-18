/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1C001EDD0 (GreSfmGetNotificationTokens.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046FB0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00646A0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00680E8 (DrvNotifyModeChangeStartStop.c)
 *     GreLockVisRgnShared @ 0x1C0068280 (GreLockVisRgnShared.c)
 *     GreSfmOpenTokenEvent @ 0x1C0089DE0 (GreSfmOpenTokenEvent.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C008F980 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DxEngLockShareSem @ 0x1C00F34F0 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C00FB9E0 (EngAcquireSemaphoreShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz(a1, (unsigned int)&LockAcquireShared, a3, a2, a1);
  }
  return result;
}
