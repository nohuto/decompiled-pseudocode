/*
 * XREFs of RtlpCreateSplitBlock @ 0x1800090BC
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x1800094B4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000955C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 k; // rax
  __int64 *v19; // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // r8
  int v22; // ecx
  int v23; // eax
  unsigned __int16 v24; // ax
  __int64 *v25; // rax
  _QWORD *v26; // rdi
  __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 j; // rax
  int v30; // r8d
  int v32; // ecx
  unsigned __int64 v33; // rbp
  _QWORD *v34; // rdi
  _QWORD *v35; // r8
  int v36; // ecx
  int v37; // eax
  unsigned __int16 v38; // ax
  __int64 *v39; // rax
  unsigned __int64 n; // rax
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // r9
  char v44; // al
  unsigned __int64 v45; // r14
  __int64 v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 m; // rax
  __int64 v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *Entry; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 i; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+20h] [rbp-38h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]
  int v75; // [rsp+38h] [rbp-20h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( (unsigned __int64)(a3 - a2) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  v11 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v57 = (_DWORD *)(a3 + 32);
          v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v58 )
          {
            if ( ((unsigned __int8)v57 & 4) != 0 )
            {
              --v58;
              *v57 = -17891602;
              v57 = (_DWORD *)(a3 + 36);
            }
            memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
            if ( (v58 & 1) != 0 )
              v57[v58 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v59 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v59;
        if ( v59 != Entry )
        {
          v61 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)Entry - 2);
              v61 = *(_DWORD *)(a1 + 124);
              LOWORD(v75) = v62;
              if ( (v62 & v61) != 0 )
                v75 = *(_DWORD *)(a1 + 136) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v59 != Entry );
        }
        v64 = (__int64 *)Entry[1];
        v65 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v64 == Entry )
        {
          *v65 = Entry;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          Entry[1] = v65;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v64, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v66 = *(__int64 **)(a1 + 312);
        if ( v66 )
        {
          for ( i = *((unsigned int *)v66 + 2); ; i = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_147;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_147:
          v71 = v69;
          LOBYTE(v69) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v20 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v21 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          v21 = (_QWORD *)*v20;
        if ( v20 != v21 )
        {
          v22 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v22 )
            {
              v23 = *((_DWORD *)v21 - 2);
              v22 = *(_DWORD *)(a1 + 124);
              LOWORD(v72) = v23;
              if ( (v22 & v23) != 0 )
                v72 = *(_DWORD *)(a1 + 136) ^ v23;
              v24 = v72;
            }
            else
            {
              v24 = *((_WORD *)v21 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v24 )
              break;
            v21 = (_QWORD *)*v21;
          }
          while ( v20 != v21 );
        }
        v25 = (__int64 *)v21[1];
        v26 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v25 == v21 )
        {
          *v26 = v21;
          *(_QWORD *)(a3 + 24) = v25;
          *v25 = (__int64)v26;
          v21[1] = v26;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v21, 0, *v25, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v27 = *(__int64 **)(a1 + 312);
        if ( v27 )
        {
          v28 = *(unsigned __int16 *)(a3 + 8);
          for ( j = *((unsigned int *)v27 + 2); v28 >= j; j = *((unsigned int *)v42 + 2) )
          {
            v42 = (__int64 *)*v27;
            if ( !*v27 )
            {
LABEL_31:
              v30 = *((_DWORD *)v27 + 2) - 1;
              goto LABEL_32;
            }
            v27 = (__int64 *)*v27;
          }
LABEL_30:
          v30 = v28;
LABEL_32:
          v70 = v30;
          LOBYTE(v30) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v27, v30, (_DWORD)v26, v70, v28);
        }
LABEL_33:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
      }
      return 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        for ( k = *((unsigned int *)v17 + 2); ; k = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v32 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_39;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v32 = *((_DWORD *)v17 + 2) - 1;
LABEL_39:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v13, v11 + 16, v32, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong(v11 + 32, v45, 4277075694LL);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v33 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v33 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v33;
          *(_WORD *)(16 * v33 + a3 + 12) = *(_WORD *)(a1 + 140) ^ v33;
          *(_BYTE *)(a3 + 15) = 0;
          if ( a5 )
          {
            *(_BYTE *)(a3 + 10) &= 0xF0u;
            if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
            {
              v47 = (_DWORD *)(a3 + 32);
              v48 = (16 * (unsigned __int64)(unsigned __int16)v33 - 32) >> 2;
              if ( v48 )
              {
                if ( ((unsigned __int8)v47 & 4) != 0 )
                {
                  --v48;
                  *v47 = -17891602;
                  v47 = (_DWORD *)(a3 + 36);
                }
                memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
                if ( (v48 & 1) != 0 )
                  v47[v48 - 1] = -17891602;
              }
              *(_BYTE *)(a3 + 10) |= 4u;
            }
            v49 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v50 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v33);
            else
              v50 = (_QWORD *)*v49;
            if ( v49 != v50 )
            {
              v51 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v51 )
                {
                  v52 = *((_DWORD *)v50 - 2);
                  v51 = *(_DWORD *)(a1 + 124);
                  LOWORD(v74) = v52;
                  if ( (v52 & v51) != 0 )
                    v74 = *(_DWORD *)(a1 + 136) ^ v52;
                  v53 = v74;
                }
                else
                {
                  v53 = *((_WORD *)v50 - 4);
                }
                if ( (unsigned __int16)v33 <= (unsigned __int64)v53 )
                  break;
                v50 = (_QWORD *)*v50;
              }
              while ( v49 != v50 );
            }
            v54 = (__int64 *)v50[1];
            v26 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v54 == v50 )
            {
              *v26 = v50;
              *(_QWORD *)(a3 + 24) = v54;
              *v54 = (__int64)v26;
              v50[1] = v26;
            }
            else
            {
              RtlpLogHeapFailure(12, 0, (_DWORD)v50, 0, *v54, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v27 = *(__int64 **)(a1 + 312);
            if ( v27 )
            {
              v28 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v27 + 2); v28 >= m; m = *(unsigned int *)(v56 + 8) )
              {
                v56 = *v27;
                if ( !*v27 )
                  goto LABEL_31;
                v27 = (__int64 *)*v27;
              }
              goto LABEL_30;
            }
          }
          else
          {
            *(_BYTE *)(a3 + 10) = 0;
            v34 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v35 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v33);
            else
              v35 = (_QWORD *)*v34;
            if ( v34 != v35 )
            {
              v36 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v36 )
                {
                  v37 = *((_DWORD *)v35 - 2);
                  v36 = *(_DWORD *)(a1 + 124);
                  LOWORD(v73) = v37;
                  if ( (v37 & v36) != 0 )
                    v73 = *(_DWORD *)(a1 + 136) ^ v37;
                  v38 = v73;
                }
                else
                {
                  v38 = *((_WORD *)v35 - 4);
                }
                if ( (unsigned __int16)v33 <= (unsigned __int64)v38 )
                  break;
                v35 = (_QWORD *)*v35;
              }
              while ( v34 != v35 );
            }
            v39 = (__int64 *)v35[1];
            v26 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v39 == v35 )
            {
              *v26 = v35;
              *(_QWORD *)(a3 + 24) = v39;
              *v39 = (__int64)v26;
              v35[1] = v26;
            }
            else
            {
              RtlpLogHeapFailure(12, 0, (_DWORD)v35, 0, *v39, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v27 = *(__int64 **)(a1 + 312);
            if ( v27 )
            {
              v28 = *(unsigned __int16 *)(a3 + 8);
              for ( n = *((unsigned int *)v27 + 2); v28 >= n; n = *((unsigned int *)v41 + 2) )
              {
                v41 = (__int64 *)*v27;
                if ( !*v27 )
                  goto LABEL_31;
                v27 = (__int64 *)*v27;
              }
              goto LABEL_30;
            }
          }
          goto LABEL_33;
        }
        RtlpInsertFreeBlock(a1, a3, v33);
        return 1;
      }
      LOBYTE(v43) = 1;
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), v43);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
