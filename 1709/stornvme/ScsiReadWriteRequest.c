/*
 * XREFs of ScsiReadWriteRequest @ 0x1C0009324
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     BuildReadWriteCommand @ 0x1C00073B0 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadWriteRequest(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, bool *a5)
{
  __int64 v5; // rbx
  char v6; // dl
  int v7; // r13d
  __int64 v9; // rdi
  int *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int16 v14; // bp
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned __int8 *v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v5 = a2;
  LOBYTE(a3) = 40;
  v6 = *(_BYTE *)(a2 + 2);
  v7 = a4;
  if ( v6 == 40 )
    v9 = *(_QWORD *)(v5 + 104);
  else
    v9 = *(_QWORD *)(v5 + 56);
  if ( (v9 & 0xFFF) != 0 )
    v9 = v9 - (v9 & 0xFFF) + 4096;
  if ( v6 == 40 )
  {
    v10 = (int *)(v5 + 60);
    v11 = *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10);
  }
  else
  {
    v11 = *(unsigned __int8 *)(v5 + 7);
    v10 = (int *)(v5 + 16);
  }
  v12 = *(_QWORD *)(a1 + 8 * v11 + 1184);
  v13 = *(_DWORD *)(v12 + 52);
  if ( v13
    && *(_QWORD *)(v12 + 56)
    && ((v14 = *(_WORD *)(v12 + 92), v6 != 40) ? (v15 = *(_DWORD *)(v5 + 12)) : (v15 = *(_DWORD *)(v5 + 24)),
        (v15 & 0xC0) != 0 && (v16 = *v10) != 0 && ((v13 - 1) & v16) == 0) )
  {
    *(_BYTE *)(v9 + 4245) = *(_BYTE *)(v9 + 4245) & 0xFC | 2;
    SrbAssignQueueId(a1, v5);
    if ( (unsigned int)v11 < *(_DWORD *)(a1 + 148) && (v17 = *(_QWORD *)(a1 + 8 * v11 + 1184)) != 0 )
      v18 = *(_DWORD *)(v17 + 16);
    else
      v18 = 0;
    BuildReadWriteCommand(a1, v5, v22, v7, v9 + 4096, v18);
    v19 = *(_DWORD *)(a1 + 48);
    if ( (v19 < v13 || v19 % v13) && !v14 )
    {
      if ( a5 )
        *a5 = 0;
    }
    else
    {
      if ( v14 )
        v20 = v14;
      else
        v20 = v19 / v13;
      if ( a5 )
        *a5 = *(_QWORD *)(v9 + 4136) / (__int64)v20 != (*(_QWORD *)(v9 + 4136)
                                                      + (unsigned int)(unsigned __int16)*(_DWORD *)(v9 + 4144)
                                                      + 1
                                                      - 1LL)
                                                     / v20;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return 3238002694LL;
  }
}
