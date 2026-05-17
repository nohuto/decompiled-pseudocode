/*
 * XREFs of RtlpInsertFreeBlock @ 0x180039B00
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rbp
  __int16 v6; // di
  unsigned __int8 v7; // al
  unsigned __int64 v8; // r9
  char v9; // al
  _QWORD **v10; // r8
  unsigned __int16 v11; // r11
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int v17; // r14d
  __int64 *v18; // r13
  _DWORD *i; // r12
  _QWORD *v20; // rsi
  unsigned int v21; // edi
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rdi
  __int64 *v25; // rax
  _QWORD *v26; // r12
  __int64 *v27; // rdi
  unsigned __int64 v28; // r15
  __int64 *v29; // rax
  int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r14
  int v35; // ecx
  int v36; // eax
  unsigned __int16 v37; // ax
  unsigned int v38; // r8d
  char v39; // di
  __int64 v40; // rax
  __int64 v41; // r8
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // r8
  _DWORD *v45; // r8
  __int16 v46; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+40h] [rbp-98h]
  unsigned int v49; // [rsp+50h] [rbp-88h]
  unsigned int v50; // [rsp+60h] [rbp-78h]
  unsigned int v51; // [rsp+70h] [rbp-68h]
  unsigned int v52; // [rsp+80h] [rbp-58h]
  int v53; // [rsp+90h] [rbp-48h]
  unsigned __int64 v54; // [rsp+E8h] [rbp+10h]
  unsigned __int64 v55; // [rsp+F0h] [rbp+18h]
  char v56; // [rsp+F8h] [rbp+20h]

  if ( !a3 )
    return;
  v55 = a3;
  v54 = a2;
  v3 = a3;
  v4 = a2;
  v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
  if ( !v6
    && RtlpHeapErrorHandlerThreshold >= 1
    && (*(_BYTE *)(a2 + 10) & 8) == 0
    && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
    RtlpHeapHandleError(1LL);
    v3 = v55;
  }
  v7 = *(_BYTE *)(v4 + 14);
  if ( v7 )
    v8 = (v4 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = *(_BYTE *)(v4 + 10);
  v10 = (_QWORD **)(a1 + 336);
  v56 = v9;
  v47 = v8;
  do
  {
    if ( v3 > 0xFF00 )
    {
      v11 = -256;
      v46 = -256;
      if ( v3 == 65281 )
      {
        v11 = -272;
        v46 = -272;
      }
      *(_BYTE *)(v4 + 10) = 0;
    }
    else
    {
      v11 = v3;
      *(_BYTE *)(v4 + 10) = v9;
      v46 = v3;
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
        RtlpLogHeapFailure(3, v12, v4, v8, 0LL, 0LL);
        v8 = v47;
        v10 = (_QWORD **)(a1 + 336);
        v3 = v55;
        v11 = v46;
      }
    }
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 14) = v13;
    *(_WORD *)(v4 + 8) = v11;
    *(_BYTE *)(v4 + 11) = 0;
    v14 = v11;
    *(_BYTE *)(v4 + 15) = 0;
    v48 = v11;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v45 = (_DWORD *)(v4 + 32);
      v12 = (16 * (unsigned __int64)v11 - 32) >> 2;
      if ( v12 )
      {
        if ( ((unsigned __int8)v45 & 4) != 0 )
        {
          --v12;
          *v45 = -17891602;
          v45 = (_DWORD *)(v4 + 36);
        }
        memset64(v45, 0xFEEEFEEEFEEEFEEEuLL, v12 >> 1);
        if ( (v12 & 1) != 0 )
          v45[v12 - 1] = -17891602;
      }
      *(_BYTE *)(v4 + 10) |= 4u;
      v10 = (_QWORD **)(a1 + 336);
    }
    v15 = *(__int64 **)(a1 + 312);
    if ( v15 )
    {
      if ( v11 < (unsigned __int64)*((unsigned int *)v15 + 2) )
      {
LABEL_65:
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
            goto LABEL_65;
        }
        v17 = *((_DWORD *)v15 + 2) - 1;
      }
      v18 = v15;
      for ( i = v15 + 3; ; i = v18 + 3 )
      {
        v20 = (_QWORD *)v18[4];
        v21 = v17 - *i;
        v22 = (_QWORD *)v20[1];
        if ( v20 != v22 )
        {
          v12 = *((unsigned int *)v22 - 2);
          v49 = *((_DWORD *)v22 - 2);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v49 = *(_DWORD *)(a1 + 136) ^ v12;
            v12 = HIBYTE(v49);
            if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
              RtlpLogHeapFailure(3, a1, (_DWORD)v22 - 16, 0, 0LL, 0LL);
          }
          if ( (int)(v14 - (unsigned __int16)v49) <= 0 )
          {
            v23 = *v20 - 16LL;
            v12 = *(unsigned int *)(v23 + 8);
            v50 = *(_DWORD *)(v23 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v50 = *(_DWORD *)(a1 + 136) ^ v12;
              v12 = HIBYTE(v50);
              if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
                RtlpLogHeapFailure(3, a1, v23, 0, 0LL, 0LL);
            }
            if ( (int)(v14 - (unsigned __int16)v50) <= 0 )
            {
              v20 = (_QWORD *)*v20;
            }
            else if ( *v18 || v17 != *((_DWORD *)v18 + 2) - 1 )
            {
              v38 = v21;
              v39 = v21 & 0x1F;
              v40 = v18[5];
              v41 = v38 >> 5;
              v12 = *(_DWORD *)(v40 + 4 * v41) & (unsigned int)~((1 << v39) - 1);
              v42 = (_DWORD *)(v40 + 4 * v41);
              if ( (*v42 & ~((1 << v39) - 1)) == 0 )
              {
                while ( (unsigned int)v41 <= ((unsigned int)(*((_DWORD *)v18 + 2) - *i) >> 5) - 1 )
                {
                  v12 = (unsigned int)v42[1];
                  ++v42;
                  LODWORD(v41) = v41 + 1;
                  if ( (_DWORD)v12 )
                    goto LABEL_83;
                }
                if ( !(_DWORD)v12 )
                  goto LABEL_100;
              }
LABEL_83:
              if ( (_WORD)v12 )
              {
                if ( (_BYTE)v12 )
                  v43 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v12];
                else
                  v43 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v12)] + 8;
              }
              else if ( (v12 & 0xFF0000) != 0 )
              {
                v43 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v12)] + 16;
              }
              else
              {
                v43 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)(unsigned int)v12 >> 24] + 24;
              }
              v44 = (unsigned int)(v43 + 32 * v41);
              if ( *((_DWORD *)v18 + 3) )
                v44 = (unsigned int)(2 * v44);
              v20 = *(_QWORD **)(v18[6] + 8 * v44);
            }
            else
            {
              if ( *((_DWORD *)v18 + 3) )
                v21 *= 2;
              v24 = *(_QWORD **)(v18[6] + 8LL * v21);
              if ( v20 == v24 )
                goto LABEL_100;
              while ( 1 )
              {
                v12 = *((unsigned int *)v24 - 2);
                v51 = *((_DWORD *)v24 - 2);
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v51 = *(_DWORD *)(a1 + 136) ^ v12;
                  v12 = HIBYTE(v51);
                  if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
                    RtlpLogHeapFailure(3, a1, (_DWORD)v24 - 16, 0, 0LL, 0LL);
                }
                if ( (int)(v14 - (unsigned __int16)v51) <= 0 )
                  break;
                v24 = (_QWORD *)*v24;
                if ( v20 == v24 )
                  goto LABEL_100;
              }
              v20 = v24;
            }
          }
        }
        if ( v20 )
        {
          v4 = v54;
          v10 = (_QWORD **)(a1 + 336);
          v8 = v47;
          v3 = v55;
          v11 = v46;
          goto LABEL_39;
        }
LABEL_100:
        v18 = (__int64 *)*v18;
        v17 = *((_DWORD *)v18 + 6);
      }
    }
    v20 = *v10;
LABEL_39:
    if ( v10 != v20 )
    {
      v35 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v35 )
        {
          v36 = *((_DWORD *)v20 - 2);
          v35 = *(_DWORD *)(a1 + 124);
          LOWORD(v53) = v36;
          if ( (v36 & v35) != 0 )
            v53 = *(_DWORD *)(a1 + 136) ^ v36;
          v37 = v53;
        }
        else
        {
          v37 = *((_WORD *)v20 - 4);
        }
        if ( v14 <= v37 )
          break;
        v20 = (_QWORD *)*v20;
      }
      while ( v10 != v20 );
    }
    v25 = (__int64 *)v20[1];
    v26 = (_QWORD *)(v4 + 16);
    if ( (_QWORD *)*v25 == v20 )
    {
      *v26 = v20;
      *(_QWORD *)(v4 + 24) = v25;
      *v25 = (__int64)v26;
      v20[1] = v26;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v20, 0, *v25, 0LL);
      v8 = v47;
      v10 = (_QWORD **)(a1 + 336);
      v3 = v55;
      v11 = v46;
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
    v27 = *(__int64 **)(a1 + 312);
    if ( v27 )
    {
      v28 = *(unsigned __int16 *)(v4 + 8);
      if ( v28 < *((unsigned int *)v27 + 2) )
      {
LABEL_67:
        v30 = *(unsigned __int16 *)(v4 + 8);
      }
      else
      {
        while ( 1 )
        {
          v29 = (__int64 *)*v27;
          if ( !*v27 )
            break;
          v27 = (__int64 *)*v27;
          if ( v28 < *((unsigned int *)v29 + 2) )
            goto LABEL_67;
        }
        v30 = *((_DWORD *)v27 + 2) - 1;
      }
      v31 = v30 - *((_DWORD *)v27 + 6);
      if ( *((_DWORD *)v27 + 3) )
        v32 = 2 * v31;
      else
        v32 = v31;
      ++*((_DWORD *)v27 + 4);
      v33 = 8 * v32;
      v34 = *(_QWORD *)(v27[6] + 8 * v32);
      if ( v30 == *((_DWORD *)v27 + 2) - 1 )
        ++*((_DWORD *)v27 + 5);
      if ( !v34 )
        goto LABEL_55;
      v12 = *(unsigned int *)(v34 - 8);
      v52 = *(_DWORD *)(v34 - 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v52 = *(_DWORD *)(a1 + 136) ^ v12;
        v12 = HIBYTE(v52);
        if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
        {
          RtlpLogHeapFailure(3, a1, v34 - 16, 0, 0LL, 0LL);
          v8 = v47;
          v3 = v55;
          v11 = v46;
        }
      }
      if ( (int)(v28 - (unsigned __int16)v52) <= 0 )
LABEL_55:
        *(_QWORD *)(v27[6] + v33) = v26;
      v14 = v48;
      v10 = (_QWORD **)(a1 + 336);
      if ( !v34 )
      {
        v12 = v27[5] + 4 * ((unsigned __int64)v31 >> 5);
        *(_DWORD *)v12 |= 1 << (v31 & 0x1F);
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
    v55 = v3;
    v54 = v4;
    if ( v4 >= *(_QWORD *)(v8 + 72) )
      return;
    v9 = v56;
  }
  while ( v3 );
  *(_WORD *)(v4 + 12) = v11 ^ *(_WORD *)(a1 + 140);
  if ( !v11 && RtlpHeapErrorHandlerThreshold >= 1 && ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v10);
    else
      DbgPrint("HEAP: ", v12, v10);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    RtlpHeapHandleError(1LL);
  }
}
