/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0008B20
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
{
  char v3; // bl
  unsigned __int8 *v6; // rdx
  unsigned int *v7; // r11
  char v8; // di
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  bool v17; // di
  unsigned int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // [rsp+58h] [rbp+10h]

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
  v9 = 4;
  if ( *a3 != 21 )
    v9 = 8;
  if ( (a3[1] & 0x10) == 0 )
    goto LABEL_10;
  if ( !v6 )
  {
    v10 = -1056964605;
LABEL_11:
    LOBYTE(a1) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, a3, a1);
    return v10;
  }
  a3 = (char *)*v7;
  if ( (unsigned int)a3 < v9 )
  {
LABEL_10:
    v10 = -1056964601;
    goto LABEL_11;
  }
  if ( v8 == 21 )
  {
    v12 = v6[3];
  }
  else
  {
    HIBYTE(v20) = v6[6];
    LOBYTE(v20) = v6[7];
    v12 = v20;
  }
  v13 = v9 + v12;
  v14 = &v6[v13];
  if ( (v13 < (unsigned int)a3 ? (unsigned int)a3 - v13 : 0) >= 0xC
    && (*v14 & 0x3F) == 8
    && v14[1] == 10
    && (v15 = *(_QWORD *)(a1 + 1080), (*(_BYTE *)(v15 + 525) & 1) != 0) )
  {
    if ( v3 == 40 )
      v16 = *(_QWORD *)(a2 + 104);
    else
      v16 = *(_QWORD *)(a2 + 56);
    if ( (v16 & 0xFFF) != 0 )
      v16 = v16 - (v16 & 0xFFF) + 4096;
    v17 = 0;
    if ( *(_WORD *)(a1 + 122) > 1u || *(_BYTE *)(a1 + 121) )
      v17 = (*(_BYTE *)(v15 + 520) & 0x10) != 0;
    *(_BYTE *)(v16 + 4245) = *(_BYTE *)(v16 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    if ( v17 )
    {
      *(_BYTE *)(v16 + 4136) = 6;
      v18 = *(_DWORD *)(v16 + 4136) & 0xFFFFFBFF;
      *(_BYTE *)(v16 + 4096) = 10;
      *(_DWORD *)(v16 + 4136) = v18 | 0x300;
      *(_QWORD *)(v16 + 4216) = NVMeSetFeaturesCachePhase1Completion;
      *(_QWORD *)(v16 + 4224) = v14;
    }
    else
    {
      v19 = (*(_DWORD *)(v16 + 4140) ^ (v14[2] >> 2)) & 1;
      *(_BYTE *)(v16 + 4096) = 9;
      *(_DWORD *)(v16 + 4140) ^= v19;
      *(_BYTE *)(v16 + 4136) = 6;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a1) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, a3, a1);
    return 3238002694LL;
  }
}
