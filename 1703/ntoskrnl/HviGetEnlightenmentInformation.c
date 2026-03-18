/*
 * XREFs of HviGetEnlightenmentInformation @ 0x140261890
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1401E9D50 (HvlpDetermineEnlightenments.c)
 *     HvlQueryDetailInfo @ 0x1406873BC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140155D50 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
