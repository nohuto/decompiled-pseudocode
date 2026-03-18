/*
 * XREFs of ScsiUnmapRequest @ 0x1C0009980
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  char v5; // cl
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r15
  unsigned __int16 v13; // si
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int8 v18; // cl
  __int64 v19; // rcx
  __int64 PhysicalAddress; // rax
  unsigned __int16 v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_BYTE *)(a2 + 2);
  v21 = 0;
  if ( v5 == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v5 == 40 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    v10 = 60LL;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = 16LL;
  }
  if ( (*(_DWORD *)(a1 + 52) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1112) + 520LL) & 4) == 0
    || (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    LOBYTE(a3) = 36;
    LOBYTE(v9) = 6;
    NVMeSetSenseData(a2, v9, v10, a3);
    return 3238002694LL;
  }
  else
  {
    if ( *(_DWORD *)(v10 + a2) < 0x18u )
    {
      v11 = -1056964604;
LABEL_16:
      LOBYTE(a3) = 36;
      LOBYTE(v9) = 21;
      NVMeSetSenseData(a2, v9, v10, a3);
      return v11;
    }
    v12 = v9 + 8;
    HIBYTE(v21) = *(_BYTE *)(v9 + 2);
    LOBYTE(v21) = *(_BYTE *)(v9 + 3);
    v13 = v21 >> 4;
    if ( (unsigned __int16)(v21 >> 4) > 0x100u )
    {
      v11 = -1056964602;
      goto LABEL_16;
    }
    memset((void *)v8, 0, 0x1000uLL);
    if ( v13 )
    {
      v15 = (_BYTE *)(v8 + 14);
      v16 = v13;
      v17 = v12 - v8;
      do
      {
        v15[1] = v15[v17 - 14];
        *v15 = v15[v17 - 13];
        *(v15 - 1) = v15[v17 - 12];
        *(v15 - 2) = v15[v17 - 11];
        *(v15 - 3) = v15[v17 - 10];
        *(v15 - 4) = v15[v17 - 9];
        *(v15 - 5) = v15[v17 - 8];
        *(v15 - 6) = v15[v17 - 7];
        *(v15 - 7) = v15[v17 - 6];
        *(v15 - 8) = v15[v17 - 5];
        *(v15 - 9) = v15[v17 - 4];
        *(v15 - 10) = v15[v17 - 3];
        v15 += 16;
        --v16;
      }
      while ( v16 );
    }
    *(_BYTE *)(v8 + 4253) = *(_BYTE *)(v8 + 4253) & 0xFC | 2;
    SrbAssignQueueId(a1, a2);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v18 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v18 = *(_BYTE *)(a2 + 7);
    if ( (unsigned int)v18 < *(_DWORD *)(a1 + 156) )
    {
      v19 = *(_QWORD *)(a1 + 8LL * v18 + 1224);
      if ( v19 )
        v3 = *(_DWORD *)(v19 + 16);
    }
    *(_DWORD *)(v8 + 4140) |= 4u;
    *(_BYTE *)(v8 + 4096) = 9;
    *(_BYTE *)(v8 + 4136) = v13 - 1;
    *(_DWORD *)(v8 + 4100) = v3;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, v8, &v21);
    *(_BYTE *)(v8 + 4253) |= 4u;
    *(_QWORD *)(v8 + 4120) = PhysicalAddress;
    return 0LL;
  }
}
