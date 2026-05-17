/*
 * XREFs of sub_18001D350 @ 0x18001D350
 * Callers:
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 */

void __fastcall sub_18001D350(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int16 v6; // di
  unsigned __int8 v7; // al
  unsigned __int64 v8; // r11
  char v9; // al
  _QWORD **v10; // r8
  unsigned __int16 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int v17; // ebp
  __int64 *v18; // r13
  _DWORD *i; // r15
  _QWORD *v20; // r14
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rdi
  int v25; // ecx
  int v26; // eax
  unsigned __int16 v27; // ax
  __int64 *v28; // rax
  _QWORD *v29; // r15
  __int64 *v30; // rdi
  __int64 *v31; // rax
  int v32; // ecx
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbp
  unsigned int v37; // r8d
  char v38; // di
  __int64 v39; // rax
  __int64 v40; // r8
  _DWORD *v41; // r9
  int v42; // eax
  __int64 v43; // r8
  _DWORD *v44; // r8
  __int16 v45; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+38h] [rbp-C0h]
  int v47; // [rsp+48h] [rbp-B0h]
  int v48; // [rsp+60h] [rbp-98h]
  int v49; // [rsp+78h] [rbp-80h]
  int v50; // [rsp+90h] [rbp-68h]
  int v51; // [rsp+A0h] [rbp-58h]
  int v52; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v53; // [rsp+108h] [rbp+10h]
  unsigned __int64 v54; // [rsp+110h] [rbp+18h]
  char v55; // [rsp+118h] [rbp+20h]

  if ( !a3 )
    return;
  v54 = a3;
  v53 = a2;
  v3 = a3;
  v4 = a2;
  v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
  if ( !v6 && dword_18015BFD8 >= 1 && (*(_BYTE *)(a2 + 10) & 8) == 0 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, a3, a3);
    else
      DbgPrint("HEAP: ", a2, a3, a3);
    DbgPrint(
      "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
    sub_1800FDDA8(1LL);
    v3 = v54;
  }
  v7 = *(_BYTE *)(v4 + 14);
  if ( v7 )
    v8 = (v4 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = *(_BYTE *)(v4 + 10);
  v10 = (_QWORD **)(a1 + 336);
  v55 = v9;
  v46 = v8;
  do
  {
    if ( v3 > 0xFF00 )
    {
      v11 = -256;
      v45 = -256;
      if ( v3 == 65281 )
      {
        v11 = -272;
        v45 = -272;
      }
      *(_BYTE *)(v4 + 10) = 0;
    }
    else
    {
      v11 = v3;
      *(_BYTE *)(v4 + 10) = v9;
      v45 = v3;
    }
    *(_WORD *)(v4 + 12) = v6 ^ *(_WORD *)(a1 + 140);
    v12 = *(_QWORD *)(v8 + 40);
    if ( v12 == v8 )
    {
      LOBYTE(v13) = 0;
    }
    else
    {
      v13 = ((v4 - v8) >> 16) + 1;
      if ( (v4 - v8) >> 16 > 0xFC )
      {
        sub_1800A4DFC(3, v12, v4, v8, 0LL, 0LL);
        v3 = v54;
        v10 = (_QWORD **)(a1 + 336);
        v11 = v45;
        v8 = v46;
      }
    }
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 14) = v13;
    *(_WORD *)(v4 + 8) = v11;
    *(_BYTE *)(v4 + 11) = 0;
    *(_BYTE *)(v4 + 15) = 0;
    v14 = v11;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v44 = (_DWORD *)(v4 + 32);
      v12 = (16 * (unsigned __int64)v11 - 32) >> 2;
      if ( v12 )
      {
        if ( ((unsigned __int8)v44 & 4) != 0 )
        {
          --v12;
          *v44 = -17891602;
          v44 = (_DWORD *)(v4 + 36);
        }
        memset64(v44, 0xFEEEFEEEFEEEFEEEuLL, v12 >> 1);
        if ( (v12 & 1) != 0 )
          v44[v12 - 1] = -17891602;
      }
      *(_BYTE *)(v4 + 10) |= 4u;
      v10 = (_QWORD **)(a1 + 336);
    }
    v15 = *(__int64 **)(a1 + 312);
    if ( v15 )
    {
      if ( v11 < (unsigned __int64)*((unsigned int *)v15 + 2) )
      {
LABEL_71:
        v17 = v11;
      }
      else
      {
        while ( 1 )
        {
          v16 = (__int64 *)*v15;
          if ( !*v15 )
            break;
          v15 = (__int64 *)*v15;
          if ( v11 < (unsigned __int64)*((unsigned int *)v16 + 2) )
            goto LABEL_71;
        }
        v17 = *((_DWORD *)v15 + 2) - 1;
      }
      v18 = v15;
      for ( i = v15 + 3; ; i = v18 + 3 )
      {
        v20 = (_QWORD *)v18[4];
        v21 = (unsigned int)(v17 - *i);
        v22 = (_QWORD *)v20[1];
        if ( v20 != v22 )
        {
          v47 = *((_DWORD *)v22 - 2);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v47 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v22 - 2);
            if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
              sub_1800A4DFC(3, a1, (_DWORD)v22 - 16, 0, 0LL, 0LL);
          }
          if ( (int)(v14 - (unsigned __int16)v47) <= 0 )
          {
            v23 = *v20 - 16LL;
            v48 = *(_DWORD *)(v23 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v48 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v23 + 8);
              if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
                sub_1800A4DFC(3, a1, v23, 0, 0LL, 0LL);
            }
            if ( (int)(v14 - (unsigned __int16)v48) <= 0 )
            {
              v20 = (_QWORD *)*v20;
            }
            else if ( *v18 || v17 != *((_DWORD *)v18 + 2) - 1 )
            {
              v37 = v21;
              v38 = v21 & 0x1F;
              v39 = v18[5];
              v40 = v37 >> 5;
              v12 = *(_DWORD *)(v39 + 4 * v40) & (unsigned int)~((1 << v38) - 1);
              v41 = (_DWORD *)(v39 + 4 * v40);
              if ( (*v41 & ~((1 << v38) - 1)) == 0 )
              {
                while ( (unsigned int)v40 <= ((unsigned int)(*((_DWORD *)v18 + 2) - *i) >> 5) - 1 )
                {
                  v12 = (unsigned int)v41[1];
                  ++v41;
                  LODWORD(v40) = v40 + 1;
                  if ( (_DWORD)v12 )
                    goto LABEL_82;
                }
                if ( !(_DWORD)v12 )
                  goto LABEL_99;
              }
LABEL_82:
              if ( (_WORD)v12 )
              {
                if ( (_BYTE)v12 )
                  v42 = (unsigned __int8)byte_180119B00[(unsigned __int8)v12];
                else
                  v42 = (unsigned __int8)byte_180119B00[BYTE1(v12)] + 8;
              }
              else if ( (v12 & 0xFF0000) != 0 )
              {
                v42 = (unsigned __int8)byte_180119B00[BYTE2(v12)] + 16;
              }
              else
              {
                v42 = (unsigned __int8)byte_180119B00[(unsigned __int64)(unsigned int)v12 >> 24] + 24;
              }
              v43 = (unsigned int)(v42 + 32 * v40);
              if ( *((_DWORD *)v18 + 3) )
                v43 = (unsigned int)(2 * v43);
              v20 = *(_QWORD **)(v18[6] + 8 * v43);
            }
            else
            {
              if ( *((_DWORD *)v18 + 3) )
                v21 = (unsigned int)(2 * v21);
              v24 = *(_QWORD **)(v18[6] + 8 * v21);
              if ( v20 == v24 )
                goto LABEL_99;
              while ( 1 )
              {
                v49 = *((_DWORD *)v24 - 2);
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v49 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v24 - 2);
                  if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
                    sub_1800A4DFC(3, a1, (_DWORD)v24 - 16, 0, 0LL, 0LL);
                }
                if ( (int)(v14 - (unsigned __int16)v49) <= 0 )
                  break;
                v24 = (_QWORD *)*v24;
                if ( v20 == v24 )
                  goto LABEL_99;
              }
              v20 = v24;
            }
          }
        }
        if ( v20 )
        {
          v4 = v53;
          v10 = (_QWORD **)(a1 + 336);
          v3 = v54;
          v11 = v45;
          v8 = v46;
          goto LABEL_40;
        }
