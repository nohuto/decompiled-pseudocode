/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14021ECC4
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1406F2430 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // edi
  int v7; // r15d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 v14; // rdx
  _QWORD v16[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[20]; // [rsp+100h] [rbp+0h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v18; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v19[68]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset(v16, 0, 0xD8uLL);
  memset(v17, 0, 0x98uLL);
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v18);
  }
  v8 = v16[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v16[0]) | 1;
    LODWORD(v16[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v16[0]) = v8 | 2;
  HIDWORD(v16[0]) = a2;
  v16[4] = 20LL;
  v9 = MiTbFlushType(BugCheckParameter1 + 1280);
  v11 = (*(_BYTE *)(BugCheckParameter1 + 1472) & 7) == 0;
  LODWORD(v16[3]) = v9;
  WORD2(v16[3]) = 4;
  v16[5] = 0LL;
  v16[6] = 0LL;
  if ( v11 && *(_QWORD *)(BugCheckParameter1 + 1864) )
  {
    v19[0] = 0;
    v16[26] = v19;
    v19[1] = 32;
  }
  v17[3] = -1LL;
  v17[18] = v16;
  v17[16] = MiUpdateOldPte;
  v17[17] = MiUpdateOldWorkingSetPagesTail;
  LODWORD(v17[0]) = 2;
  v17[1] = BugCheckParameter1 + 1280;
  HIBYTE(v17[0]) = 6;
  SharedVm = MiGetSharedVm(v10);
  v13 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v14) = v13;
  BYTE4(v17[0]) = v13;
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v16[1] = *(_QWORD *)(BugCheckParameter1 + 1368);
    if ( v16[1] )
    {
      MiWalkPageTables((__int64)v17);
      LOBYTE(v14) = BYTE4(v17[0]);
    }
  }
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v14);
  if ( v7 == 1 )
    KiUnstackDetachProcess(&v18, 0LL);
  return v6;
}
