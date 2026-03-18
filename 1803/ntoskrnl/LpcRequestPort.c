/*
 * XREFs of LpcRequestPort @ 0x1404B9C80
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6[0] = a1;
  LODWORD(v6[6]) = 65538;
  LODWORD(a1) = AlpcpSendMessage(v6, a2, 0LL, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)a1;
}
