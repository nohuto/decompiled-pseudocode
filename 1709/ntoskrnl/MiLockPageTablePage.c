/*
 * XREFs of MiLockPageTablePage @ 0x1400BE2E0
 * Callers:
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x140229E4C (MiLockPageTableRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v5; // r13
  ULONG_PTR *v6; // r11
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // r14
  ULONG_PTR *v11; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  unsigned __int32 v14; // eax
  unsigned int i; // r15d
  bool v16; // zf
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  int v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR *v23; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v3 = a1;
  if ( a2 == 1 )
  {
    v5 = a1;
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      return 1LL;
  }
  else
  {
    v5 = 0LL;
    if ( !a2 )
      v5 = a1;
  }
  v6 = &MiSystemPartition;
  v7 = 1;
  while ( 1 )
  {
LABEL_5:
    if ( a2 == 1 )
      v3 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      break;
    v21 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      v6 = &MiSystemPartition;
    }
    if ( a2 != 1 || v3 == 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      v8 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v8 >= 0x10000 )
      {
        if ( v8 < 0x3FFFFFFFFFFEFDFFLL )
        {
          v2 = 1;
          *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v2;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a2 == 2 )
  {
    v10 = 3LL;
  }
  else
  {
    v10 = 1LL;
    if ( !a2 )
      v10 = 4LL;
  }
  v11 = *(ULONG_PTR **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
  v23 = v11;
  if ( v11 == v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( v10 <= CachedResidentAvailable )
    {
      do
      {
        if ( (_DWORD)CachedResidentAvailable == -1 )
          break;
        v14 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable - v10,
                CachedResidentAvailable);
        v16 = (_DWORD)CachedResidentAvailable == v14;
        LODWORD(CachedResidentAvailable) = v14;
        if ( v16 )
          goto LABEL_21;
      }
      while ( v10 <= v14 );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v11) )
    return 0LL;
LABEL_21:
  for ( i = 0; ; ++i )
  {
    v16 = i == v10;
    if ( i >= v10 )
      break;
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    if ( a2 == 1 && v3 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = &MiSystemPartition;
      if ( v23 == &MiSystemPartition )
        MiReturnResidentAvailable(v10 - i);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 752, v10 - i);
      goto LABEL_5;
    }
    v17 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      if ( v17 >= 0x3FFFFFFFFFFEFDFFLL )
        goto LABEL_28;
    }
    else if ( v17 >= 0x3FFFFFFFFFFEFDFFLL )
    {
      v7 = 0;
LABEL_35:
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = i == v10;
      break;
    }
    *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_28:
    if ( v17 >= 0x10000 )
      goto LABEL_35;
    v18 = *(_BYTE *)(v3 + 34);
    v19 = 0LL;
    if ( (v18 & 0x10) == 0 )
    {
      if ( (!_bittest64((const signed __int64 *)(v3 + 16), 0xAu) & (unsigned __int8)~(v18 >> 3)) != 0 )
        v19 = MiCapturePageFileInfoInline(v3 + 16, 1LL);
      *(_BYTE *)(v3 + 34) |= 0x10u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
      MiReleasePageFileInfo(v23, v19, 1LL);
    v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  if ( !v16 )
  {
    v20 = v10 - i;
    if ( v23 == &MiSystemPartition )
      MiReturnResidentAvailable(v20);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 752, v20);
  }
  return v7;
}
