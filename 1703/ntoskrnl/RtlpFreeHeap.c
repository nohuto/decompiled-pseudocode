/*
 * XREFs of RtlpFreeHeap @ 0x14000EDEC
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14000ED38 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14000F368 (RtlpCoalesceFreeBlocks.c)
 *     RtlpHeapAddListEntry @ 0x14000F604 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x14001031C (RtlpFindEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x140243E68 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x140244300 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x140244814 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x140244B2C (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  int v7; // esi
  int v8; // r15d
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  ULONG_PTR v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // r15
  _QWORD *v16; // rdi
  _QWORD *Entry; // r8
  int v18; // ecx
  unsigned __int16 v19; // ax
  _QWORD *v20; // rdi
  __int64 *v21; // rax
  __int64 **v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 **v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rdi
  _QWORD *v28; // r8
  int v29; // ecx
  unsigned __int16 v30; // ax
  __int64 *v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // r9
  char v38; // [rsp+40h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-78h]
  PVOID BaseAddress; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-68h]
  unsigned __int64 v43; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+70h] [rbp-58h]
  unsigned __int64 v45; // [rsp+78h] [rbp-50h]
  int v46; // [rsp+88h] [rbp-40h]
  int v47; // [rsp+98h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp+18h]

  v6 = 0;
  v38 = 0;
  v40 = 1;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  v8 = v7 & 0x3C010F60;
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0
    && ((*(unsigned __int8 *)(a3 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
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
    v38 = 1;
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
    v32 = a3 - 48;
    v33 = *(_QWORD *)(v32 + 32);
    BaseAddress = (PVOID)(v32 & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 560) -= v33;
    v34 = *(_QWORD *)v32;
    v35 = *(__int64 **)(v32 + 8);
    v36 = *(_QWORD *)(*(_QWORD *)v32 + 8LL);
    if ( *v35 == v36 && *v35 == v32 )
    {
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v32, v36, *v35);
    }
    if ( v6 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v6 = 0;
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, *(_QWORD *)(v32 + 40));
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapContractEvent(a1, v32, v33, 16 * *(_QWORD *)(a1 + 192), 0, 0LL);
    goto LABEL_87;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v10 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v12 = v10;
  v48 = v10;
  v13 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v10, RegionSize);
      goto LABEL_87;
    }
    v14 = v8 == 0;
    v15 = (unsigned __int16)RegionSize;
    if ( v14 )
    {
      *(_BYTE *)(v10 + 10) = 0;
      *(_BYTE *)(v10 + 15) = 0;
      v16 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v13, v13, v11);
      else
        Entry = (_QWORD *)*v16;
      while ( v16 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v18 = *((_DWORD *)Entry - 2);
          v46 = v18;
          if ( (*(_DWORD *)(a1 + 124) & v18) != 0 )
            v46 = v18 ^ *(_DWORD *)(a1 + 136);
          v19 = v46;
          v12 = v48;
          v6 = v38;
        }
        else
        {
          v19 = *((_WORD *)Entry - 4);
        }
        if ( v15 <= v19 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v20 = (_QWORD *)(v12 + 16);
      v21 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v21 == Entry )
      {
        *v20 = Entry;
        *(_QWORD *)(v12 + 24) = v21;
        *v21 = (__int64)v20;
        Entry[1] = v20;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v21);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v22 = *(__int64 ***)(a1 + 312);
      if ( !v22 )
        goto LABEL_28;
      v23 = *(unsigned __int16 *)(v12 + 8);
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 2);
        if ( v23 < v24 )
          break;
        if ( !*v22 )
        {
          v23 = (unsigned int)(v24 - 1);
          break;
        }
        v22 = (__int64 **)*v22;
      }
      v43 = v23;
LABEL_27:
      RtlpHeapAddListEntry(a1, (_DWORD)v22, v24, (_DWORD)v20, v23, *(unsigned __int16 *)(v12 + 8));
LABEL_28:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_87;
    }
    *(_BYTE *)(v10 + 10) &= 0xF0u;
    *(_BYTE *)(v10 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_55:
      v27 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v28 = (_QWORD *)RtlpFindEntry(a1, v15, v13, v11);
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
          v12 = v48;
          v6 = v38;
        }
        else
        {
          v30 = *((_WORD *)v28 - 4);
        }
        if ( v15 <= v30 )
          break;
        v28 = (_QWORD *)*v28;
      }
      v20 = (_QWORD *)(v12 + 16);
      v31 = (__int64 *)v28[1];
      if ( (_QWORD *)*v31 == v28 )
      {
        *v20 = v28;
        *(_QWORD *)(v12 + 24) = v31;
        *v31 = (__int64)v20;
        v28[1] = v20;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v28, 0, *v31);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v22 = *(__int64 ***)(a1 + 312);
      if ( !v22 )
        goto LABEL_28;
      v23 = *(unsigned __int16 *)(v12 + 8);
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 2);
        if ( v23 < v24 )
          break;
        if ( !*v22 )
        {
          v23 = (unsigned int)(v24 - 1);
          break;
        }
        v22 = (__int64 **)*v22;
      }
      v45 = v23;
      goto LABEL_27;
    }
    v13 = v10 + 32;
    v44 = v10 + 32;
    v26 = (16 * v15 - 32) >> 2;
    v42 = v26;
    if ( v26 )
    {
      if ( (v13 & 4) == 0 )
        goto LABEL_52;
      *(_DWORD *)v13 = -17891602;
      v42 = --v26;
      if ( v26 )
      {
        v13 = v10 + 36;
        v44 = v10 + 36;
LABEL_52:
        memset64((void *)v13, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
        if ( (v26 & 1) != 0 )
          *(_DWORD *)(v13 + 4 * v26 - 4) = -17891602;
      }
    }
    *(_BYTE *)(v10 + 10) |= 4u;
    goto LABEL_55;
  }
  RtlpDeCommitFreeBlock(a1, (_WORD *)v10, RegionSize);
LABEL_87:
  if ( v6 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v40;
}
