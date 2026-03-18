/*
 * XREFs of ScsiModeSelectRequest @ 0x1C00085D4
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
{
  char v3; // di
  unsigned __int8 *v6; // rdx
  unsigned int *v7; // r9
  char v8; // bl
  char v9; // al
  bool v10; // zf
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rbx
  bool v21; // di
  unsigned int v22; // eax
  unsigned int v23; // ecx
  bool v24; // al
  unsigned __int16 v25; // [rsp+58h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
  {
    v6 = *(unsigned __int8 **)(a2 + 64);
    v7 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v6 = *(unsigned __int8 **)(a2 + 24);
    v7 = (unsigned int *)(a2 + 16);
  }
  v8 = *a3;
  v9 = a3[1];
  v10 = *a3 == 21;
  v11 = 4LL;
  if ( !v10 )
    v11 = 8LL;
  if ( (v9 & 0x10) == 0 )
    goto LABEL_10;
  if ( !v6 )
  {
    v12 = -1056964605;
LABEL_11:
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, v11, v7);
    return v12;
  }
  v13 = *v7;
  if ( *v7 < (unsigned int)v11 )
  {
LABEL_10:
    v12 = -1056964601;
    goto LABEL_11;
  }
  if ( v8 == 21 )
  {
    v15 = v6[3];
  }
  else
  {
    HIBYTE(v25) = v6[6];
    LOBYTE(v25) = v6[7];
    v15 = v25;
  }
  v16 = v11 + v15;
  v17 = &v6[v16];
  if ( v13 <= v16 )
    v18 = 0;
  else
    v18 = v13 - v16;
  if ( v18 >= 0xC
    && (*v17 & 0x3F) == 8
    && v17[1] == 10
    && (v19 = *(_QWORD *)(a1 + 1080), (*(_BYTE *)(v19 + 525) & 1) != 0) )
  {
    if ( v3 == 40 )
      v20 = *(_QWORD *)(a2 + 104);
    else
      v20 = *(_QWORD *)(a2 + 56);
    if ( (v20 & 0xFFF) != 0 )
      v20 = v20 - (v20 & 0xFFF) + 4096;
    v21 = 0;
    if ( *(_WORD *)(a1 + 122) > 1u || *(_BYTE *)(a1 + 121) )
      v21 = (*(_BYTE *)(v19 + 520) & 0x10) != 0;
    *(_BYTE *)(v20 + 4245) = *(_BYTE *)(v20 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    if ( v21 )
    {
      *(_BYTE *)(v20 + 4136) = 6;
      v22 = *(_DWORD *)(v20 + 4136) & 0xFFFFFBFF;
      *(_BYTE *)(v20 + 4096) = 10;
      *(_DWORD *)(v20 + 4136) = v22 | 0x300;
      *(_QWORD *)(v20 + 4216) = NVMeSetFeaturesCachePhase1Completion;
      *(_QWORD *)(v20 + 4224) = v17;
    }
    else
    {
      v23 = *(_DWORD *)(v20 + 4140) & 0xFFFFFFFE;
      v24 = (v17[2] & 4) != 0;
      *(_BYTE *)(v20 + 4096) = 9;
      *(_BYTE *)(v20 + 4136) = 6;
      *(_DWORD *)(v20 + 4140) = v24 | v23;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, v11, v7);
    return 3238002694LL;
  }
}
