/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x140215BEC
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1406C39C4 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // edi
  int v7; // r15d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // dl
  _QWORD v15[18]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[26]; // [rsp+B0h] [rbp-50h] BYREF
  $5BC46E0569261879018906DEC3127961 v17; // [rsp+180h] [rbp+80h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v17);
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
  v15[3] = -1LL;
  LODWORD(v16[3]) = v9;
  v15[17] = v16;
  v15[15] = MiUpdateOldPte;
  v15[16] = MiUpdateOldWorkingSetPagesTail;
  WORD2(v16[3]) = 4;
  v16[5] = 0LL;
  v16[6] = 0LL;
  LODWORD(v15[0]) = 2;
  v15[1] = BugCheckParameter1 + 1280;
  SharedVm = MiGetSharedVm(v10);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  BYTE4(v15[0]) = v12;
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v16[1] = *(_QWORD *)(BugCheckParameter1 + 1368);
    MiWalkPageTables((__int64)v15);
    v13 = BYTE4(v15[0]);
  }
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v13);
  if ( v7 == 1 )
    KiUnstackDetachProcess(&v17, 0LL);
  return v6;
}
