/*
 * XREFs of UsbhSetOutOfBandwidthTimer @ 0x1C003C970
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009CB0 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhSetTimer @ 0x1C003CC00 (UsbhSetTimer.c)
 */

void __fastcall UsbhSetOutOfBandwidthTimer(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  __int64 PortData; // rbp
  char *PoolWithTag; // rax
  char *v9; // rsi
  char v10; // [rsp+28h] [rbp-10h]

  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xA0uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA0uLL);
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v9, 1951875663) < 0 )
        goto LABEL_6;
      *(_DWORD *)v9 = 1331118703;
      *((_QWORD *)v9 + 2) = a1;
      *((_QWORD *)v9 + 1) = PortData;
      *((_DWORD *)v9 + 38) = a3;
      *((_DWORD *)v9 + 39) = a4;
      KeInitializeTimer((PKTIMER)(v9 + 24));
      KeInitializeDpc((PRKDPC)(v9 + 88), (PKDEFERRED_ROUTINE)UsbhOutOfBandwidthTimerDpc, v9);
      v10 = 1;
      if ( (UsbhSetTimer(a1, 1000LL, v9 + 24, v9 + 88, 1836343919, v10) & 0xC0000000) == 0xC0000000 )
LABEL_6:
        ExFreePoolWithTag(v9, 0);
      else
        Log(a1, 8, 1869565524, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), (__int64)v9));
    }
  }
}
