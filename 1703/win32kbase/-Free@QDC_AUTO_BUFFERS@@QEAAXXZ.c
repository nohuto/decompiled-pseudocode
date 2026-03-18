/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0062444
 * Callers:
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ @ 0x1C00623DC (-Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ.c)
 *     DrvIsExternalMonitorActive @ 0x1C009CB5C (DrvIsExternalMonitorActive.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  QDC_AUTO_BUFFERS *v2; // rcx
  QDC_AUTO_BUFFERS *v3; // rcx

  v2 = (QDC_AUTO_BUFFERS *)*((_QWORD *)this + 67);
  if ( v2 && v2 != this )
    Win32FreePool((__int64)v2);
  v3 = (QDC_AUTO_BUFFERS *)*((_QWORD *)this + 68);
  if ( v3 )
  {
    if ( v3 != (QDC_AUTO_BUFFERS *)((char *)this + 144) )
      Win32FreePool((__int64)v3);
  }
}
