/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x14020DC20
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140723688 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     MiReferencePagePartition @ 0x140213AA8 (MiReferencePagePartition.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r12
  unsigned int v5; // r14d
  int v6; // r15d
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rsi
  unsigned __int8 v11; // al
  volatile LONG *v12; // rbp
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // al
  char v16; // al
  int ContiguousPages; // r15d
  unsigned __int64 v18; // rax
  int v19; // [rsp+50h] [rbp-58h]
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v23; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v24; // [rsp+C0h] [rbp+18h]
  int v25; // [rsp+C8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 3221225474LL;
  v3 = *a1 >> 12;
  v4 = *a2 >> 12;
  v20 = v4 + v3;
  if ( v3 >= v4 + v3 )
    return 3221225711LL;
  v5 = 0;
  v25 = 0;
  v6 = ~(*(_DWORD *)a1 << 28) & 0x10000000 | 0x2C100000;
  v7 = 0;
  v19 = v6;
  v8 = v4 + v3;
  v9 = 48 * v3 - 0x58000000000LL;
  v10 = (volatile signed __int64 *)(v9 + 24);
  while ( !MiIsPfnInline(v3) )
  {
    v5 = -1073741584;
LABEL_35:
    ++v3;
    v9 += 48LL;
    v10 += 6;
    if ( v3 >= v8 )
      goto LABEL_40;
  }
  v11 = MiLockPageInline(v9);
  v23 = v11;
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000000LL) != 0 )
  {
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    v5 = -1073741584;
    goto LABEL_35;
  }
  v12 = (volatile LONG *)MiReferencePagePartition(v9);
  if ( !v12 )
  {
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v23);
    v8 = v20;
    v5 = -1073741558;
    goto LABEL_35;
  }
  _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v23);
  if ( (unsigned int)MiAcquireNonPagedResources((__int64)v12, 1LL) )
  {
    v13 = MiLockPageInline(v9);
    v14 = v13;
    if ( *(volatile LONG **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)) != v12 )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      MiReleaseNonPagedResources((__int64)v12, 1uLL);
      MiDereferencePartition(v12);
      --v3;
      v9 -= 48LL;
      v10 -= 6;
LABEL_34:
      v8 = v20;
      goto LABEL_35;
    }
    if ( (v6 & 0x10000000) != 0 )
    {
      v15 = *(_BYTE *)(v9 + 35);
      if ( v15 < 0x80u )
        *(_BYTE *)(v9 + 35) = v15 | 0x80;
    }
    v16 = *(_BYTE *)(v9 + 35);
    if ( (v16 & 0x40) != 0 )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v14);
      MiReleaseNonPagedResources((__int64)v12, 1uLL);
      MiDereferencePartition(v12);
      v5 = 259;
      goto LABEL_34;
    }
    *(_BYTE *)(v9 + 35) = v16 | 0x40;
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v14);
    ContiguousPages = MiFindContiguousPages((__int64)v12, v3, v3, 0LL, 1LL, 1u, 0x80000000, 0x80000000, v6, v21);
    v5 = 0;
    LOBYTE(v18) = MiLockPageInline(v9);
    v24 = v18;
    if ( ContiguousPages < 0 )
    {
      if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
      {
        if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL || (*(_BYTE *)(v9 + 34) & 7) != 5 )
        {
          byte_14036CA3C = 1;
          v5 = 259;
          v25 = 1;
        }
        ContiguousPages = 0;
      }
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      v18 = (unsigned __int8)v18;
LABEL_30:
      __writecr8(v18);
    }
    else
    {
      if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
      {
        *(_WORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) &= 0xFFFFFFF000000000uLL;
        MiInsertPageInList(v9, 0x20u);
        _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
        v18 = v24;
        goto LABEL_30;
      }
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v18);
      MiFreeContiguousPages((__int64)v12, v3, 1uLL);
    }
    MiDereferencePartition(v12);
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v5 = ContiguousPages;
      v7 = ContiguousPages;
      goto LABEL_39;
    }
    v6 = v19;
    goto LABEL_34;
  }
  v5 = -1073741523;
  v7 = -1073741523;
  MiDereferencePartition(v12);
LABEL_39:
  v8 = v20;
LABEL_40:
  if ( v25 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *a2 = (v3 + v4 - v8) << 12;
  if ( v4 == 1 )
    return v5;
  return v7;
}
