/*
 * XREFs of MiEmptyWorkingSet @ 0x14000AF54
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x14021D450 (MiEmptyTargetedWorkingSet.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  int v4; // edi
  char v5; // al
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // ebx
  _QWORD v12[20]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v13[24]; // [rsp+C8h] [rbp-40h] BYREF

  v4 = 0;
  LOBYTE(v13[0]) = 0;
  memset(&v13[1], 0, 0xB8uLL);
  memset((char *)v12 + 4, 0, 0x94uLL);
  v13[2] = 20LL;
  LODWORD(v13[1]) = MiTbFlushType(a1);
  WORD2(v13[1]) = 4;
  v12[18] = v13;
  v13[3] = 0LL;
  v12[16] = MiEmptyPte;
  v12[17] = MiEmptyWorkingSetTail;
  v5 = v13[0];
  if ( (a2 & 1) != 0 )
    v5 = 1;
  v13[4] = 0LL;
  v12[3] = -1LL;
  LOBYTE(v13[0]) = v5;
  LODWORD(v12[0]) = 2;
  v12[1] = a1;
  SharedVm = MiGetSharedVm(a1);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = (*(_BYTE *)(a1 + 192) & 7) == 0;
  BYTE4(v12[0]) = v7;
  if ( v9 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables(v12) == 2 )
      v4 = -1073741558;
    v10 = v4;
  }
  LOBYTE(v8) = BYTE4(v12[0]);
  MiUnlockWorkingSetExclusive(a1, v8);
  return v10;
}
