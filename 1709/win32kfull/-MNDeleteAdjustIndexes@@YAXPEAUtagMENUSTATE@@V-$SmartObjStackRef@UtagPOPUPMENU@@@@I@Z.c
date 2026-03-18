/*
 * XREFs of ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0213E0C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C0213E94 (-NNDeleteAdjustIndex@@YAXPEAII@Z.c)
 */

_QWORD *__fastcall MNDeleteAdjustIndexes(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9

  NNDeleteAdjustIndex((unsigned int *)(**(_QWORD **)a2 + 80LL), a3);
  v7 = **(unsigned int **)*v5;
  if ( (v7 & 0x20) != 0 )
    NNDeleteAdjustIndex((unsigned int *)(*(_QWORD *)*v5 + 84LL), v3);
  if ( *(_QWORD *)(v6 + 64) == *(_QWORD *)(*(_QWORD *)*v5 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 72), v4);
  if ( *(_QWORD *)(v6 + 80) == *(_QWORD *)(*(_QWORD *)*v5 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 88), v4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v3, v4, v7);
}
