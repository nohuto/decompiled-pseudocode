/*
 * XREFs of ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00754C4
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0075314 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 */

void __fastcall VidMmiFreeQuerySegmentInfo(struct _DXGK_QUERYSEGMENTOUT4 *a1)
{
  UCHAR *pSegmentDescriptor; // rcx

  pSegmentDescriptor = a1->pSegmentDescriptor;
  if ( pSegmentDescriptor )
  {
    operator delete(pSegmentDescriptor);
    a1->pSegmentDescriptor = 0LL;
  }
}