LABEL_99:
        v18 = (__int64 *)*v18;
        v17 = *((_DWORD *)v18 + 6);
      }
    }
    v20 = *v10;
LABEL_40:
    if ( v10 != v20 )
    {
      v25 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v25 )
        {
          v26 = *((_DWORD *)v20 - 2);
          v25 = *(_DWORD *)(a1 + 124);
          LOWORD(v52) = v26;
          if ( (v26 & v25) != 0 )
            v52 = *(_DWORD *)(a1 + 136) ^ v26;
          v27 = v52;
        }
        else
        {
          v27 = *((_WORD *)v20 - 4);
        }
        if ( v14 <= v27 )
          break;
        v20 = (_QWORD *)*v20;
      }
      while ( v10 != v20 );
    }
    v28 = (__int64 *)v20[1];
    v29 = (_QWORD *)(v4 + 16);
    if ( (_QWORD *)*v28 == v20 )
    {
      *v29 = v20;
      *(_QWORD *)(v4 + 24) = v28;
      *v28 = (__int64)v29;
      v20[1] = v29;
    }
    else
    {
      sub_1800A4DFC(12, 0, (_DWORD)v20, 0, *v28, 0LL);
      v3 = v54;
      v10 = (_QWORD **)(a1 + 336);
      v11 = v45;
      v8 = v46;
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
    v30 = *(__int64 **)(a1 + 312);
    if ( v30 )
    {
      v12 = *(unsigned __int16 *)(v4 + 8);
      v51 = *(unsigned __int16 *)(v4 + 8);
      if ( v12 < *((unsigned int *)v30 + 2) )
      {
LABEL_73:
        v32 = *(unsigned __int16 *)(v4 + 8);
      }
      else
      {
        while ( 1 )
        {
          v31 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
          if ( v12 < *((unsigned int *)v31 + 2) )
            goto LABEL_73;
        }
        v32 = *((_DWORD *)v30 + 2) - 1;
      }
      v33 = v32 - *((_DWORD *)v30 + 6);
      if ( *((_DWORD *)v30 + 3) )
        v34 = 2 * v33;
      else
        v34 = v33;
      ++*((_DWORD *)v30 + 4);
      v35 = 8 * v34;
      v36 = *(_QWORD *)(v30[6] + 8 * v34);
      if ( v32 == *((_DWORD *)v30 + 2) - 1 )
        ++*((_DWORD *)v30 + 5);
      if ( !v36 )
        goto LABEL_74;
      v50 = *(_DWORD *)(v36 - 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v50 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v36 - 8);
        if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
        {
          sub_1800A4DFC(3, a1, v36 - 16, 0, 0LL, 0LL);
          LODWORD(v12) = v51;
          v3 = v54;
          v11 = v45;
          v8 = v46;
        }
      }
      v12 = (unsigned int)v12 - (unsigned __int16)v50;
      if ( (int)v12 <= 0 )
LABEL_74:
        *(_QWORD *)(v30[6] + v35) = v29;
      v10 = (_QWORD **)(a1 + 336);
      if ( !v36 )
      {
        v12 = v30[5] + 4 * ((unsigned __int64)v33 >> 5);
        *(_DWORD *)v12 |= 1 << (v33 & 0x1F);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
      *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v3 -= v14;
    v6 = v11;
    v4 += 16 * v14;
    v54 = v3;
    v53 = v4;
    if ( v4 >= *(_QWORD *)(v8 + 72) )
      return;
    v9 = v55;
  }
  while ( v3 );
  *(_WORD *)(v4 + 12) = v11 ^ *(_WORD *)(a1 + 140);
  if ( !v11 && dword_18015BFD8 >= 1 && ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v10);
    else
      DbgPrint("HEAP: ", v12, v10);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    sub_1800FDDA8(1LL);
  }
}
