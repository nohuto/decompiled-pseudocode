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
  __int64 v23; // r9
  unsigned int v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // rdi
  char v27; // al
  unsigned __int16 v28; // dx
  char v29; // cl
  char v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  char result; // al
  __int64 *v37; // rax
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  SIZE_T v40; // rdi
  SIZE_T v41; // r14
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r8
  __int64 *v47; // [rsp+40h] [rbp-78h]
  int v48; // [rsp+48h] [rbp-70h]
  __int16 v49[4]; // [rsp+50h] [rbp-68h]
  int v50; // [rsp+60h] [rbp-58h]
  char v51; // [rsp+C0h] [rbp+8h]
  __int64 v53; // [rsp+D0h] [rbp+18h]
  __int64 v55; // [rsp+E0h] [rbp+28h]
  char v56; // [rsp+E0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  v8 = a2;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v51 = *(_BYTE *)(a3 + 10);
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
  *(_QWORD *)v49 = (unsigned int)v11 + *(unsigned __int16 *)(a3 + 8);
  if ( *(_QWORD *)v49 < a5 )
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
  v47 = *(__int64 **)(v10 + 24);
  v53 = v13;
  v14 = *v47;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *v47 != v15 || (_QWORD *)v14 != v12 )
  {
    RtlpLogHeapFailure(12, a1, (_DWORD)v12, v15, v14, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v11;
  v16 = *(__int64 **)(a1 + 312);
  if ( v16 )
  {
    v17 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v16 + 2); ; i = *((unsigned int *)v37 + 2) )
    {
      if ( v17 < i )
      {
        v19 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_13;
      }
      v37 = (__int64 *)*v16;
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
    v23 = v21;
    v24 = *((_DWORD *)v16 + 2);
    v55 = v23;
    v25 = *(_QWORD **)(v22 + 8 * v23);
    --*((_DWORD *)v16 + 4);
    if ( v19 == v24 - 1 )
      --*((_DWORD *)v16 + 5);
    if ( v25 == v12 )
    {
      if ( !*v16 )
        --v24;
      if ( v19 >= v24 )
      {
        v8 = a2;
        if ( *v12 == v16[4] )
        {
          *(_QWORD *)(v22 + 8 * v23) = 0LL;
          *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v22 + 8 * v23) = *v12;
        }
        goto LABEL_28;
      }
      v26 = *v12;
      if ( *v12 == v16[4] )
        goto LABEL_26;
      v50 = *(_DWORD *)(v26 - 16 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v50 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v26 - 16 + 8);
        if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
        {
          RtlpLogHeapFailure(3, a1, v26 - 16, 0, 0LL, 0LL);
          v23 = v55;
          v13 = v53;
        }
      }
      if ( (_DWORD)v17 == (unsigned __int16)v50 )
      {
        *(_QWORD *)(v16[6] + 8 * v23) = v26;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v16[6] + 8 * v23) = 0LL;
        *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      }
    }
    v8 = a2;
LABEL_28:
    v5 = a4;
  }
  *v47 = v13;
  *(_QWORD *)(v13 + 8) = v47;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock((PVOID)a1) )
  {
    RtlpDeCommitFreeBlock(a1);
    return 0;
  }
  v27 = *(_BYTE *)(v10 + 10);
  if ( (v27 & 4) != 0 )
  {
    v40 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v27 & 2) != 0 && v40 > 4 )
      v40 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v41 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v40, 0xFEEEFEEE);
    if ( v41 != v40 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v41 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v28 = *(_WORD *)(a3 + 8);
  v29 = *(_BYTE *)(a3 + 15);
  v30 = *(_BYTE *)(v10 + 10);
  v56 = v30;
  if ( v29 == 5 )
  {
    v31 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v29 & 0x40) != 0 )
  {
    v31 = *(unsigned __int16 *)(a3 + 16LL * (v29 & 0x3F) + 12);
  }
  else if ( (v29 & 0x3F) == 0x3F )
  {
    if ( v29 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v43 = *(_DWORD *)(a3 + 8);
        LOWORD(v48) = v43;
        if ( (v43 & *(_DWORD *)(a1 + 124)) != 0 )
          v48 = *(_DWORD *)(a1 + 136) ^ v43;
        v28 = v48;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v42 = 0LL;
      else
        v42 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v28 = *(_WORD *)(v42 + 36);
    }
    v31 = *(_QWORD *)(a3 + 16LL * v28);
  }
  else
  {
    v31 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v32 = 16LL * *(unsigned __int16 *)(a3 + 8) - v31;
  v33 = *(_QWORD *)v49 - v6;
  if ( *(_QWORD *)v49 - v6 <= 2 )
    v6 = *(_QWORD *)v49;
  v34 = 0LL;
  if ( v33 > 2 )
    v34 = v33;
  if ( (v51 & 2) != 0 )
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
  v30 = v56;
LABEL_41:
  *(_WORD *)(a3 + 8) = v6;
  if ( v34 )
  {
    v35 = 16 * v6 - v5;
    if ( v35 >= 0x3F )
    {
      *(_QWORD *)(16 * v6 + a3) = v35;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v35;
    }
    RtlpCreateSplitBlock(a1, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v34);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v30;
    v38 = 16 * v6;
    v39 = v38 - v5;
    if ( v38 - v5 >= 0x3F )
    {
      *(_QWORD *)(v38 + a3) = v39;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v39;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v5 < v32 )
      v32 = v5;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v32);
    goto LABEL_49;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    goto LABEL_49;
  v44 = 4 - (v32 & 3);
  if ( (v32 & 3) == 0 )
    v44 = v32 & 3;
  if ( v5 <= v44 + v32 )
    goto LABEL_49;
  if ( ((v5 - v44 - v32) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_49;
  v45 = ((v5 - v44 - v32) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v46 = v44 + v32 + a3 + 16;
  if ( !v45 )
    goto LABEL_49;
  if ( (v46 & 4) == 0 )
  {
LABEL_103:
    memset64((void *)v46, 0xBAADF00DBAADF00DuLL, v45 >> 1);
    if ( (v45 & 1) != 0 )
      *(_DWORD *)(v46 + 4 * v45 - 4) = -1163005939;
    goto LABEL_49;
  }
  *(_DWORD *)v46 = -1163005939;
  if ( --v45 )
  {
    v46 += 4LL;
    goto LABEL_103;
  }
LABEL_49:
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
