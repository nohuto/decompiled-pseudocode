/*
 * XREFs of UserSetScaleFactorsFromRemoteMetric @ 0x1C0091004
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     <none>
 */

void *__fastcall UserSetScaleFactorsFromRemoteMetric(int a1)
{
  void *result; // rax

  result = gpsi;
  if ( a1 )
    *((_DWORD *)gpsi + 555) |= 0x40u;
  else
    *((_DWORD *)gpsi + 555) &= ~0x40u;
  return result;
}
