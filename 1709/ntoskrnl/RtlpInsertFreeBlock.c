/*
 * XREFs of RtlpInsertFreeBlock @ 0x14010CDA0
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14014F05C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x14010DAC0 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x14010E6FC (RtlpFindEntry.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x14025B59C (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, __int64 a2, __int64 Entry)
{
  __int16 v4; // cx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  char v9; // al
  __int64 *v10; // r14
  unsigned __int16 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // rdx
  unsigned __int64 i; // rax
  __int64 *v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rdx
  int v24; // [rsp+38h] [rbp-30h]
  char v25; // [rsp+80h] [rbp+18h]

  if ( Entry )
  {
    v4 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    v5 = Entry;
    v6 = a2;
    if ( !v4
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))",
        a2,
        Entry,
        0LL);
      RtlpHeapHandleError();
    }
    v7 = *(_BYTE *)(a2 + 14);
    if ( v7 )
      v8 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(a2 + 10);
    v10 = (__int64 *)(a1 + 336);
    v25 = v9;
    while ( 1 )
    {
      if ( v5 > 0xFF00 )
      {
        *(_BYTE *)(v6 + 10) = 0;
        v11 = -272;
        if ( v5 != 65281 )
          v11 = -256;
      }
      else
      {
        v11 = v5;
        *(_BYTE *)(v6 + 10) = v9;
      }
      *(_WORD *)(v6 + 12) = v4 ^ *(_WORD *)(a1 + 140);
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 == v8 )
      {
        LOBYTE(v13) = 0;
      }
      else
      {
        v13 = ((v6 - v8) >> 16) + 1;
        if ( (v6 - v8) >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v12, v6, v8, 0LL);
      }
      *(_BYTE *)(v6 + 10) &= 0xF0u;
      *(_BYTE *)(v6 + 14) = v13;
      *(_WORD *)(v6 + 8) = v11;
      *(_BYTE *)(v6 + 11) = 0;
      *(_BYTE *)(v6 + 15) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        Entry = v6 + 32;
        v23 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v23 )
        {
          if ( (Entry & 4) != 0 )
          {
            --v23;
            *(_DWORD *)Entry = -17891602;
            Entry = v6 + 36;
          }
          memset64((void *)Entry, 0xFEEEFEEEFEEEFEEEuLL, v23 >> 1);
          if ( (v23 & 1) != 0 )
            *(_DWORD *)(Entry + 4 * v23 - 4) = -17891602;
        }
        *(_BYTE *)(v6 + 10) |= 4u;
      }
      if ( *(_QWORD *)(a1 + 312) )
        Entry = RtlpFindEntry(a1, v11, Entry, 0LL);
      else
        Entry = *v10;
      if ( v10 != (__int64 *)Entry )
      {
        v20 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v20 )
          {
            v21 = *(_DWORD *)(Entry - 8);
            v20 = *(_DWORD *)(a1 + 124);
            LOWORD(v24) = v21;
            if ( (v20 & v21) != 0 )
              v24 = *(_DWORD *)(a1 + 136) ^ v21;
            v22 = v24;
          }
          else
          {
            v22 = *(_WORD *)(Entry - 8);
          }
          if ( v11 <= (unsigned __int64)v22 )
            break;
          Entry = *(_QWORD *)Entry;
        }
        while ( v10 != (__int64 *)Entry );
      }
      v14 = *(__int64 **)(Entry + 8);
      v15 = (__int64 *)(v6 + 16);
      if ( *v14 == Entry )
      {
        *v15 = Entry;
        *(_QWORD *)(v6 + 24) = v14;
        *v14 = (__int64)v15;
        *(_QWORD *)(Entry + 8) = v15;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, Entry, 0, *v14);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v6 + 8);
      v16 = *(__int64 **)(a1 + 312);
      if ( v16 )
      {
        for ( i = *((unsigned int *)v16 + 2); *(unsigned __int16 *)(v6 + 8) >= i; i = *((unsigned int *)v18 + 2) )
        {
          v18 = (__int64 *)*v16;
          if ( !*v16 )
          {
            v19 = *((_DWORD *)v16 + 2) - 1;
            goto LABEL_21;
          }
          v16 = (__int64 *)*v16;
        }
        v19 = *(unsigned __int16 *)(v6 + 8);
LABEL_21:
        RtlpHeapAddListEntry(a1, (_DWORD)v16, Entry, v6 + 16, v19, *(unsigned __int16 *)(v6 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
        *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v5 -= v11;
      v4 = v11;
      v6 += 16LL * v11;
      if ( v6 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v25;
      v10 = (__int64 *)(a1 + 336);
      if ( !v5 )
      {
        *(_WORD *)(v6 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        return;
      }
    }
  }
}
