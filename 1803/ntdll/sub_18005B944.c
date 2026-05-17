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
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 *v26; // rdi
  __int64 v27; // rdi
  char v28; // al
  unsigned __int16 v29; // dx
  char v30; // cl
  char v31; // r13
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // r8
  unsigned __int8 v39; // al
  int v40; // edx
  char result; // al
  __int64 *v42; // rax
  unsigned __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  __int64 *v50; // [rsp+40h] [rbp-78h]
  int v51; // [rsp+48h] [rbp-70h]
  unsigned __int64 v52; // [rsp+50h] [rbp-68h]
  int v53; // [rsp+60h] [rbp-58h]
  __int64 v54; // [rsp+C0h] [rbp+8h]
  char v58; // [rsp+E0h] [rbp+28h]

  v5 = a5;
  v7 = a2;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v58 = *(_BYTE *)(a3 + 10);
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
  v52 = v11 + (unsigned int)*(unsigned __int16 *)(a3 + 8);
  if ( v52 < v5 )
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
  v54 = v14;
  v50 = v12;
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
    for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v42 + 2) )
    {
      if ( v18 < i )
      {
        v20 = *(unsigned __int16 *)(v9 + 8);
        goto LABEL_13;
      }
      v42 = (__int64 *)*v17;
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
    LODWORD(v16) = *((_DWORD *)v17 + 2);
    v23 = v22;
    v24 = v17[6];
    v25 = v16 - 1;
    v26 = *(__int64 **)(v24 + 8 * v23);
    --*((_DWORD *)v17 + 4);
    if ( v20 == (_DWORD)v16 - 1 )
      --*((_DWORD *)v17 + 5);
    if ( v26 == v13 )
    {
      v27 = *v13;
      if ( *v17 )
        v25 = v16;
      if ( v20 >= v25 )
      {
        v5 = a5;
        if ( v27 == v17[4] )
        {
          *(_QWORD *)(v24 + 8 * v23) = 0LL;
          *(_DWORD *)(v17[5] + 4 * ((unsigned __int64)v21 >> 5)) &= ~(1 << (v21 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v24 + 8 * v23) = v27;
        }
        goto LABEL_28;
      }
      if ( v27 == v17[4] )
        goto LABEL_26;
      v53 = *(_DWORD *)(v27 - 16 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v53 = *(_DWORD *)(v27 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v53) != ((unsigned __int8)v53 ^ (unsigned __int8)(BYTE1(v53) ^ BYTE2(v53))) )
        {
          sub_18009A5F0(3, a1, v27 - 16, 0, 0LL, 0LL);
          v14 = v54;
          v12 = v50;
        }
      }
      if ( (_DWORD)v18 == (unsigned __int16)v53 )
      {
        *(_QWORD *)(v17[6] + 8 * v23) = v27;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v17[6] + 8 * v23) = 0LL;
        *(_DWORD *)(v17[5] + 4 * ((unsigned __int64)v21 >> 5)) &= ~(1 << (v21 & 0x1F));
      }
    }
    v5 = a5;
LABEL_28:
    v7 = a2;
  }
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  if ( (*(_BYTE *)(v9 + 10) & 8) != 0 && !(unsigned __int8)sub_18005CA3C(a1, v9) )
  {
    sub_1800128F0(a1, v9, *(unsigned __int16 *)(v9 + 8), 1);
    return 0;
  }
  v28 = *(_BYTE *)(v9 + 10);
  if ( (v28 & 4) != 0 )
  {
    v43 = 16LL * *(unsigned __int16 *)(v9 + 8) - 32;
    if ( (v28 & 2) != 0 && v43 > 4 )
      v43 = 16LL * *(unsigned __int16 *)(v9 + 8) - 36;
    v44 = RtlCompareMemoryUlong(v9 + 32, v43, 4277075694LL);
    if ( v44 != v43 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v9,
        (const void *)(v44 + v9 + 32));
      sub_1801011EC();
    }
  }
  v29 = *(_WORD *)(a3 + 8);
  v30 = *(_BYTE *)(a3 + 15);
  v31 = *(_BYTE *)(v9 + 10);
  if ( v30 == 5 )
  {
    v32 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v30 & 0x40) != 0 )
  {
    v32 = *(unsigned __int16 *)(a3 + 16LL * (v30 & 0x3F) + 12);
  }
  else if ( (v30 & 0x3F) == 0x3F )
  {
    if ( v30 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v46 = *(_DWORD *)(a3 + 8);
        LOWORD(v51) = v46;
        if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
          v51 = *(_DWORD *)(a1 + 136) ^ v46;
        v29 = v51;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (a3 >> 4)) )
        v45 = 0LL;
      else
        v45 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      v29 = *(_WORD *)(v45 + 36);
    }
    v32 = *(_QWORD *)(a3 + 16LL * v29);
  }
  else
  {
    v32 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v33 = 16LL * *(unsigned __int16 *)(a3 + 8) - v32;
  v34 = v52 - v5;
  if ( v52 - v5 <= 2 )
    v5 = v52;
  v35 = 0LL;
  if ( v34 > 2 )
    v35 = v34;
  if ( (v58 & 2) != 0 )
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
  v36 = 16 * v5;
  v37 = 16 * v5 - a4;
  if ( v35 )
  {
    v38 = (unsigned __int64 *)(v36 + a3);
    if ( v37 >= 0x3F )
    {
      *v38 = v37;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v37;
    }
    v39 = *(_BYTE *)(a3 + 14);
    if ( v39 )
      v40 = (a3 & 0xFFFF0000) - (v39 << 16) + 0x10000;
    else
      v40 = a1;
    LOBYTE(v16) = v31;
    sub_18005BDB4(a1, v40, (_DWORD)v38, v16, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v5, v35);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v31;
    if ( v37 >= 0x3F )
    {
      *(_QWORD *)(v36 + a3) = v37;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v37;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (v7 & 8) != 0 )
  {
    if ( a4 < v33 )
      v33 = a4;
    sub_18005C438(a1, a3 + 16, v33);
    goto LABEL_50;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v47 = 4 - (v33 & 3);
    if ( (v33 & 3) == 0 )
      v47 = v33 & 3;
    if ( a4 > v47 + v33 && ((a4 - v47 - v33) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v48 = ((a4 - v47 - v33) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v49 = v47 + v33 + a3 + 16;
      if ( v48 )
      {
        if ( (v49 & 4) == 0 )
          goto LABEL_104;
        *(_DWORD *)v49 = -1163005939;
        if ( --v48 )
        {
          v49 += 4LL;
LABEL_104:
          memset64((void *)v49, 0xBAADF00DBAADF00DuLL, v48 >> 1);
          if ( (v48 & 1) != 0 )
            *(_DWORD *)(v49 + 4 * v48 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_50:
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
