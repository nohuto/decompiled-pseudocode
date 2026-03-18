/*
 * XREFs of MmRemoveExecuteGrants @ 0x140130B50
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void MmRemoveExecuteGrants()
{
  unsigned __int16 *v0; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  _KPROCESS *v4; // rdx
  _QWORD v5[20]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[24]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v6, 0, 0xB8uLL);
  memset(v5, 0, 0x98uLL);
  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  WORD2(v6[0]) = 0;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v5[18] = v6;
  v5[16] = MiRevokeExecutePte;
  v5[17] = PsGetHostSilo;
  v5[3] = 0xFFFF7FFFFFFFFFFFuLL;
  LODWORD(v5[0]) = 2;
  v5[1] = v0;
  LODWORD(v6[0]) = 1;
  v6[1] = 20LL;
  SharedVm = MiGetSharedVm((__int64)v0);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v5[0]) = v2;
  MiWalkPageTables((__int64)v5);
  LOBYTE(v3) = BYTE4(v5[0]);
  MiUnlockWorkingSetExclusive((__int64)v0, v3);
  MiFlushTbList((__int64)v6, v4);
}
