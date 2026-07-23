/*
 * XREFs of sub_1801019C4 @ 0x1801019C4
 * Callers:
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C238 @ 0x18005C238 (sub_18005C238.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 *     sub_1800EF014 @ 0x1800EF014 (sub_1800EF014.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 */

char __fastcall sub_1801019C4(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  _PEB_LDR_DATA *v8; // r10
  _DWORD *v9; // r14
  bool v10; // cf
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 i; // rbx
  int v17; // edx
  unsigned __int8 v18; // dl
  __int64 v19; // r15
  __int64 v20; // r8
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // cx
  char v23; // al
  bool v24; // zf
  SIZE_T v25; // rbp
  __int64 *v26; // r14
  __int64 **v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 j; // rax
  __int64 v33; // rax
  unsigned int v34; // ecx
  char v35; // al
  unsigned __int64 v36; // rbp
  __int64 **v37; // r14
  __int64 *v38; // r8
  int v39; // ecx
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 k; // rax
  __int64 v45; // rax
  int v46; // r8d
  SIZE_T v47; // r14
  __int64 v48; // rax
  unsigned __int8 v49; // al
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // r8
  int v56; // [rsp+38h] [rbp-40h]
  unsigned int v57; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = a2 < *(_QWORD *)(a2 + 72);
  v11 = 0;
  v57 = 0;
  v12 = 0;
  LOWORD(v13) = 0;
  for ( i = a2; ; v10 = i < *(_QWORD *)(a2 + 72) )
  {
    if ( !v10 )
    {
      if ( *(_DWORD *)(a2 + 80) != v11 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 80),
          v11);
        return 0;
      }
      if ( *(_DWORD *)(a2 + 84) != v12 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 84),
          v12);
        return 0;
      }
      return 1;
    }
    *a6 = i;
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      v17 = *(_DWORD *)(i + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(i + 8) = v17;
      if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
      {
        sub_1800FC010(a1, i);
        v8 = 0LL;
      }
    }
    if ( (_WORD)v13 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12)) )
      break;
    v13 = *(unsigned __int16 *)(i + 8);
    v18 = *(_BYTE *)(i + 10);
    v19 = 16 * v13;
    if ( (v18 & 1) != 0 )
    {
      v20 = a7;
      if ( a7 )
      {
        v21 = (v18 & 2) != 0 ? *(_WORD *)(sub_180063B6C(i) + 2) : *(unsigned __int8 *)(i + 11);
        if ( v21 )
        {
          if ( (v21 & 0x8000u) == 0 )
          {
            if ( (v21 & 0x800) == 0 && v21 < *(_WORD *)(a1 + 224) )
              *(_QWORD *)(v20 + 8LL * v21) += v13;
          }
          else
          {
            v22 = v21 & 0x7FFF;
            if ( v22 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v22) += v13;
          }
        }
      }
      if ( (*(_BYTE *)(i + 10) & 4) != 0 )
      {
        v23 = sub_1800EF014(a1, i);
        v8 = 0LL;
        if ( !v23 )
        {
          v24 = *(_DWORD *)(a1 + 124) == 0;
          goto LABEL_118;
        }
      }
    }
    else
    {
      if ( ((v18 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
      {
        v25 = v19 - 32;
        if ( (v18 & 2) != 0 && v25 > 4 )
          v25 = v19 - 36;
        if ( (v18 & 8) != 0 )
        {
          v26 = *(__int64 **)(i + 24);
          v27 = (__int64 **)(i + 16);
          v28 = *(_QWORD *)(i + 16);
          v29 = *v26;
          v30 = *(_QWORD *)(v28 + 8);
          if ( *v26 == v30 && (__int64 **)v29 == v27 )
          {
            *(_QWORD *)(a1 + 192) -= v13;
            v31 = *(_QWORD *)(a1 + 312);
            if ( v31 )
            {
              for ( j = *(unsigned int *)(v31 + 8); ; j = *(unsigned int *)(v33 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < j )
                {
                  v34 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_35;
                }
                v33 = *(_QWORD *)v31;
                if ( !*(_QWORD *)v31 )
                  break;
                v31 = *(_QWORD *)v31;
              }
              v34 = *(_DWORD *)(v31 + 8) - 1;
LABEL_35:
              sub_18005C30C(a1, v31, 1, (__int64 *)(i + 16), v34, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            *v26 = v28;
            *(_QWORD *)(v28 + 8) = v26;
            if ( (*(_BYTE *)(i + 10) & 8) != 0 )
            {
              v35 = sub_18005CA3C((PVOID)a1, i);
              v8 = 0LL;
              if ( !v35 )
              {
                sub_1800128F0(a1, i, *(unsigned __int16 *)(i + 8), 1);
                goto LABEL_39;
              }
            }
            v36 = *(unsigned __int16 *)(i + 8);
            v37 = (__int64 **)(a1 + 336);
            *(_BYTE *)(i + 10) = (_BYTE)v8;
            *(_BYTE *)(i + 15) = (_BYTE)v8;
            if ( *(_PEB_LDR_DATA **)(a1 + 312) == v8 )
            {
              v38 = *v37;
            }
            else
            {
              v38 = sub_18005C238(a1, (unsigned int)v36);
              v8 = 0LL;
            }
            if ( v37 != (__int64 **)v38 )
            {
              v39 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v39 )
                {
                  v40 = *((_DWORD *)v38 - 2);
                  v39 = *(_DWORD *)(a1 + 124);
                  LOWORD(v56) = v40;
                  if ( (v39 & v40) != 0 )
                    v56 = *(_DWORD *)(a1 + 136) ^ v40;
                  v41 = v56;
                }
                else
                {
                  v41 = *((_WORD *)v38 - 4);
                }
                if ( v36 <= v41 )
                  break;
                v38 = (__int64 *)*v38;
              }
              while ( v37 != (__int64 **)v38 );
            }
            v42 = (__int64 *)v38[1];
            if ( (__int64 *)*v42 == v38 )
            {
              *v27 = v38;
              *(_QWORD *)(i + 24) = v42;
              *v42 = (__int64)v27;
              v38[1] = (__int64)v27;
            }
            else
            {
              sub_18009A5F0(13, 0LL, (__int64)v38, 0LL, *v42, (__int64)v8);
              v8 = 0LL;
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(i + 8);
            v43 = *(_QWORD *)(a1 + 312);
            if ( v43 )
            {
              for ( k = *(unsigned int *)(v43 + 8); ; k = *(unsigned int *)(v45 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < k )
                {
                  v46 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_64;
                }
                v45 = *(_QWORD *)v43;
                if ( !*(_QWORD *)v43 )
                  break;
                v43 = *(_QWORD *)v43;
              }
              v46 = *(_DWORD *)(v43 + 8) - 1;
LABEL_64:
              sub_18005C190(a1, v43, 1, i + 16, v46, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
            {
              *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
              *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            sub_18009A5F0(13, a1, i + 16, v30, v29, (__int64)v8);
LABEL_39:
            v8 = 0LL;
          }
          v9 = a4;
          goto LABEL_41;
        }
        v47 = RtlCompareMemoryUlong((PVOID)(i + 32), v25, 0xFEEEFEEE);
        if ( v47 != v25 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", i, v47 + i + 16);
          goto LABEL_117;
        }
        v11 = v57;
        v9 = a4;
      }
      v48 = *(unsigned __int16 *)(i + 8);
      ++*v9;
      *a5 += v48;
      v8 = 0LL;
    }
    v49 = *(_BYTE *)(i + 14);
    if ( v49 )
      v50 = (i & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v49 << 16) + 0x10000;
    else
      v50 = a1;
    if ( v50 != a2 )
    {
      if ( NtCurrentPeb()->Ldr == v8 )
        DbgPrint("HEAP: ");
      else
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", i, *(unsigned __int8 *)(i + 14));
      goto LABEL_117;
    }
    if ( *(_BYTE *)(i + 15) != 3 )
    {
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      i += v19;
      goto LABEL_41;
    }
    v51 = *(_QWORD *)(i + 56);
    if ( !v51 )
    {
      v53 = *(unsigned __int16 *)(i + 8);
      v54 = (unsigned __int16)v53;
      LOWORD(v54) = BYTE1(v53);
      if ( i + 16 * v53 != *(_QWORD *)(a2 + 72) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ", v53, v54);
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v54);
        DbgPrint("Heap block at %p is not last block in segment (%p)\n", i, *(_QWORD *)(a2 + 72));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = v53 ^ BYTE1(v53) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      return 1;
    }
    ++v12;
    v57 = (v51 >> 12) + v11;
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
      *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
    }
    i += *(_QWORD *)(i + 56) + 64LL;
    if ( i != *(_QWORD *)(a2 + 72) )
    {
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        v52 = *(_DWORD *)(i + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(i + 8) = v52;
        if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
        {
          sub_1800FC010(a1, i);
          v8 = 0LL;
        }
      }
      if ( *(_WORD *)(a1 + 140) != *(_WORD *)(i + 12) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap block at %p has corrupted PreviousSize (%lx)\n",
          i,
          *(unsigned __int16 *)(a1 + 140) ^ (unsigned int)*(unsigned __int16 *)(i + 12));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    LOWORD(v13) = (_WORD)v8;
LABEL_41:
    v11 = v57;
  }
  if ( NtCurrentPeb()->Ldr == v8 )
    DbgPrint("HEAP: ");
  else
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  DbgPrint(
    "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
    (const void *)i,
    *(unsigned __int16 *)(a1 + 140) ^ *(unsigned __int16 *)(i + 12),
    (unsigned __int16)v13);
LABEL_117:
  v24 = *(_DWORD *)(a1 + 124) == 0;
LABEL_118:
  if ( !v24 )
  {
    *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
    *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 0;
}
