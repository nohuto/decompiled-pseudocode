/*
 * XREFs of UsbhResetIrqPipe @ 0x1C0043CE0
 * Callers:
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043720 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001A710 (UsbhSyncSendInternalIoctl.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhResetIrqPipe(__int64 a1)
{
  _DWORD *v2; // rdi
  int *PoolWithTag; // rax
  int *v4; // rbx
  NTSTATUS v5; // edi

  v2 = FdoExt(a1);
  PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *((_QWORD *)v4 + 1) = 0LL;
    *v4 = 1966120;
    *((_QWORD *)v4 + 3) = *((_QWORD *)v2 + 330);
    v5 = UsbhSyncSendInternalIoctl(a1, 0x220003u, (unsigned __int64)v4, 0LL);
    Log(a1, 4, 1937331029, v5, v4[1]);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
