/*
 * XREFs of ndisCreatePMPacketPattern @ 0x1C00D4988
 * Callers:
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00D89B0 (ndisXlateWolPatternListToWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

_DWORD *__fastcall ndisCreatePMPacketPattern(_DWORD *a1, unsigned int *a2)
{
  unsigned int v3; // esi
  _DWORD *result; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // ecx

  v3 = a1[41] + 24 + a1[43];
  result = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6B70444Eu);
  v6 = result;
  if ( result )
  {
    memset(result, 0, v3);
    v6[1] = a1[37];
    *v6 = a1[2];
    v7 = a1[41];
    v6[2] = v7;
    v6[3] = v7 + 24;
    v6[4] = a1[43];
    memmove(v6 + 6, (char *)a1 + (unsigned int)a1[40], v7);
    memmove((char *)v6 + (unsigned int)v6[3], (char *)a1 + (unsigned int)a1[42], (unsigned int)v6[4]);
    result = v6;
    *a2 = v3;
  }
  return result;
}
