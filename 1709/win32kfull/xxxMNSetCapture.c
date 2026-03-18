/*
 * XREFs of xxxMNSetCapture @ 0x1C0209840
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall xxxMNSetCapture(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, **a1, a4);
  v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v14;
  v14[1] = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  xxxCapture(gptiCurrent, *(_QWORD *)(**a1 + 8), 4);
  ThreadUnlock1(v9, v8);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v10, v11, v12);
}
