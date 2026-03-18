/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C000C36C
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax

  v2 = *(_QWORD *)(a1 + 1112);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = 16LL;
  }
  v7 = *(_DWORD *)(a2 + v6);
  if ( v7 >= 0x44 )
  {
    v9 = v7 - 28;
    if ( (v9 & 3) != 0 )
    {
      if ( v9 )
        memset((void *)(v5 + 28), 0, v9);
    }
    else
    {
      v10 = v9 >> 2;
      if ( v10 )
        memset((void *)(v5 + 28), 0, 4LL * v10);
    }
    *(_DWORD *)(v5 + 32) = 40;
    *(_DWORD *)(v5 + 28) = 40;
    v11 = 0x8000;
    v12 = *(_WORD *)(v2 + 268);
    if ( v12 )
      v13 = v12 - 273;
    else
      v13 = 0x8000;
    *(_WORD *)(v5 + 36) = v13;
    v14 = *(_WORD *)(v2 + 266);
    if ( v14 )
      v11 = v14 - 273;
    *(_WORD *)(v5 + 38) = v11;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
