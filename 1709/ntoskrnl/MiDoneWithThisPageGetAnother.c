/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1400CEC64
 * Callers:
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, KIRQL a4)
{
  __int64 v4; // rsi
  __int16 v8; // ax
  _WORD *v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 Page; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  _WORD *v18; // [rsp+20h] [rbp-28h] BYREF
  __int16 v19; // [rsp+28h] [rbp-20h]
  unsigned __int16 v20; // [rsp+2Ah] [rbp-1Eh]

  v4 = a2 + 1280;
  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  MiInitializePageColorBase(v4, 0, (__int64)&v18);
  v8 = v19;
  v9 = v18;
  ++*v18;
  v10 = v20 | (unsigned __int16)(v8 & *v9);
  v11 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a3 + 1452));
  while ( 1 )
  {
    Page = MiGetPage(v11, v10, 0xC2u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v13) = a4;
    MiUnlockWorkingSetExclusive(v4, v13);
    MiWaitForFreePage(v11);
    SharedVm = MiGetSharedVm(v4);
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v17;
  }
  v14 = 6 * Page;
  result = 0xFFFFFA8000000000uLL;
  *(_QWORD *)(8 * v14 - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
