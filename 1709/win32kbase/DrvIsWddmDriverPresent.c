/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C0026524
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0064710 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0064A40 (DrvQueryDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F9720 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 DrvIsWddmDriverPresent()
{
  wchar_t *i; // rcx

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
