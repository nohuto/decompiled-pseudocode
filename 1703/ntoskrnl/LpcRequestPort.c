/*
 * XREFs of LpcRequestPort @ 0x14053F060
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6[1], 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6[0] = a1;
  LODWORD(v6[6]) = 65538;
  LODWORD(a1) = AlpcpSendMessage((__int64)v6, a2, 0LL, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)a1;
}
