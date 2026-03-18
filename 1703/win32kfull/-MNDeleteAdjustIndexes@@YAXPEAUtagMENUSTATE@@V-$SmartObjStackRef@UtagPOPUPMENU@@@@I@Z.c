/*
 * XREFs of ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C02128DC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C021294C (-NNDeleteAdjustIndex@@YAXPEAII@Z.c)
 */

_QWORD *__fastcall MNDeleteAdjustIndexes(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r8d
  __int64 v5; // r9
  _QWORD *v6; // r10

  NNDeleteAdjustIndex((unsigned int *)(*(_QWORD *)a2 + 80LL), a3);
  if ( (*(_DWORD *)*v6 & 0x20) != 0 )
    NNDeleteAdjustIndex((unsigned int *)(*v6 + 84LL), v3);
  if ( *(_QWORD *)(v5 + 64) == *(_QWORD *)(*v6 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v5 + 72), v4);
  if ( *(_QWORD *)(v5 + 80) == *(_QWORD *)(*v6 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v5 + 88), v4);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v6);
}
