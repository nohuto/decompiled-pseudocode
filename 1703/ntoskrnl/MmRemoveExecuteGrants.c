/*
 * XREFs of MmRemoveExecuteGrants @ 0x140039478
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 MmRemoveExecuteGrants()
{
  unsigned __int16 *v0; // rdi
  __int64 SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD v5[18]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[24]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v6, 0, 0xB8uLL);
  memset(v5, 0, sizeof(v5));
  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  WORD2(v6[0]) = 0;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v5[17] = v6;
  v5[15] = MiRevokeExecutePte;
  v5[16] = xHalTimerWatchdogStop;
  v5[3] = 0xFFFF7FFFFFFFFFFFuLL;
  LODWORD(v5[0]) = 2;
  v5[1] = v0;
  LODWORD(v6[0]) = 1;
  v6[1] = 20LL;
  SharedVm = MiGetSharedVm(v0);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  BYTE4(v5[0]) = v2;
  MiWalkPageTables(v5);
  LOBYTE(v3) = BYTE4(v5[0]);
  MiUnlockWorkingSetExclusive(v0, v3);
  return MiFlushTbList(v6);
}
