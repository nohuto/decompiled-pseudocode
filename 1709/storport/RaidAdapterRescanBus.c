/*
 * XREFs of RaidAdapterRescanBus @ 0x1C0012868
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     RaidDeleteBusEnumerator @ 0x1C00131A4 (RaidDeleteBusEnumerator.c)
 *     RaidAdapterEnumerateBus @ 0x1C0014868 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C00175D0 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterTargetedRescan @ 0x1C002F57C (RaidAdapterTargetedRescan.c)
 */

__int64 __fastcall RaidAdapterRescanBus(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // bl
  char v4; // r15
  bool v5; // bp
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  int v13; // ebx
  int v15; // eax
  _QWORD v16[18]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset(v16, 0, 0x88uLL);
  v16[0] = a1;
  v11 = 0;
  v16[16] = &v16[15];
  v16[15] = &v16[15];
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4344) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 11) )
      RaCallMiniportAdapterControl(a1 + 296);
    v13 = *(_DWORD *)(a1 + 4920);
    v11 = RaidAdapterEnumerateBus(a1, v12, v16);
    v4 = 1;
    v5 = v13 != *(_DWORD *)(a1 + 4920);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4924) & 4) != 0 && (*(_DWORD *)(a1 + 4928) & 1) != 0 && *(_QWORD *)(a1 + 4976) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4960), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4936) + 8LL));
    }
    else
    {
      LOBYTE(v10) = v4;
      v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))RaidAdapterTargetedRescan)(a1, v9, v16, v10);
      if ( !v4 )
        v11 = v15;
      if ( a2 )
        *a2 = v15;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v11 >= 0 )
    RaidBusEnumeratorProcessModifiedNodes(v16);
  RaidDeleteBusEnumerator(v16);
  return (unsigned int)v11;
}
