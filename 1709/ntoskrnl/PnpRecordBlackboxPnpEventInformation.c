/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x1400FEDA4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PiGetTargetDeviceNode @ 0x14055CEC8 (PiGetTargetDeviceNode.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, char a3)
{
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 TargetDeviceNode; // r15
  unsigned int v9; // r14d
  unsigned __int16 *v10; // rax
  _OWORD *PoolWithTag; // rdi
  __int128 v12; // xmm0
  _QWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000014];
  TargetDeviceNode = PiGetTargetDeviceNode();
  v9 = *(unsigned __int16 *)(TargetDeviceNode + 40) + 50;
  if ( !a3 )
  {
    v10 = *(unsigned __int16 **)(v7 + 56);
    if ( v10 )
      v5 = *v10 + 2;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5 + v9, 0x4B706E50u);
  if ( PoolWithTag )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    memset(PoolWithTag, 0, v5 + v9);
    v12 = *(_OWORD *)(a1 + 88);
    *((_QWORD *)PoolWithTag + 2) = v6;
    *PoolWithTag = v12;
    *((_DWORD *)PoolWithTag + 8) = *(_DWORD *)(a1 + 16);
    *((_DWORD *)PoolWithTag + 6) = a2;
    *((_BYTE *)PoolWithTag + 28) = a3;
    memmove(
      (char *)PoolWithTag + 44,
      *(const void **)(TargetDeviceNode + 48),
      *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)PoolWithTag + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      *((_DWORD *)PoolWithTag + 9) = **(_DWORD **)(a1 + 48);
      *((_DWORD *)PoolWithTag + 10) = v9;
      memmove((char *)PoolWithTag + v9, *(const void **)(*(_QWORD *)(a1 + 56) + 8LL), **(unsigned __int16 **)(a1 + 56));
      *(_WORD *)((char *)PoolWithTag + 2 * ((unsigned __int64)**(unsigned __int16 **)(a1 + 56) >> 1) + v9) = 0;
    }
    LODWORD(InputBuffer[3]) = 2;
    InputBuffer[0] = PoolWithTag;
    InputBuffer[1] = v5 + v9;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(PoolWithTag, 0x4B706E50u);
  }
}
