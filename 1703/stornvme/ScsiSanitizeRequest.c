/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0009494
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  char v11; // cl
  __int64 v12; // r14
  unsigned __int8 v13; // r15
  int v14; // esi
  __int16 v15; // cx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1080);
  if ( v5 == 40 )
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
    LOBYTE(a3) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, v9, a3);
    return 3238002694LL;
  }
  else
  {
    v12 = (unsigned int)v9;
    v13 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 64LL);
    if ( v11 == 3 )
      v14 = 2;
    else
      v14 = v11 == 2;
    *(_BYTE *)(v7 + 4245) = *(_BYTE *)(v7 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    v15 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v12 + 1184) + 48LL);
    v16 = *(_QWORD *)(a1 + 1080);
    *(_BYTE *)(v7 + 4096) = 0x80;
    if ( (*(_BYTE *)(v16 + 524) & 2) != 0 )
    {
      *(_DWORD *)(v7 + 4100) = -1;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v17 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v17 = *(unsigned __int8 *)(a2 + 7);
      *(_DWORD *)(v7 + 4100) = v17 + 1;
    }
    *(_DWORD *)(v7 + 4136) ^= (*(_DWORD *)(v7 + 4136) ^ v13) & 0xF;
    v18 = *(_DWORD *)(v7 + 4136);
    if ( v15 )
      v19 = v18 & 0xFFFFFFEF;
    else
      v19 = v18 | 0x10;
    *(_DWORD *)(v7 + 4136) = v19;
    *(_DWORD *)(v7 + 4136) = (v14 << 9) | v19 & 0xFFFFF01F;
    return 0LL;
  }
}
