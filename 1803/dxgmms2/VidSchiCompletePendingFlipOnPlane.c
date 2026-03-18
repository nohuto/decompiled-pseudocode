/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x1C0015864
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D690 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015804 (VidSchiCompletePendingFlip.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002AE60 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0031368 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0015004 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  v8 = *(int *)(216LL * a4 + *(_QWORD *)(a1 + 8LL * a2 + 3032) + 140);
  if ( (int)v8 > -1 )
    v9 = *(_QWORD *)(a1 + 3160) + 136 * v8;
  else
    v9 = 0LL;
  if ( v9 && (unsigned int)(*(_DWORD *)(v9 + 112) - 1) <= 1 )
  {
    v12 = 0LL;
    v11 = *(_QWORD *)(v9 + 8);
    v13 = 0;
    VidSchExitIndependentFlipInternal(a1, (int *)v9, v11, 0, 0, &v13, &v12);
  }
  VidSchiCompleteFlipEntry(a1, v6, a4, 0, 63, a3, 0LL);
  if ( a3 == 9 )
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 3032) + 2312LL) &= ~(1 << a4);
  return 0LL;
}
