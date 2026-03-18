/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A630
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  char v3; // cl
  __int64 v4; // rbx
  __int64 v5; // r14
  _BYTE *v6; // r12
  _DWORD *v7; // rsi
  char *v8; // rdi
  bool v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // eax
  char v12; // dl
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // al
  char v18; // al
  unsigned __int8 v19; // cl
  unsigned int v20; // r11d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int8 v27; // dl
  __int64 v28; // r8
  unsigned __int8 v29; // cl
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // r8
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_QWORD *)(a1 + 1112);
  v6 = *(_BYTE **)(v4 + 4200);
  if ( v3 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v7[5] = 1;
    goto LABEL_79;
  }
  v9 = *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x18u;
  v10 = v7[12];
  if ( (v10 & 3) != 0 )
  {
    if ( v10 )
      memset((char *)v7 + (unsigned int)v7[11], 0, (unsigned int)v7[12]);
  }
  else
  {
    v11 = v10 >> 2;
    if ( v11 )
      memset((char *)v7 + (unsigned int)v7[11], 0, 4LL * v11);
  }
  v12 = -1;
  if ( v9 )
  {
    *(_DWORD *)v8 = 2;
    *((_DWORD *)v8 + 1) = 24;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    v18 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v18 = (*v6 >> 4) & 7;
    v8[11] = v18;
    v8[12] = 1;
    v19 = *(_BYTE *)(*(_QWORD *)(a1 + 1112) + 319LL);
    if ( v19 == 0xFF )
      v20 = 4;
    else
      v20 = v19 << 12;
    if ( v20 )
    {
      *((_DWORD *)v8 + 4) = v20;
      v21 = *(_DWORD *)(a1 + 152);
      v22 = v21;
      v23 = *(_DWORD *)(a1 + 28);
      if ( v21 > 0x200000 )
        v22 = 0x200000;
      if ( v23 && v22 >= v23 )
        v22 = *(_DWORD *)(a1 + 28);
      v24 = *(_DWORD *)(a1 + 48);
      if ( v24 && v24 < v22 )
        v22 = *(_DWORD *)(a1 + 48);
      if ( v22 % v20 )
      {
        if ( v21 > 0x200000 )
          v21 = 0x200000;
        if ( v23 && v21 >= v23 )
          v21 = *(_DWORD *)(a1 + 28);
        if ( v24 && v24 < v21 )
          v21 = *(_DWORD *)(a1 + 48);
        v21 -= v22 % v20;
      }
      else
      {
        if ( v21 > 0x200000 )
          v21 = 0x200000;
        if ( v23 && v21 >= v23 )
          v21 = *(_DWORD *)(a1 + 28);
        if ( v24 && v24 < v21 )
          v21 = *(_DWORD *)(a1 + 48);
      }
    }
    else
    {
      *((_DWORD *)v8 + 4) = 4;
      v21 = *(_DWORD *)(a1 + 152);
      v25 = *(_DWORD *)(a1 + 28);
      if ( v21 > 0x200000 )
        v21 = 0x200000;
      if ( v25 && v21 >= v25 )
        v21 = *(_DWORD *)(a1 + 28);
      v26 = *(_DWORD *)(a1 + 48);
      if ( v26 && v26 < v21 )
        v21 = *(_DWORD *)(a1 + 48);
    }
    *((_DWORD *)v8 + 5) = v21;
    v27 = 0;
    v14 = *(_BYTE *)(v5 + 260);
    if ( (v14 & 0xE) != 0 )
    {
      while ( (unsigned int)v7[12] >= 16 * ((unsigned __int64)((unsigned int)v27 + 1) + 1) )
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = 3LL * v27;
        v8[24 * v27 + 24] = v27 + 1;
        if ( v27 )
          v31 = 0;
        else
          v31 = *(_BYTE *)(v5 + 260) & 1;
        v8[24 * v27++ + 25] = v31;
        *(_QWORD *)&v8[8 * v30 + 32] = *(_QWORD *)&v6[8 * v28 + 8];
        v14 = *(_BYTE *)(v5 + 260);
        if ( v29 >= (unsigned __int8)((v14 >> 1) & 7) )
          goto LABEL_78;
      }
      goto LABEL_30;
    }
  }
  else
  {
    *(_DWORD *)v8 = 1;
    *((_DWORD *)v8 + 1) = 16;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    if ( ((*v6 >> 4) & 7) != 0 )
      v12 = (*v6 >> 4) & 7;
    v8[11] = v12;
    v13 = 0;
    v14 = *(_BYTE *)(v5 + 260);
    if ( (v14 & 0xE) != 0 )
    {
      while ( (unsigned int)v7[12] >= 16 * ((unsigned __int64)((unsigned int)v13 + 1) + 1) )
      {
        v15 = v13;
        v16 = 2LL * v13;
        v8[16 * v13 + 16] = v13 + 1;
        if ( v13 )
          v17 = 0;
        else
          v17 = *(_BYTE *)(v5 + 260) & 1;
        v8[16 * v13++ + 17] = v17;
        *(_QWORD *)&v8[8 * v16 + 24] = *(_QWORD *)&v6[8 * v15 + 8];
        v14 = *(_BYTE *)(v5 + 260);
        if ( v13 >= (unsigned __int8)((v14 >> 1) & 7) )
          goto LABEL_78;
      }
LABEL_30:
      v7[12] = 16 * (((v14 >> 1) & 7) + 1);
      v7[5] = 5;
      goto LABEL_79;
    }
  }
LABEL_78:
  v7[5] = 0;
LABEL_79:
  v32 = *(_QWORD *)(v4 + 4200);
  result = *(_QWORD *)(v4 + 4208);
  if ( v32 )
    result = StorPortExtendedFunction(83LL, a1, v32, *(unsigned int *)(v4 + 4240));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4240) = 0;
  *(_BYTE *)(v4 + 4253) |= 8u;
  return result;
}
