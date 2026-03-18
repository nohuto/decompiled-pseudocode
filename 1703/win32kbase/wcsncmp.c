/*
 * XREFs of wcsncmp @ 0x1C009D52C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0069EA8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
