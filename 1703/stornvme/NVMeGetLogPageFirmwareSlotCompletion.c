/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0009C40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0012380 (memset.c)
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
  bool v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 v18; // dl
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  __int64 v21; // r8

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
    goto LABEL_50;
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
  if ( v10 )
  {
    *(_DWORD *)v9 = 2;
    *((_DWORD *)v9 + 1) = 24;
    v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
    v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
    v9[10] = *v7 & 7;
    if ( (*v7 & 0x70) != 0 )
      v9[11] = (*v7 >> 4) & 7;
    else
      v9[11] = -1;
    v9[12] = 1;
    *((_DWORD *)v9 + 4) = 4;
    LODWORD(v5) = *(_DWORD *)(a1 + 144);
    if ( (unsigned int)v5 > 0x200000 )
      LODWORD(v5) = 0x200000;
    v16 = *(_DWORD *)(a1 + 28);
    if ( v16 && (unsigned int)v5 >= v16 )
      LODWORD(v5) = *(_DWORD *)(a1 + 28);
    v17 = *(_DWORD *)(a1 + 48);
    if ( v17 && v17 < (unsigned int)v5 )
      LODWORD(v5) = *(_DWORD *)(a1 + 48);
    v18 = 0;
    *((_DWORD *)v9 + 5) = v5;
    if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
    {
      do
      {
        v19 = v18;
        if ( (unsigned int)v8[12] < 16 * ((unsigned __int64)v18 + 2) )
          goto LABEL_31;
        v20 = v18 + 1;
        v9[24 * v18 + 24] = v18 + 1;
        if ( v18 )
          v9[24 * v18 + 25] = 0;
        else
          v9[25] = *(_BYTE *)(v6 + 260) & 1;
        v5 = *(_QWORD *)&v7[8 * v18++ + 8];
        *(_QWORD *)&v9[24 * v19 + 32] = v5;
        LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
      }
      while ( v20 < (unsigned __int8)v5 );
    }
  }
  else
  {
    *(_DWORD *)v9 = 1;
    *((_DWORD *)v9 + 1) = 16;
    v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
    v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
    v9[10] = *v7 & 7;
    LOBYTE(v5) = *v7;
    if ( (*v7 & 0x70) != 0 )
    {
      LOBYTE(v5) = ((unsigned __int8)v5 >> 4) & 7;
      v9[11] = v5;
    }
    else
    {
      v9[11] = -1;
    }
    v13 = 0;
    if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
    {
      while ( 1 )
      {
        v14 = 16LL * v13;
        if ( (unsigned int)v8[12] < (unsigned __int64)(v14 + 32) )
          break;
        v15 = v13 + 1;
        v9[v14 + 16] = v13 + 1;
        if ( v13 )
          v9[v14 + 17] = 0;
        else
          v9[17] = *(_BYTE *)(v6 + 260) & 1;
        v5 = *(_QWORD *)&v7[8 * v13++ + 8];
        *(_QWORD *)&v9[v14 + 24] = v5;
        LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
        if ( v15 >= (unsigned __int8)v5 )
          goto LABEL_49;
      }
LABEL_31:
      LODWORD(v5) = 16 * (((*(unsigned __int8 *)(v6 + 260) >> 1) & 7) + 1);
      v8[12] = v5;
      v8[5] = 5;
      goto LABEL_50;
    }
  }
LABEL_49:
  v8[5] = 0;
LABEL_50:
  v21 = *(_QWORD *)(v4 + 4200);
  if ( v21 )
    LOBYTE(v5) = StorPortExtendedFunction(25LL, a1, v21, *(unsigned int *)(v4 + 4232));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4232) = 0;
  *(_BYTE *)(v4 + 4245) |= 8u;
  return v5;
}
