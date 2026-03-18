/*
 * XREFs of ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C001532C
 * Callers:
 *     VidSchEnterIndependentFlip @ 0x1C0014C80 (VidSchEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0015004 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     <none>
 */

VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *__fastcall VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this,
        struct _VIDSCH_INDEPENDENT_FLIP_STATE *a2)
{
  unsigned int v2; // r8d

  v2 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)a2 + 20;
  while ( 1 )
  {
    *(_DWORD *)this = v2;
    if ( !v2 || (v2 & 1) != 0 )
      break;
    v2 >>= 1;
    ++*((_DWORD *)this + 1);
  }
  return this;
}
