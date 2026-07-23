/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x140253170
 * Callers:
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407CAD9C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     MiReferencePagePartition @ 0x14025B1B4 (MiReferencePagePartition.c)
 *     MiMarkFileOnlyPfnBad @ 0x14025E0C4 (MiMarkFileOnlyPfnBad.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rbx
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int8 v11; // al
  ULONG_PTR *v12; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r9
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8
  char v17; // al
  char v18; // al
  int ContiguousPages; // r12d
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // ebx
  unsigned __int64 v23; // [rsp+60h] [rbp-58h]
  __int64 v24[10]; // [rsp+68h] [rbp-50h] BYREF
  int v25; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v27; // [rsp+D8h] [rbp+20h]

  if ( (*a1 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( !MmPhysicalMemoryBlock )
    return 3221225474LL;
  v3 = *(_QWORD *)a1 >> 12;
  v4 = *(_QWORD *)a2 >> 12;
  v5 = v3 + v4;
  v27 = v3 + v4;
  if ( v3 >= v3 + v4 )
    return 3221225711LL;
  v25 = 0;
  v6 = (((*a1 & 1) == 0) << 28) + 739246080;
  v7 = 0;
  v8 = 48 * v3 - 0x58000000000LL;
  v9 = (volatile signed __int64 *)(v8 + 24);
  while ( 1 )
  {
    if ( !MiIsPfnInline(v3) )
    {
      v7 = -1073741584;
      goto LABEL_40;
    }
    if ( (v10 & *(_QWORD *)(v8 + 40)) != 0 )
    {
      v7 = MiMarkFileOnlyPfnBad(v8);
      goto LABEL_40;
    }
    v11 = MiLockPageInline(v8);
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000000LL) != 0 )
    {
      _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
      --v3;
      v8 -= 48LL;
      v9 -= 6;
      goto LABEL_40;
    }
    v12 = (ULONG_PTR *)MiReferencePagePartition(v8);
    v13 = (__int64)v12;
    _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v14);
    if ( !v12 )
    {
      v7 = -1073741558;
      goto LABEL_40;
    }
    if ( !(unsigned int)MiAcquireNonPagedResources(v12, 2uLL) )
      break;
    v15 = MiLockPageInline(v8);
    v16 = v15;
    if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) != v13 )
    {
      _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      MiReleaseNonPagedResources(v13, 2uLL);
      PsDereferencePartition(*(_QWORD *)(v13 + 168));
      --v3;
      v8 -= 48LL;
      v9 -= 6;
      goto LABEL_40;
    }
    if ( (v6 & 0x10000000) != 0 )
    {
      v17 = *(_BYTE *)(v8 + 35);
      if ( v17 >= 0 )
        *(_BYTE *)(v8 + 35) = v17 | 0x80;
    }
    v18 = *(_BYTE *)(v8 + 35);
    if ( (v18 & 0x40) != 0 )
    {
      _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v16);
      MiReleaseNonPagedResources(v13, 2uLL);
      PsDereferencePartition(*(_QWORD *)(v13 + 168));
      v7 = 259;
      goto LABEL_40;
    }
    *(_BYTE *)(v8 + 35) = v18 | 0x40;
    _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v16);
    ContiguousPages = MiFindContiguousPages(v13, v3, v3, 0LL, 1uLL, 1u, 0x80000000, 0x80000000, v6, 0LL, v24);
    v7 = 0;
    LOBYTE(v20) = MiLockPageInline(v8);
    v21 = *(_QWORD *)(v8 + 40);
    if ( ContiguousPages < 0 )
    {
      if ( v13 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
        goto LABEL_34;
      if ( (*(_BYTE *)(v8 + 35) & 0x40) != 0 )
      {
        if ( (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL || (*(_BYTE *)(v8 + 34) & 7) != 5 )
        {
          byte_1403CBED8 = 1;
          v7 = 259;
          v25 = 1;
        }
LABEL_34:
        ContiguousPages = 0;
      }
      v20 = (unsigned __int8)v20;
      goto LABEL_36;
    }
    v23 = (unsigned __int8)v20;
    if ( (*(_BYTE *)(v8 + 35) & 0x40) == 0 )
    {
      _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v20);
      MiFreeContiguousPages(v13, v3, 1uLL);
      goto LABEL_37;
    }
    *(_WORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 40) = v21 & 0xFFFFFFF000000000uLL;
    MiInsertPageInList(v8, 0x20u);
    v20 = v23;
LABEL_36:
    _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v20);
    MiReleaseNonPagedResources(v13, 1uLL);
LABEL_37:
    PsDereferencePartition(*(_QWORD *)(v13 + 168));
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v7 = ContiguousPages;
      v22 = ContiguousPages;
      v5 = v27;
      goto LABEL_44;
    }
    v5 = v27;
LABEL_40:
    ++v3;
    v8 += 48LL;
    v9 += 6;
    if ( v3 >= v5 )
    {
      v22 = 0;
      goto LABEL_44;
    }
  }
  v7 = -1073741523;
  v22 = -1073741523;
  PsDereferencePartition(*(_QWORD *)(v13 + 168));
LABEL_44:
  if ( v25 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *(_QWORD *)a2 = (v3 + v4 - v5) << 12;
  if ( v4 == 1 )
    return v7;
  return v22;
}
