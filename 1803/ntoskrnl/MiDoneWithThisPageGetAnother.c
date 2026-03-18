/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1401424AC
 * Callers:
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int16 v8; // ax
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 Page; // rax
  __int64 result; // rax
  LONG *SharedVm; // rbx
  KIRQL v14; // al
  volatile signed __int32 *v15; // [rsp+20h] [rbp-28h] BYREF
  __int16 v16; // [rsp+28h] [rbp-20h]
  unsigned __int16 v17; // [rsp+2Ah] [rbp-1Eh]

  v4 = a2 + 1280;
  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  MiInitializePageColorBase(v4, 0, (__int64)&v15);
  v8 = _InterlockedExchangeAdd(v15, 1u);
  v9 = v17 | (unsigned __int16)(v8 & v16);
  v10 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a3 + 1454));
  while ( 1 )
  {
    Page = MiGetPage(v10, v9, 0x302u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    MiUnlockWorkingSetExclusive(v4, a4);
    MiWaitForFreePage(v10);
    SharedVm = MiGetSharedVm(v4);
    v14 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v14;
  }
  result = 6 * Page;
  *(_QWORD *)(8 * result - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
