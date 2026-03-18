/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C000B7F4
 * Callers:
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  char v5; // dl
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int16 v13; // cx
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  __int64 PhysicalAddress; // rax
  __int64 v18; // rbx
  int v19; // ecx
  int v21; // [rsp+50h] [rbp+8h] BYREF
  void *v22; // [rsp+58h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 1080);
  v3 = 0;
  v22 = 0LL;
  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v21 = 0;
  if ( v5 == 40 )
  {
    v8 = *(_QWORD *)(a2 + 64);
    v9 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v9 = (unsigned int *)(a2 + 16);
  }
  v10 = *v9;
  if ( v10 >= 0x44 )
  {
    v11 = v10 - 28;
    if ( (v11 & 3) != 0 )
    {
      if ( v11 )
        memset((void *)(v8 + 28), 0, v11);
    }
    else
    {
      v12 = v11 >> 2;
      if ( v12 )
        memset((void *)(v8 + 28), 0, 4LL * v12);
    }
    *(_DWORD *)(v8 + 32) = 40;
    *(_DWORD *)(v8 + 28) = 40;
    v13 = 0x8000;
    v14 = *(_WORD *)(v2 + 268);
    if ( v14 )
      v15 = v14 - 273;
    else
      v15 = 0x8000;
    *(_WORD *)(v8 + 36) = v15;
    v16 = *(_WORD *)(v2 + 266);
    if ( v16 )
      v13 = v16 - 273;
    *(_WORD *)(v8 + 38) = v13;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v22 )
    {
      memset(v22, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v22, &v21);
      *(_BYTE *)(v7 + 4245) |= 3u;
      v18 = PhysicalAddress;
      SrbAssignQueueId(a1, a2);
      *(_DWORD *)(v7 + 4100) = -1;
      *(_BYTE *)(v7 + 4136) = 2;
      v19 = *(_DWORD *)(v7 + 4136);
      *(_BYTE *)(v7 + 4096) = 2;
      *(_QWORD *)(v7 + 4120) = v18;
      *(_DWORD *)(v7 + 4136) = v19 & 0xF000FFFF | 0x7F0000;
      *(_BYTE *)(v7 + 4245) |= 4u;
      *(_QWORD *)(v7 + 4216) = QueryTemperatureInfoHealthLogCompletion;
      *(_QWORD *)(v7 + 4200) = v22;
      *(_DWORD *)(v7 + 4232) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  return v3;
}
