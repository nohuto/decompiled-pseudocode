/*
 * XREFs of LpcRequestPort @ 0x1404D6B20
 * Callers:
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
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
