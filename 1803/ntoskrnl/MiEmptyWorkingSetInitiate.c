/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x1400839D0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSet @ 0x140253634 (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402597EC (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  char v9; // al
  char v10; // al
  __int64 v11; // r8
  bool v12; // zf
  unsigned int v13; // ebx
  _QWORD v15[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v16[2] = 20LL;
  v8 = 0;
  LODWORD(v16[1]) = MiTbFlushType(a1);
  WORD2(v16[1]) = 4;
  v15[21] = v16;
  v15[19] = MiEmptyPte;
  v15[20] = MiEmptyWorkingSetTail;
  v16[3] = 0LL;
  v16[4] = 0LL;
  LODWORD(v15[0]) = 6;
  v15[3] = a1;
  if ( (a2 & 1) != 0 )
  {
    LOBYTE(v16[0]) = 1;
  }
  else
  {
    v9 = BYTE1(v16[0]);
    if ( (a2 & 2) != 0 )
      v9 = 1;
    BYTE1(v16[0]) = v9;
  }
  v15[4] = a3;
  v15[5] = a4;
  v10 = MiLockWorkingSetShared(a1);
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  BYTE4(v15[0]) = v10;
  if ( v12 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v13 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((int *)v15) == 4 )
      v8 = -1073741558;
    v13 = v8;
  }
  MiUnlockWorkingSetShared(a1, BYTE4(v15[0]), v11);
  return v13;
}
