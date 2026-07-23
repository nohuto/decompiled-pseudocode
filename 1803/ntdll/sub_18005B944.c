/*
 * XREFs of sub_18005B944 @ 0x18005B944
 * Callers:
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005C438 @ 0x18005C438 (sub_18005C438.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

char __fastcall sub_18005B944(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // r15d
  __int64 v9; // rsi
  int v10; // edx
  int v11; // edx
  __int64 *v12; // r11
  __int64 *v13; // r8
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // r14
  unsigned __int64 v18; // r12
  unsigned __int64 i; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // r9d
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 *v27; // rdi
  __int64 v28; // rdi
  char v29; // al
  unsigned __int16 v30; // dx
  char v31; // cl
  char v32; // r13
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char result; // al
  __int64 *v40; // rax
  SIZE_T v41; // rdi
  SIZE_T v42; // r14
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 *v48; // [rsp+40h] [rbp-78h]
  int v49; // [rsp+48h] [rbp-70h]
  __int16 v50[4]; // [rsp+50h] [rbp-68h]
  int v51; // [rsp+60h] [rbp-58h]
  __int64 v52; // [rsp+C0h] [rbp+8h]
  char v56; // [rsp+E0h] [rbp+28h]

  v5 = a5;
  v7 = a2;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v56 = *(_BYTE *)(a3 + 10);
  v9 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v9 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v10 = *(_DWORD *)(v9 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v9 + 8) = v10;
    if ( HIBYTE(v10) != ((unsigned __int8)v10 ^ (unsigned __int8)(BYTE1(v10) ^ BYTE2(v10))) )
      sub_1800FC010(a1, v9);
  }
  v11 = *(unsigned __int16 *)(v9 + 8);
  *(_QWORD *)v50 = v11 + (unsigned int)*(unsigned __int16 *)(a3 + 8);
  if ( *(_QWORD *)v50 < v5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 10) ^ v11 ^ BYTE1(v11);
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v12 = *(__int64 **)(v9 + 24);
  v13 = (__int64 *)(v9 + 16);
  v14 = *(_QWORD *)(v9 + 16);
  v52 = v14;
  v48 = v12;
  v15 = *v12;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *v12 != v16 || (__int64 *)v15 != v13 )
  {
    sub_18009A5F0(13, a1, (_DWORD)v13, v16, v15, 0LL);
    return 0;
  }
  v17 = *(__int64 **)(a1 + 312);
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v9 + 8);
  if ( v17 )
  {
    v18 = *(unsigned __int16 *)(v9 + 8);
    for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v40 + 2) )
    {
      if ( v18 < i )
      {
        v20 = *(unsigned __int16 *)(v9 + 8);
        goto LABEL_13;
      }
      v40 = (__int64 *)*v17;
      if ( !*v17 )
        break;
      v17 = (__int64 *)*v17;
    }
    v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_13:
    v21 = v20 - *((_DWORD *)v17 + 6);
    v22 = 2 * v21;
    if ( !*((_DWORD *)v17 + 3) )
      v22 = v20 - *((_DWORD *)v17 + 6);
    v23 = *((_DWORD *)v17 + 2);
    v24 = v22;
    v25 = v17[6];
    v26 = v23 - 1;
    v27 = *(__int64 **)(v25 + 8 * v24);
    --*((_DWORD *)v17 + 4);
    if ( v20 == v23 - 1 )
      --*((_DWORD *)v17 + 5);
    if ( v27 == v13 )
    {
      v28 = *v13;
      if ( *v17 )
        v26 = v23;
      if ( v20 >= v26 )
      {
        v5 = a5;
        if ( v28 == v17[4] )
        {
          *(_QWORD *)(v25 + 8 * v24) = 0LL;
          *(_DWORD *)(v17[5] + 4 * ((unsigned __int64)v21 >> 5)) &= ~(1 << (v21 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v25 + 8 * v24) = v28;
        }
        goto LABEL_28;
      }
      if ( v28 == v17[4] )
        goto LABEL_26;
      v51 = *(_DWORD *)(v28 - 16 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v51 = *(_DWORD *)(v28 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
        {
          sub_18009A5F0(3, a1, v28 - 16, 0, 0LL, 0LL);
          v14 = v52;
          v12 = v48;
        }
      }
      if ( (_DWORD)v18 == (unsigned __int16)v51 )
      {
        *(_QWORD *)(v17[6] + 8 * v24) = v28;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v17[6] + 8 * v24) = 0LL;
        *(_DWORD *)(v17[5] + 4 * ((unsigned __int64)v21 >> 5)) &= ~(1 << (v21 & 0x1F));
      }
    }
    v5 = a5;
LABEL_28:
    v7 = a2;
  }
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  if ( (*(_BYTE *)(v9 + 10) & 8) != 0 && !(unsigned __int8)sub_18005CA3C((PVOID)a1) )
  {
    sub_1800128F0(a1, v9, *(unsigned __int16 *)(v9 + 8), 1);
    return 0;
  }
  v29 = *(_BYTE *)(v9 + 10);
  if ( (v29 & 4) != 0 )
  {
    v41 = 16LL * *(unsigned __int16 *)(v9 + 8) - 32;
    if ( (v29 & 2) != 0 && v41 > 4 )
      v41 = 16LL * *(unsigned __int16 *)(v9 + 8) - 36;
    v42 = RtlCompareMemoryUlong((PVOID)(v9 + 32), v41, 0xFEEEFEEE);
    if ( v42 != v41 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v9,
        (const void *)(v42 + v9 + 32));
      sub_1801011EC();
    }
  }
  v30 = *(_WORD *)(a3 + 8);
  v31 = *(_BYTE *)(a3 + 15);
  v32 = *(_BYTE *)(v9 + 10);
  if ( v31 == 5 )
  {
    v33 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v31 & 0x40) != 0 )
  {
    v33 = *(unsigned __int16 *)(a3 + 16LL * (v31 & 0x3F) + 12);
  }
  else if ( (v31 & 0x3F) == 0x3F )
  {
    if ( v31 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v44 = *(_DWORD *)(a3 + 8);
        LOWORD(v49) = v44;
        if ( (v44 & *(_DWORD *)(a1 + 124)) != 0 )
          v49 = *(_DWORD *)(a1 + 136) ^ v44;
        v30 = v49;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (a3 >> 4)) )
        v43 = 0LL;
      else
        v43 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      v30 = *(_WORD *)(v43 + 36);
    }
    v33 = *(_QWORD *)(a3 + 16LL * v30);
  }
  else
  {
    v33 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v34 = 16LL * *(unsigned __int16 *)(a3 + 8) - v33;
  v35 = *(_QWORD *)v50 - v5;
  if ( *(_QWORD *)v50 - v5 <= 2 )
    v5 = *(_QWORD *)v50;
  v36 = 0LL;
  if ( v35 > 2 )
    v36 = v35;
  if ( (v56 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v5 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_WORD *)(a3 + 16 * v5 - 14) = sub_1800ED320(
                                        a1,
                                        *(unsigned __int16 *)(a3 + 16 * v5 - 14),
                                        *(unsigned __int16 *)(a3 + 8),
                                        v5,
                                        4);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(a3 + 11) = sub_1800ED320(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v5, 4);
  }
  *(_WORD *)(a3 + 8) = v5;
  v37 = 16 * v5;
  v38 = 16 * v5 - a4;
  if ( v36 )
  {
    if ( v38 >= 0x3F )
    {
      *(_QWORD *)(v37 + a3) = v38;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v38;
    }
    sub_18005BDB4(a1, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v5, v36);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v32;
    if ( v38 >= 0x3F )
    {
      *(_QWORD *)(v37 + a3) = v38;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v38;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (v7 & 8) != 0 )
  {
    if ( a4 < v34 )
      v34 = a4;
    sub_18005C438(a1, a3 + 16, v34);
    goto LABEL_48;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v45 = 4 - (v34 & 3);
    if ( (v34 & 3) == 0 )
      v45 = v34 & 3;
    if ( a4 > v45 + v34 && ((a4 - v45 - v34) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v46 = ((a4 - v45 - v34) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v47 = v45 + v34 + a3 + 16;
      if ( v46 )
      {
        if ( (v47 & 4) == 0 )
          goto LABEL_101;
        *(_DWORD *)v47 = -1163005939;
        if ( --v46 )
        {
          v47 += 4LL;
LABEL_101:
          memset64((void *)v47, 0xBAADF00DBAADF00DuLL, v46 >> 1);
          if ( (v46 & 1) != 0 )
            *(_DWORD *)(v47 + 4 * v46 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_48:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + a4 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + a4 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v7 >> 4) & 0xE0;
  return result;
}
