/*
 * XREFs of MiLockPageTablePage @ 0x1400211A0
 * Callers:
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbx
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  ULONG_PTR *v8; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  unsigned __int32 v11; // eax
  unsigned int i; // r14d
  bool v13; // zf
  unsigned __int8 v14; // r9
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  int v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR *v21; // [rsp+78h] [rbp+20h]

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
  v6 = 1;
  while ( 1 )
  {
LABEL_5:
    if ( a2 == 1 )
      v3 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_8;
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    if ( a2 != 1 || v3 == 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v17 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v17 < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
    if ( a2 == 2 )
    {
      v7 = 3LL;
    }
    else
    {
      v7 = 1LL;
      if ( !a2 )
        v7 = 4LL;
    }
    v8 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v21 = v8;
    if ( v8 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( v7 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v7,
                  CachedResidentAvailable);
          v13 = (_DWORD)CachedResidentAvailable == v11;
          CachedResidentAvailable = v11;
          if ( v13 )
            goto LABEL_14;
        }
        while ( v7 <= v11 );
      }
    }
    result = MiChargePartitionResidentAvailable(v8, v7, 512LL, v8);
    if ( !(_DWORD)result )
      return result;
LABEL_14:
    for ( i = 0; ; ++i )
    {
      v13 = i == v7;
      if ( i >= v7 )
      {
LABEL_29:
        if ( !v13 )
        {
          v18 = v7 - i;
          if ( v21 == &MiSystemPartition )
            MiReturnResidentAvailable(v18, CachedResidentAvailable);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 888, v18);
        }
        return v6;
      }
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      if ( a2 == 1 && v3 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v21 == &MiSystemPartition )
          MiReturnResidentAvailable(v7 - i, CachedResidentAvailable);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 888, v7 - i);
        goto LABEL_5;
      }
      CachedResidentAvailable = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( CachedResidentAvailable >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_21;
      }
      else if ( CachedResidentAvailable >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v6 = 0;
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = i == v7;
        goto LABEL_29;
      }
      *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_21:
      if ( CachedResidentAvailable >= 0x10000 )
        goto LABEL_28;
      v14 = *(_BYTE *)(v3 + 34);
      v15 = 0LL;
      if ( (v14 & 0x10) == 0 )
      {
        LOBYTE(CachedResidentAvailable) = !_bittest64((const signed __int64 *)(v3 + 16), 0xAu);
        if ( ((unsigned __int8)CachedResidentAvailable & (unsigned __int8)~(v14 >> 3) & 1) != 0 )
        {
          v15 = MiCapturePageFileInfoInline(v3 + 16, 1LL);
          v14 = *(_BYTE *)(v3 + 34);
        }
        *(_BYTE *)(v3 + 34) = v14 | 0x10;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 )
        MiReleasePageFileInfo(v21, v15, 1LL);
      v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
  }
  if ( v17 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
