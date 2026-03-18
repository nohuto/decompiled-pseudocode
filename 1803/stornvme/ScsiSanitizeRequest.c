/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0009EC8
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  __int64 v10; // r14
  char v11; // cl
  char v12; // cl
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // si
  __int64 v15; // rax
  int v16; // edx
  __int16 v17; // cx
  __int64 v18; // rax
  int v19; // edx
  unsigned int v20; // edx

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1112);
  if ( v6 == 40 )
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(_BYTE *)(a2 + 7);
  v10 = v9;
  v11 = *(_BYTE *)(a3 + 1);
  if ( v11 < 0
    || (v12 = v11 & 0x1F, a3 = 1LL, (unsigned __int8)(v12 - 2) > 1u)
    || (*(_BYTE *)(v8 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 156) > 1u && (*(_BYTE *)(v8 + 524) & 2) != 0
    || v12 == 3 && (*(_BYTE *)(v8 + 524) & 4) == 0 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, a3, a4);
    return 3238002694LL;
  }
  else
  {
    v13 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1224) + 64LL);
    if ( v12 == 3 )
      v14 = 2;
    else
      v14 = v12 == 2;
    *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    v15 = *(_QWORD *)(a1 + 8 * v10 + 1224);
    if ( (unsigned int)v10 < *(_DWORD *)(a1 + 156) && v15 )
      v16 = *(_DWORD *)(v15 + 16);
    else
      v16 = 0;
    v17 = *(_WORD *)(v15 + 48);
    v18 = *(_QWORD *)(a1 + 1112);
    *(_BYTE *)(v7 + 4096) = 0x80;
    if ( (*(_BYTE *)(v18 + 524) & 2) != 0 )
      v16 = -1;
    *(_DWORD *)(v7 + 4100) = v16;
    v19 = *(_DWORD *)(v7 + 4136) ^ (*(_DWORD *)(v7 + 4136) ^ v13) & 0xF;
    *(_DWORD *)(v7 + 4136) = v19;
    if ( v17 )
      v20 = v19 & 0xFFFFFFEF;
    else
      v20 = v19 | 0x10;
    *(_DWORD *)(v7 + 4136) = v20 & 0xFFFFF01F | (v14 << 9);
    return 0LL;
  }
}
