/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14025AB14
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x14075B794 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int8 v12; // dl
  __int64 v13; // r8
  _QWORD v15[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[22]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v17[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v18[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v15, 0, 0xD8uLL);
  memset(v16, 0, sizeof(v16));
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v17);
  }
  v8 = v15[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v15[0]) | 1;
    LODWORD(v15[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v15[0]) = v8 | 2;
  HIDWORD(v15[0]) = a2;
  v15[4] = 20LL;
  v9 = MiTbFlushType(BugCheckParameter1 + 1280);
  v11 = (*(_BYTE *)(BugCheckParameter1 + 1464) & 7) == 0;
  LODWORD(v15[3]) = v9;
  WORD2(v15[3]) = 4;
  v15[5] = 0LL;
  v15[6] = 0LL;
  if ( v11 && *(_QWORD *)(BugCheckParameter1 + 1864) )
  {
    v18[0] = 0;
    v15[26] = v18;
    v18[1] = 32;
  }
  v16[5] = -1LL;
  v16[21] = v15;
  v16[19] = MiUpdateOldPte;
  v16[20] = MiUpdateOldWorkingSetPagesTail;
  LODWORD(v16[0]) = 6;
  v16[3] = BugCheckParameter1 + 1280;
  HIBYTE(v16[0]) = 6;
  v12 = MiLockWorkingSetShared(v10);
  BYTE4(v16[0]) = v12;
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v15[1] = *(_QWORD *)(BugCheckParameter1 + 1368);
    if ( v15[1] )
    {
      MiWalkPageTables((int *)v16);
      v12 = BYTE4(v16[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1280, v12, v13);
  if ( v7 == 1 )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  return v6;
}
