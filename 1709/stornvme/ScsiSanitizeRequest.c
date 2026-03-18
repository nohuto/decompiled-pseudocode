/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0009AE8
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  char v10; // cl
  char v11; // cl
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // si
  __int64 v14; // rax
  int v15; // edx
  __int16 v16; // cx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1080);
  if ( v6 == 40 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(unsigned __int8 *)(a2 + 7);
  v10 = *(_BYTE *)(a3 + 1);
  if ( v10 < 0
    || (v11 = v10 & 0x1F, a3 = 1LL, (unsigned __int8)(v11 - 2) > 1u)
    || (*(_BYTE *)(v8 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 148) > 1u && (*(_BYTE *)(v8 + 524) & 2) != 0
    || v11 == 3 && (*(_BYTE *)(v8 + 524) & 4) == 0 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, a3, a4);
    return 3238002694LL;
  }
  else
  {
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 64LL);
    if ( v11 == 3 )
      v13 = 2;
    else
      v13 = v11 == 2;
    *(_BYTE *)(v7 + 4245) = *(_BYTE *)(v7 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    if ( (unsigned int)v9 < *(_DWORD *)(a1 + 148) && (v14 = *(_QWORD *)(a1 + 8 * v9 + 1184)) != 0 )
      v15 = *(_DWORD *)(v14 + 16);
    else
      v15 = 0;
    v16 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 48LL);
    v17 = *(_QWORD *)(a1 + 1080);
    *(_BYTE *)(v7 + 4096) = 0x80;
    if ( (*(_BYTE *)(v17 + 524) & 2) != 0 )
      v15 = -1;
    v18 = (*(_DWORD *)(v7 + 4136) ^ v12) & 0xF;
    *(_DWORD *)(v7 + 4100) = v15;
    *(_DWORD *)(v7 + 4136) ^= v18;
    v19 = *(_DWORD *)(v7 + 4136);
    if ( v16 )
      v20 = v19 & 0xFFFFFFEF;
    else
      v20 = v19 | 0x10;
    *(_DWORD *)(v7 + 4136) = v20;
    *(_DWORD *)(v7 + 4136) = v20 & 0xFFFFF01F | (v13 << 9);
    return 0LL;
  }
}
