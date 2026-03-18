/*
 * XREFs of RtlDetermineHotPatchExtent @ 0x14078B0A0
 * Callers:
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlDetermineHotPatchExtent(int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // ecx
  int v6; // eax
  int v7; // ecx

  v4 = a1 & 0xFC000;
  switch ( v4 )
  {
    case 114688:
      v6 = -6;
      v7 = 8;
      if ( a2 < 6 )
        return 0;
      break;
    case 180224:
LABEL_8:
      v6 = 0;
      v7 = 8;
      break;
    case 245760:
      v6 = 0;
      v7 = 4;
      break;
    case 376832:
    case 491520:
      goto LABEL_8;
    default:
      return 0;
  }
  *a3 = (a2 + v6) >> 12;
  *a4 = (v7 + a2 - 1) >> 12;
  return 1;
}
