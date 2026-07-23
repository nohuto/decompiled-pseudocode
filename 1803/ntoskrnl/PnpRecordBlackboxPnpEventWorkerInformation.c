/*
 * XREFs of PnpRecordBlackboxPnpEventWorkerInformation @ 0x14052032C
 * Callers:
 *     PnpRecordBlackbox @ 0x140075484 (PnpRecordBlackbox.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 */

void __fastcall PnpRecordBlackboxPnpEventWorkerInformation(__int64 a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // rbx
  __int64 v4; // rbp
  _DWORD *PoolWithTag; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v1 = 72;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4B706E50u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *v2 = 1;
      v2[1] = 72;
      v2[4] = *(_DWORD *)(a1 + 16);
      *((_BYTE *)v2 + 8) = *(_BYTE *)(*(_QWORD *)(a1 + 104) + 137LL);
      v2[3] = (v4 - **(_QWORD **)(a1 + 104)) / 0x2710uLL;
      *((_QWORD *)v2 + 3) = *(_QWORD *)(a1 + 152);
      v2[8] = *(_DWORD *)(a1 + 128);
      *((_QWORD *)v2 + 6) = PnpDeviceEventThread;
      *((_QWORD *)v2 + 5) = a1;
      *((_QWORD *)v2 + 7) = PnpDeviceActionThread;
      *((_QWORD *)v2 + 8) = PnpDelayedRemoveWorkerThread;
    }
  }
  memset(InputBuffer, 0, 0x20uLL);
  InputBuffer[1] = v1;
  LODWORD(InputBuffer[3]) = 9;
  InputBuffer[0] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B706E50u);
}
