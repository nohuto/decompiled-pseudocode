/*
 * XREFs of xxxMNSetCapture @ 0x1C0207828
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01EB320 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 */

_QWORD *__fastcall xxxMNSetCapture(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 8LL);
  v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v8;
  v8[1] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  xxxCapture(gptiCurrent, *(_QWORD *)(*a1 + 8LL), 4);
  ThreadUnlock1(v6, v5);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
