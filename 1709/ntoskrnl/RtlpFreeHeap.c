/*
 * XREFs of RtlpFreeHeap @ 0x14010D2BC
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010CDA0 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14010D830 (RtlpCoalesceFreeBlocks.c)
 *     RtlpHeapAddListEntry @ 0x14010DAC0 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x14010E6FC (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x14025B6F8 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x14025BC0C (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x14025BF24 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  int v7; // esi
  int v8; // r14d
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // r9
  ULONG_PTR v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // r14
  _QWORD *v15; // rdi
  _QWORD *Entry; // r8
  int v17; // ecx
  unsigned __int16 v18; // ax
  _QWORD *v19; // rdi
  __int64 *v20; // rax
  __int64 **v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 **v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rdi
  _QWORD *v28; // r8
  int v29; // ecx
  unsigned __int16 v30; // ax
  __int64 *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // r9
  char v39; // [rsp+40h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  int v46; // [rsp+80h] [rbp-48h]
  int v47; // [rsp+90h] [rbp-38h]
  __int64 v48; // [rsp+E0h] [rbp+18h]

  v6 = 0;
  v39 = 0;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  v8 = v7 & 0x3C010F60;
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0
    && ((*(_BYTE *)(a3 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
  {
    RtlpLogHeapFreeEvent(a1, a4, (unsigned int)((v7 & 0x3C010F60) != 0) + 3);
  }
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v6 = 1;
    v39 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v25 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v25 + 2) )
        break;
      v25 = (__int64 **)*v25;
    }
    while ( v25 );
  }
  v9 = *(_BYTE *)(a3 + 10);
  if ( (v9 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v9 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v33 = a3 - 48;
    v34 = *(_QWORD *)(v33 + 32);
    BaseAddress = (PVOID)(v33 & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 560) -= v34;
    v35 = *(_QWORD *)v33;
    v36 = *(__int64 **)(v33 + 8);
    v37 = *(_QWORD *)(*(_QWORD *)v33 + 8LL);
    if ( *v36 == v37 && *v36 == v33 )
    {
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v33, v37, *v36);
    }
    if ( v6 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v6 = 0;
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, *(_QWORD *)(v33 + 40));
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapContractEvent(a1, v33, v34, 16 * *(_QWORD *)(a1 + 192), 0, 0LL);
    goto LABEL_89;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v10 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v48 = v10;
  v12 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v10, RegionSize);
      goto LABEL_89;
    }
    v13 = v8 == 0;
    v14 = (unsigned __int16)RegionSize;
    if ( v13 )
    {
      *(_BYTE *)(v10 + 10) = 0;
      *(_BYTE *)(v10 + 15) = 0;
      v15 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v12, v12, v11);
      else
        Entry = (_QWORD *)*v15;
      while ( v15 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v17 = *((_DWORD *)Entry - 2);
          v46 = v17;
          if ( (*(_DWORD *)(a1 + 124) & v17) != 0 )
            v46 = v17 ^ *(_DWORD *)(a1 + 136);
          v18 = v46;
          v10 = v48;
          v6 = v39;
        }
        else
        {
          v18 = *((_WORD *)Entry - 4);
        }
        if ( v14 <= v18 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v19 = (_QWORD *)(v10 + 16);
      v20 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v20 == Entry )
      {
        *v19 = Entry;
        *(_QWORD *)(v10 + 24) = v20;
        *v20 = (__int64)v19;
        Entry[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v20);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v10 + 8);
      v21 = *(__int64 ***)(a1 + 312);
      if ( !v21 )
        goto LABEL_29;
      v22 = *(unsigned __int16 *)(v10 + 8);
      while ( 1 )
      {
        v23 = *((unsigned int *)v21 + 2);
        if ( v22 < v23 )
        {
          v24 = *(unsigned __int16 *)(v10 + 8);
          goto LABEL_27;
        }
        if ( !*v21 )
          break;
        v21 = (__int64 **)*v21;
      }
      v24 = (unsigned int)(v23 - 1);
LABEL_27:
      v43 = v24;
LABEL_28:
      RtlpHeapAddListEntry(a1, (_DWORD)v21, v22, (_DWORD)v19, v24, v22);
LABEL_29:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
        *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_89;
    }
    *(_BYTE *)(v10 + 10) &= 0xF0u;
    *(_BYTE *)(v10 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_56:
      v27 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v28 = (_QWORD *)RtlpFindEntry(a1, v14, v12, v11);
      else
        v28 = (_QWORD *)*v27;
      while ( v27 != v28 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 = *((_DWORD *)v28 - 2);
          v47 = v29;
          if ( (*(_DWORD *)(a1 + 124) & v29) != 0 )
            v47 = v29 ^ *(_DWORD *)(a1 + 136);
          v30 = v47;
          v10 = v48;
          v6 = v39;
        }
        else
        {
          v30 = *((_WORD *)v28 - 4);
        }
        if ( v14 <= v30 )
          break;
        v28 = (_QWORD *)*v28;
      }
      v19 = (_QWORD *)(v10 + 16);
      v31 = (__int64 *)v28[1];
      if ( (_QWORD *)*v31 == v28 )
      {
        *v19 = v28;
        *(_QWORD *)(v10 + 24) = v31;
        *v31 = (__int64)v19;
        v28[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v28, 0, *v31);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v10 + 8);
      v21 = *(__int64 ***)(a1 + 312);
      if ( !v21 )
        goto LABEL_29;
      v22 = *(unsigned __int16 *)(v10 + 8);
      while ( 1 )
      {
        v32 = *((unsigned int *)v21 + 2);
        if ( v22 < v32 )
        {
          v24 = *(unsigned __int16 *)(v10 + 8);
          goto LABEL_76;
        }
        if ( !*v21 )
          break;
        v21 = (__int64 **)*v21;
      }
      v24 = (unsigned int)(v32 - 1);
LABEL_76:
      v45 = v24;
      goto LABEL_28;
    }
    v12 = v10 + 32;
    v44 = v10 + 32;
    v26 = (16 * v14 - 32) >> 2;
    v42 = v26;
    if ( v26 )
    {
      if ( (v12 & 4) == 0 )
        goto LABEL_53;
      *(_DWORD *)v12 = -17891602;
      v42 = --v26;
      if ( v26 )
      {
        v12 = v10 + 36;
        v44 = v10 + 36;
LABEL_53:
        memset64((void *)v12, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
        if ( (v26 & 1) != 0 )
          *(_DWORD *)(v12 + 4 * v26 - 4) = -17891602;
      }
    }
    *(_BYTE *)(v10 + 10) |= 4u;
    goto LABEL_56;
  }
  RtlpDeCommitFreeBlock(a1, (_WORD *)v10, RegionSize);
LABEL_89:
  if ( v6 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 1LL;
}
