/*
 * XREFs of ?Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ @ 0x1C00623DC
 * Callers:
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvIsExternalMonitorActive @ 0x1C009CB5C (DrvIsExternalMonitorActive.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0062444 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::Allocate(QDC_AUTO_BUFFERS *this)
{
  unsigned int v2; // eax
  QDC_AUTO_BUFFERS *v3; // rax
  unsigned int v4; // ecx
  char *v5; // rax
  bool v6; // zf

  QDC_AUTO_BUFFERS::Free(this);
  v2 = *((_DWORD *)this + 132);
  if ( v2 > 2 )
    v3 = (QDC_AUTO_BUFFERS *)PALLOCMEM2(72 * v2, 1936876615LL, 1);
  else
    v3 = this;
  v4 = *((_DWORD *)this + 133);
  *((_QWORD *)this + 67) = v3;
  if ( v4 > 6 )
    v5 = (char *)PALLOCMEM2(v4 << 6, 1936876615LL, 1);
  else
    v5 = (char *)this + 144;
  v6 = *((_QWORD *)this + 67) == 0LL;
  *((_QWORD *)this + 68) = v5;
  if ( v6 || !v5 )
    return 3221225495LL;
  else
    return 0LL;
}
