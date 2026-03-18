/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140002DEC
 * Callers:
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x140002EB4 (MiFinishLastForkPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
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
  __int64 SharedVm; // rbx
  KIRQL v17; // al
  _WORD *v18; // [rsp+20h] [rbp-28h] BYREF
  __int16 v19; // [rsp+28h] [rbp-20h]
  unsigned __int16 v20; // [rsp+2Ah] [rbp-1Eh]

  v4 = a2 + 1280;
  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  MiInitializePageColorBase(v4, 0LL, &v18);
  v8 = v19;
  v9 = v18;
  ++*v18;
  v10 = v20 | (unsigned __int16)(v8 & *v9);
  v11 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a3 + 1452));
  while ( 1 )
  {
    Page = MiGetPage(v11, v10, 194LL);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v13) = a4;
    MiUnlockWorkingSetExclusive(v4, v13);
    MiWaitForFreePage(v11);
    SharedVm = MiGetSharedVm(v4);
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    a4 = v17;
  }
  v14 = 6 * Page;
  result = 0xFFFFFA8000000000uLL;
  *(_QWORD *)(8 * v14 - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
