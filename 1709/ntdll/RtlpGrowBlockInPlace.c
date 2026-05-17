/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180008C44
 * Callers:
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x180009848 (RtlpZeroBlockFromOffset.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800F0F20 (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned int v8; // r13d
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 i; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // eax
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  char v26; // al
  unsigned __int16 v27; // dx
  char v28; // cl
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // al
  int v36; // edx
  char result; // al
  __int64 *v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 *v48; // [rsp+40h] [rbp-78h]
  int v49; // [rsp+48h] [rbp-70h]
  unsigned __int64 v50; // [rsp+50h] [rbp-68h]
  int v51; // [rsp+60h] [rbp-58h]
  char v52; // [rsp+C0h] [rbp+8h]
  __int64 v54; // [rsp+D0h] [rbp+18h]
  __int64 v56; // [rsp+E0h] [rbp+28h]
  char v57; // [rsp+E0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  v8 = a2;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v52 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v50 = (unsigned int)v11 + *(unsigned __int16 *)(a3 + 8);
  if ( v50 < a5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v12 = (_QWORD *)(v10 + 16);
  v13 = *(_QWORD *)(v10 + 16);
  v48 = *(__int64 **)(v10 + 24);
  v54 = v13;
  v14 = *v48;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *v48 != v15 || (_QWORD *)v14 != v12 )
  {
    RtlpLogHeapFailure(12, a1, (_DWORD)v12, v15, v14, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v11;
  v16 = *(__int64 **)(a1 + 312);
  if ( v16 )
  {
    v17 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v16 + 2); ; i = *((unsigned int *)v38 + 2) )
    {
      if ( v17 < i )
      {
        v19 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_13;
      }
      v38 = (__int64 *)*v16;
      if ( !*v16 )
        break;
      v16 = (__int64 *)*v16;
    }
    v19 = *((_DWORD *)v16 + 2) - 1;
LABEL_13:
    v20 = v19 - *((_DWORD *)v16 + 6);
    v21 = 2 * v20;
    if ( !*((_DWORD *)v16 + 3) )
      v21 = v19 - *((_DWORD *)v16 + 6);
    v22 = v16[6];
    v15 = v21;
    v23 = *((_DWORD *)v16 + 2);
    v56 = v15;
    v24 = *(_QWORD **)(v22 + 8 * v15);
    --*((_DWORD *)v16 + 4);
    if ( v19 == v23 - 1 )
      --*((_DWORD *)v16 + 5);
    if ( v24 == v12 )
    {
      if ( !*v16 )
        --v23;
      if ( v19 >= v23 )
      {
        v8 = a2;
        if ( *v12 == v16[4] )
        {
          *(_QWORD *)(v22 + 8 * v15) = 0LL;
          *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v22 + 8 * v15) = *v12;
        }
        goto LABEL_28;
      }
      v25 = *v12;
      if ( *v12 == v16[4] )
        goto LABEL_26;
      v51 = *(_DWORD *)(v25 - 16 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v51 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v25 - 16 + 8);
        if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
        {
          RtlpLogHeapFailure(3, a1, v25 - 16, 0, 0LL, 0LL);
          v15 = v56;
          v13 = v54;
        }
      }
      if ( (_DWORD)v17 == (unsigned __int16)v51 )
      {
        *(_QWORD *)(v16[6] + 8 * v15) = v25;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v16[6] + 8 * v15) = 0LL;
        *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      }
    }
    v8 = a2;
LABEL_28:
    v5 = a4;
  }
  *v48 = v13;
  *(_QWORD *)(v13 + 8) = v48;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1, v10) )
  {
    LOBYTE(v15) = 1;
    RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), v15);
    return 0;
  }
  v26 = *(_BYTE *)(v10 + 10);
  if ( (v26 & 4) != 0 )
  {
    v41 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v26 & 2) != 0 && v41 > 4 )
      v41 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v42 = RtlCompareMemoryUlong(v10 + 32, v41, 4277075694LL);
    if ( v42 != v41 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v42 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v27 = *(_WORD *)(a3 + 8);
  v28 = *(_BYTE *)(a3 + 15);
  LOBYTE(v15) = *(_BYTE *)(v10 + 10);
  v57 = v15;
  if ( v28 == 5 )
  {
    v29 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v28 & 0x40) != 0 )
  {
    v29 = *(unsigned __int16 *)(a3 + 16LL * (v28 & 0x3F) + 12);
  }
  else if ( (v28 & 0x3F) == 0x3F )
  {
    if ( v28 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v44 = *(_DWORD *)(a3 + 8);
        LOWORD(v49) = v44;
        if ( (v44 & *(_DWORD *)(a1 + 124)) != 0 )
          v49 = *(_DWORD *)(a1 + 136) ^ v44;
        v27 = v49;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v43 = 0LL;
      else
        v43 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v27 = *(_WORD *)(v43 + 36);
    }
    v29 = *(_QWORD *)(a3 + 16LL * v27);
  }
  else
  {
    v29 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v30 = 16LL * *(unsigned __int16 *)(a3 + 8) - v29;
  v31 = v50 - v6;
  if ( v50 - v6 <= 2 )
    v6 = v50;
  v32 = 0LL;
  if ( v31 > 2 )
    v32 = v31;
  if ( (v52 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_41;
    *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                      a1,
                                      *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                      *(unsigned __int16 *)(a3 + 8),
                                      v6,
                                      4);
  }
  else
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_41;
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v6, 4);
  }
  LOBYTE(v15) = v57;
LABEL_41:
  *(_WORD *)(a3 + 8) = v6;
  if ( v32 )
  {
    v33 = 16 * v6;
    v34 = 16 * v6 - v5;
    if ( v34 >= 0x3F )
    {
      *(_QWORD *)(v33 + a3) = v34;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v34;
    }
    v35 = *(_BYTE *)(a3 + 14);
    if ( v35 )
      v36 = (a3 & 0xFFFF0000) - (v35 << 16) + 0x10000;
    else
      v36 = a1;
    RtlpCreateSplitBlock(a1, v36, v33 + a3, v15, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v32);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v15;
    v39 = 16 * v6;
    v40 = v39 - v5;
    if ( v39 - v5 >= 0x3F )
    {
      *(_QWORD *)(v39 + a3) = v40;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v40;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v5 < v30 )
      v30 = v5;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v30);
    goto LABEL_51;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    goto LABEL_51;
  v45 = 4 - (v30 & 3);
  if ( (v30 & 3) == 0 )
    v45 = v30 & 3;
  if ( v5 <= v45 + v30 )
    goto LABEL_51;
  if ( ((v5 - v45 - v30) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_51;
  v46 = ((v5 - v45 - v30) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v47 = v45 + v30 + a3 + 16;
  if ( !v46 )
    goto LABEL_51;
  if ( (v47 & 4) == 0 )
  {
LABEL_106:
    memset64((void *)v47, 0xBAADF00DBAADF00DuLL, v46 >> 1);
    if ( (v46 & 1) != 0 )
      *(_DWORD *)(v47 + 4 * v46 - 4) = -1163005939;
    goto LABEL_51;
  }
  *(_DWORD *)v47 = -1163005939;
  if ( --v46 )
  {
    v47 += 4LL;
    goto LABEL_106;
  }
LABEL_51:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + v5 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + v5 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v8 >> 4) & 0xE0;
  return result;
}
