/*
 * XREFs of MiEmptyWorkingSet @ 0x140136528
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x140030524 (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x140214EA0 (MiEmptyTargetedWorkingSet.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  int v4; // edi
  char v5; // al
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  bool v8; // zf
  unsigned int v9; // ebx
  _QWORD v11[18]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[24]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = 0;
  LOBYTE(v12[0]) = 0;
  memset(&v12[1], 0, 0xB8uLL);
  memset((char *)v11 + 4, 0, 0x8CuLL);
  v12[2] = 20LL;
  LODWORD(v12[1]) = MiTbFlushType(a1);
  WORD2(v12[1]) = 4;
  v11[17] = v12;
  v12[3] = 0LL;
  v11[15] = MiEmptyPte;
  v11[16] = MiEmptyWorkingSetTail;
  v5 = v12[0];
  if ( (a2 & 1) != 0 )
    v5 = 1;
  v12[4] = 0LL;
  v11[3] = -1LL;
  LOBYTE(v12[0]) = v5;
  LODWORD(v11[0]) = 2;
  v11[1] = a1;
  SharedVm = MiGetSharedVm(a1);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = (*(_BYTE *)(a1 + 192) & 7) == 0;
  BYTE4(v11[0]) = v7;
  if ( v8 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((__int64)v11) == 2 )
      v4 = -1073741558;
    v9 = v4;
  }
  MiUnlockWorkingSetExclusive(a1, BYTE4(v11[0]));
  return v9;
}
