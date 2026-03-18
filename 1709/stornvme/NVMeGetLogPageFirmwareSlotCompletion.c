/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A250
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  _BYTE *v7; // r12
  _DWORD *v8; // rsi
  char *v9; // rbx
  bool v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // dl
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  __int64 v16; // rcx
  char v17; // al
  char v18; // cl
  char v19; // al
  unsigned __int8 v20; // cl
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // r10d
  unsigned int v25; // r8d
  int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  v5 = v4 & 0xFFF;
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - v5 + 4096;
  v6 = *(_QWORD *)(a1 + 1080);
  v7 = *(_BYTE **)(v4 + 4200);
  if ( v2 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = (char *)v8 + (unsigned int)v8[11];
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v8[5] = 1;
    goto LABEL_79;
  }
  v10 = *(_DWORD *)v9 == 2 && *((_DWORD *)v9 + 1) >= 0x18u;
  v11 = v8[12];
  if ( (v11 & 3) != 0 )
  {
    if ( v11 )
      memset((char *)v8 + (unsigned int)v8[11], 0, (unsigned int)v8[12]);
  }
  else
  {
    v12 = v11 >> 2;
    if ( v12 )
      memset((char *)v8 + (unsigned int)v8[11], 0, 4LL * v12);
  }
  v13 = -1;
  if ( !v10 )
  {
    *(_DWORD *)v9 = 1;
    *((_DWORD *)v9 + 1) = 16;
    v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
    v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
    v9[10] = *v7 & 7;
    LOBYTE(v5) = (*v7 >> 4) & 7;
    if ( (_BYTE)v5 )
      v13 = (*v7 >> 4) & 7;
    v9[11] = v13;
    v14 = 0;
    if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
    {
      while ( (unsigned int)v8[12] >= 16 * ((unsigned __int64)((unsigned int)v14 + 1) + 1) )
      {
        v15 = v14 + 1;
        v16 = 2LL * v14;
        v9[16 * v14 + 16] = v14 + 1;
        if ( v14 )
          v9[16 * v14 + 17] = 0;
        else
          v9[17] = *(_BYTE *)(v6 + 260) & 1;
        v5 = *(_QWORD *)&v7[8 * v14++ + 8];
        *(_QWORD *)&v9[8 * v16 + 24] = v5;
        LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
        if ( v15 >= (unsigned __int8)v5 )
          goto LABEL_78;
      }
LABEL_30:
      LODWORD(v5) = 16 * (((*(unsigned __int8 *)(v6 + 260) >> 1) & 7) + 1);
      v8[12] = v5;
      v8[5] = 5;
      goto LABEL_79;
    }
    goto LABEL_78;
  }
  *(_DWORD *)v9 = 2;
  *((_DWORD *)v9 + 1) = 24;
  v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
  v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
  v9[10] = *v7 & 7;
  v17 = (*v7 >> 4) & 7;
  v9[12] = 1;
  v18 = v17;
  v19 = -1;
  if ( v18 )
    v19 = v18;
  v9[11] = v19;
  v20 = *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 319LL);
  if ( v20 == 0xFF )
  {
    v21 = 4;
LABEL_36:
    *((_DWORD *)v9 + 4) = v21;
    v22 = *(_DWORD *)(a1 + 144);
    v23 = v22;
    v24 = *(_DWORD *)(a1 + 28);
    if ( v22 > 0x200000 )
      v23 = 0x200000;
    if ( v24 && v23 >= v24 )
      v23 = *(_DWORD *)(a1 + 28);
    v25 = *(_DWORD *)(a1 + 48);
    if ( v25 && v25 < v23 )
      v23 = *(_DWORD *)(a1 + 48);
    v26 = v23 % v21;
    LODWORD(v5) = v23 / v21;
    if ( v26 )
    {
      if ( v22 > 0x200000 )
        v22 = 0x200000;
      if ( v24 && v22 >= v24 )
        v22 = *(_DWORD *)(a1 + 28);
      if ( v25 && v25 < v22 )
        v22 = *(_DWORD *)(a1 + 48);
      v22 -= v26;
    }
    else
    {
      if ( v22 > 0x200000 )
        v22 = 0x200000;
      if ( v24 && v22 >= v24 )
        v22 = *(_DWORD *)(a1 + 28);
      if ( v25 && v25 < v22 )
        v22 = *(_DWORD *)(a1 + 48);
    }
    *((_DWORD *)v9 + 5) = v22;
    goto LABEL_72;
  }
  v21 = v20 << 12;
  if ( v21 )
    goto LABEL_36;
  *((_DWORD *)v9 + 4) = 4;
  LODWORD(v5) = *(_DWORD *)(a1 + 144);
  v27 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)v5 > 0x200000 )
    LODWORD(v5) = 0x200000;
  if ( v27 && (unsigned int)v5 >= v27 )
    LODWORD(v5) = *(_DWORD *)(a1 + 28);
  v28 = *(_DWORD *)(a1 + 48);
  if ( v28 && v28 < (unsigned int)v5 )
    LODWORD(v5) = *(_DWORD *)(a1 + 48);
  *((_DWORD *)v9 + 5) = v5;
LABEL_72:
  v29 = 0;
  if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
  {
    while ( (unsigned int)v8[12] >= 16 * ((unsigned __int64)((unsigned int)v29 + 1) + 1) )
    {
      v30 = v29 + 1;
      v31 = 3LL * v29;
      v9[24 * v29 + 24] = v29 + 1;
      if ( v29 )
        v9[24 * v29 + 25] = 0;
      else
        v9[25] = *(_BYTE *)(v6 + 260) & 1;
      v5 = *(_QWORD *)&v7[8 * v29++ + 8];
      *(_QWORD *)&v9[8 * v31 + 32] = v5;
      LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
      if ( v30 >= (unsigned __int8)v5 )
        goto LABEL_78;
    }
    goto LABEL_30;
  }
LABEL_78:
  v8[5] = 0;
LABEL_79:
  v32 = *(_QWORD *)(v4 + 4200);
  if ( v32 )
    LOBYTE(v5) = StorPortExtendedFunction(25LL, a1, v32, *(unsigned int *)(v4 + 4232));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4232) = 0;
  *(_BYTE *)(v4 + 4245) |= 8u;
  return v5;
}
