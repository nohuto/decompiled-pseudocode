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
  char v43; // al
  SIZE_T v44; // r14
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 m; // rax
  __int64 v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rdi
  _QWORD *Entry; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  _QWORD *v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 i; // rax
  __int64 *v67; // rax
  int v68; // r8d
  int v69; // [rsp+20h] [rbp-38h]
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+38h] [rbp-20h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]

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
          v56 = (_DWORD *)(a3 + 32);
          v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v57 )
          {
            if ( ((unsigned __int8)v56 & 4) != 0 )
            {
              --v57;
              *v56 = -17891602;
              v56 = (_DWORD *)(a3 + 36);
            }
            memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
            if ( (v57 & 1) != 0 )
              v56[v57 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v58 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v58;
        if ( v58 != Entry )
        {
          v60 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v60 )
            {
              v61 = *((_DWORD *)Entry - 2);
              v60 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v61;
              if ( (v61 & v60) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v61;
              v62 = v74;
            }
            else
            {
              v62 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v58 != Entry );
        }
        v63 = (__int64 *)Entry[1];
        v64 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v63 == Entry )
        {
          *v64 = Entry;
          *(_QWORD *)(a3 + 24) = v63;
          *v63 = (__int64)v64;
          Entry[1] = v64;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v63, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v65 = *(__int64 **)(a1 + 312);
        if ( v65 )
        {
          for ( i = *((unsigned int *)v65 + 2); ; i = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_147;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_147:
          v70 = v68;
          LOBYTE(v68) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
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
              LOWORD(v71) = v23;
              if ( (v22 & v23) != 0 )
                v71 = *(_DWORD *)(a1 + 136) ^ v23;
              v24 = v71;
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
          v69 = v30;
          LOBYTE(v30) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v27, v30, (_DWORD)v26, v69, v28);
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
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
      {
        if ( a5 )
        {
          v43 = *(_BYTE *)(v11 + 10);
          if ( (v43 & 4) != 0 )
          {
            v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v43 & 2) != 0 && v44 > 4 )
              v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v45 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v44, 0xFEEEFEEE);
            if ( v45 != v44 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v45 + v11 + 32));
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
              v46 = (_DWORD *)(a3 + 32);
              v47 = (16 * (unsigned __int64)(unsigned __int16)v33 - 32) >> 2;
              if ( v47 )
              {
                if ( ((unsigned __int8)v46 & 4) != 0 )
                {
                  --v47;
                  *v46 = -17891602;
                  v46 = (_DWORD *)(a3 + 36);
                }
                memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
                if ( (v47 & 1) != 0 )
                  v46[v47 - 1] = -17891602;
              }
              *(_BYTE *)(a3 + 10) |= 4u;
            }
            v48 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v49 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v33);
            else
              v49 = (_QWORD *)*v48;
            if ( v48 != v49 )
            {
              v50 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v50 )
                {
                  v51 = *((_DWORD *)v49 - 2);
                  v50 = *(_DWORD *)(a1 + 124);
                  LOWORD(v73) = v51;
                  if ( (v51 & v50) != 0 )
                    v73 = *(_DWORD *)(a1 + 136) ^ v51;
                  v52 = v73;
                }
                else
                {
                  v52 = *((_WORD *)v49 - 4);
                }
                if ( (unsigned __int16)v33 <= (unsigned __int64)v52 )
                  break;
                v49 = (_QWORD *)*v49;
              }
              while ( v48 != v49 );
            }
            v53 = (__int64 *)v49[1];
            v26 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v53 == v49 )
            {
              *v26 = v49;
              *(_QWORD *)(a3 + 24) = v53;
              *v53 = (__int64)v26;
              v49[1] = v26;
            }
            else
            {
              RtlpLogHeapFailure(12, 0, (_DWORD)v49, 0, *v53, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v27 = *(__int64 **)(a1 + 312);
            if ( v27 )
            {
              v28 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v27 + 2); v28 >= m; m = *(unsigned int *)(v55 + 8) )
              {
                v55 = *v27;
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
                  LOWORD(v72) = v37;
                  if ( (v37 & v36) != 0 )
                    v72 = *(_DWORD *)(a1 + 136) ^ v37;
                  v38 = v72;
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
      RtlpDeCommitFreeBlock(a1);
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
