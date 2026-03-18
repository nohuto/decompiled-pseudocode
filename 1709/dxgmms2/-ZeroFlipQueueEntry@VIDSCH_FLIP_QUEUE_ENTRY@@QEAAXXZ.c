/*
 * XREFs of ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001493C
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001437C (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00259C0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  _DWORD *v1; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 145);
  memset(this, 0, 0x4D0uLL);
  *((_QWORD *)this + 145) = v1;
  memset(v1 + 4, 0, v1[1] * (48 * v1[2] + ((8 * v1[2] + 175) & 0xFFFFFFF8)));
}
