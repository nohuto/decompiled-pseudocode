/*
 * XREFs of RtlpCreateSplitBlock @ 0x14010CFC4
 * Callers:
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x14010CDA0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x14010DAC0 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14010E60C (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x14010E6FC (RtlpFindEntry.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x140189680 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // r8
  int v15; // ecx
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 *v18; // rax
  _QWORD *v19; // rdi
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 j; // rax
  int v23; // r8d
  __int64 *v25; // rax
  __int64 *v26; // r12
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 *v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 k; // rax
  __int64 *v32; // rax
  int v33; // ecx
  char v34; // al
  SIZE_T v35; // r14
  SIZE_T v36; // rax
  unsigned __int64 v37; // rbp
  _QWORD *v38; // rdi
  _QWORD *v39; // r8
  int v40; // ecx
  int v41; // eax
  unsigned __int16 v42; // ax
  __int64 *v43; // rax
  unsigned __int64 m; // rax
  __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rdi
  _QWORD *v48; // r8
  int v49; // ecx
  int v50; // eax
  unsigned __int16 v51; // ax
  __int64 *v52; // rax
  unsigned __int64 n; // rax
  __int64 *v54; // rax
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rdi
  _QWORD *Entry; // r8
  int v58; // ecx
  int v59; // eax
  unsigned __int16 v60; // ax
  __int64 *v61; // rax
  _QWORD *v62; // rdi
  __int64 *v63; // rdx
  unsigned __int64 i; // rax
  __int64 *v65; // rax
  int v66; // r8d
  int v67; // [rsp+38h] [rbp-30h]
  int v68; // [rsp+38h] [rbp-30h]
  int v69; // [rsp+38h] [rbp-30h]
  int v70; // [rsp+38h] [rbp-30h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v8 = a3;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( (unsigned __int64)(a3 - a2) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL);
  }
  *(_BYTE *)(v8 + 14) = v11;
  v12 = v8 + 16 * a7;
  *(_BYTE *)(v8 + 11) = 0;
  *(_WORD *)(v8 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(v8 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(v8 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          a3 = v8 + 32;
          v55 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v55 )
          {
            if ( (a3 & 4) != 0 )
            {
              --v55;
              *(_DWORD *)a3 = -17891602;
              a3 = v8 + 36;
            }
            memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v55 >> 1);
            if ( (v55 & 1) != 0 )
              *(_DWORD *)(a3 + 4 * v55 - 4) = -17891602;
          }
          *(_BYTE *)(v8 + 10) |= 4u;
        }
        v56 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7, a3, a4);
        else
          Entry = (_QWORD *)*v56;
        if ( v56 != Entry )
        {
          v58 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v58 )
            {
              v59 = *((_DWORD *)Entry - 2);
              v58 = *(_DWORD *)(a1 + 124);
              LOWORD(v70) = v59;
              if ( (v59 & v58) != 0 )
                v70 = *(_DWORD *)(a1 + 136) ^ v59;
              v60 = v70;
            }
            else
            {
              v60 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v60 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v56 != Entry );
        }
        v61 = (__int64 *)Entry[1];
        v62 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v61 == Entry )
        {
          *v62 = Entry;
          *(_QWORD *)(v8 + 24) = v61;
          *v61 = (__int64)v62;
          Entry[1] = v62;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v61);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v63 = *(__int64 **)(a1 + 312);
        if ( v63 )
        {
          for ( i = *((unsigned int *)v63 + 2); ; i = *((unsigned int *)v65 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < i )
            {
              v66 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_140;
            }
            v65 = (__int64 *)*v63;
            if ( !*v63 )
              break;
            v63 = (__int64 *)*v63;
          }
          v66 = *((_DWORD *)v63 + 2) - 1;
LABEL_140:
          RtlpHeapAddListEntry(a1, (_DWORD)v63, v66, v8 + 16, v66, *(unsigned __int16 *)(v8 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(v8 + 10) = 0;
      v13 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v14 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7, a3, a4);
      else
        v14 = (_QWORD *)*v13;
      if ( v13 != v14 )
      {
        v15 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v15 )
          {
            v16 = *((_DWORD *)v14 - 2);
            v15 = *(_DWORD *)(a1 + 124);
            LOWORD(v67) = v16;
            if ( (v15 & v16) != 0 )
              v67 = *(_DWORD *)(a1 + 136) ^ v16;
            v17 = v67;
          }
          else
          {
            v17 = *((_WORD *)v14 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned __int64)v17 )
            break;
          v14 = (_QWORD *)*v14;
        }
        while ( v13 != v14 );
      }
      v18 = (__int64 *)v14[1];
      v19 = (_QWORD *)(v8 + 16);
      if ( (_QWORD *)*v18 == v14 )
      {
        *v19 = v14;
        *(_QWORD *)(v8 + 24) = v18;
        *v18 = (__int64)v19;
        v14[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v14, 0, *v18);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
      v20 = *(__int64 **)(a1 + 312);
      if ( !v20 )
        goto LABEL_22;
      v21 = *(unsigned __int16 *)(v8 + 8);
      for ( j = *((unsigned int *)v20 + 2); v21 >= j; j = *((unsigned int *)v25 + 2) )
      {
        v25 = (__int64 *)*v20;
        if ( !*v20 )
          goto LABEL_26;
        v20 = (__int64 *)*v20;
      }
      goto LABEL_20;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v26 = *(__int64 **)(v12 + 24);
    v27 = *(_QWORD *)(v12 + 16);
    v28 = *(_QWORD *)(v27 + 8);
    if ( *v26 == v28 && *v26 == v12 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v29 = *(__int64 **)(a1 + 312);
      if ( v29 )
      {
        v30 = *(unsigned __int16 *)(v12 + 8);
        for ( k = *((unsigned int *)v29 + 2); ; k = *((unsigned int *)v32 + 2) )
        {
          if ( v30 < k )
          {
            v33 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_44;
          }
          v32 = (__int64 *)*v29;
          if ( !*v29 )
            break;
          v29 = (__int64 *)*v29;
        }
        v33 = *((_DWORD *)v29 + 2) - 1;
LABEL_44:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v29, v30, v12 + 16, v33, *(unsigned __int16 *)(v12 + 8));
      }
      *v26 = v27;
      *(_QWORD *)(v27 + 8) = v26;
      if ( a5 )
      {
        v34 = *(_BYTE *)(v12 + 10);
        if ( (v34 & 4) != 0 )
        {
          v35 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v34 & 2) != 0 && v35 > 4 )
            v35 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v36 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v35, 0xFEEEFEEE);
          if ( v36 != v35 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(v8 + 16 * a7),
              (const void *)(v36 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(v8 + 10) = *(_BYTE *)(v12 + 10);
      v37 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v37 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, v8, v37);
        return 1;
      }
      *(_WORD *)(v8 + 8) = v37;
      *(_WORD *)(16 * v37 + v8 + 12) = *(_WORD *)(a1 + 140) ^ v37;
      *(_BYTE *)(v8 + 15) = 0;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 10) = 0;
        v38 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v39 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v37, a3, v28);
        else
          v39 = (_QWORD *)*v38;
        if ( v38 != v39 )
        {
          v40 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v40 )
            {
              v41 = *((_DWORD *)v39 - 2);
              v40 = *(_DWORD *)(a1 + 124);
              LOWORD(v68) = v41;
              if ( (v41 & v40) != 0 )
                v68 = *(_DWORD *)(a1 + 136) ^ v41;
              v42 = v68;
            }
            else
            {
              v42 = *((_WORD *)v39 - 4);
            }
            if ( (unsigned __int16)v37 <= (unsigned __int64)v42 )
              break;
            v39 = (_QWORD *)*v39;
          }
          while ( v38 != v39 );
        }
        v43 = (__int64 *)v39[1];
        v19 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v43 == v39 )
        {
          *v19 = v39;
          *(_QWORD *)(v8 + 24) = v43;
          *v43 = (__int64)v19;
          v39[1] = v19;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v39, 0, *v43);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v20 = *(__int64 **)(a1 + 312);
        if ( v20 )
        {
          v21 = *(unsigned __int16 *)(v8 + 8);
          for ( m = *((unsigned int *)v20 + 2); v21 >= m; m = *((unsigned int *)v45 + 2) )
          {
            v45 = (__int64 *)*v20;
            if ( !*v20 )
              goto LABEL_26;
            v20 = (__int64 *)*v20;
          }
          goto LABEL_20;
        }
LABEL_22:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(v8 + 10) &= 0xF0u;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        a3 = v8 + 32;
        v46 = (16 * (unsigned __int64)(unsigned __int16)v37 - 32) >> 2;
        if ( v46 )
        {
          if ( (a3 & 4) != 0 )
          {
            --v46;
            *(_DWORD *)a3 = -17891602;
            a3 = v8 + 36;
          }
          memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v46 >> 1);
          if ( (v46 & 1) != 0 )
            *(_DWORD *)(a3 + 4 * v46 - 4) = -17891602;
        }
        *(_BYTE *)(v8 + 10) |= 4u;
      }
      v47 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v48 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v37, a3, v28);
      else
        v48 = (_QWORD *)*v47;
      if ( v47 != v48 )
      {
        v49 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v49 )
          {
            v50 = *((_DWORD *)v48 - 2);
            v49 = *(_DWORD *)(a1 + 124);
            LOWORD(v69) = v50;
            if ( (v50 & v49) != 0 )
              v69 = *(_DWORD *)(a1 + 136) ^ v50;
            v51 = v69;
          }
          else
          {
            v51 = *((_WORD *)v48 - 4);
          }
          if ( (unsigned __int16)v37 <= (unsigned __int64)v51 )
            break;
          v48 = (_QWORD *)*v48;
        }
        while ( v47 != v48 );
      }
      v52 = (__int64 *)v48[1];
      v19 = (_QWORD *)(v8 + 16);
      if ( (_QWORD *)*v52 == v48 )
      {
        *v19 = v48;
        *(_QWORD *)(v8 + 24) = v52;
        *v52 = (__int64)v19;
        v48[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v48, 0, *v52);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
      v20 = *(__int64 **)(a1 + 312);
      if ( !v20 )
        goto LABEL_22;
      v21 = *(unsigned __int16 *)(v8 + 8);
      for ( n = *((unsigned int *)v20 + 2); v21 >= n; n = *((unsigned int *)v54 + 2) )
      {
        v54 = (__int64 *)*v20;
        if ( !*v20 )
        {
LABEL_26:
          v23 = *((_DWORD *)v20 + 2) - 1;
          goto LABEL_21;
        }
        v20 = (__int64 *)*v20;
      }
LABEL_20:
      v23 = v21;
LABEL_21:
      RtlpHeapAddListEntry(a1, (_DWORD)v20, v23, (_DWORD)v19, v23, v21);
      goto LABEL_22;
    }
    RtlpLogHeapFailure(12, a1, v12 + 16, v28, *v26);
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
