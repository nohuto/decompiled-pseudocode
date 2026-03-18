/*
 * XREFs of MiLockPageTablePage @ 0x1400B50F0
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiLockPageTableRange @ 0x140035428 (MiLockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // r15
  ULONG_PTR *v6; // r10
  unsigned int v7; // r12d
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 CurrentPrcb; // r8
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned __int32 v14; // eax
  unsigned int i; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  int v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h]

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
  v8 = 0xFFFFFA8000000000uLL;
  while ( 1 )
  {
LABEL_5:
    if ( a2 == 1 )
      v3 = v8 + 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_8;
    v21 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v21);
        while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      v8 = 0xFFFFFA8000000000uLL;
      v6 = &MiSystemPartition;
    }
    if ( a2 != 1 || v3 == v8 + 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
    if ( a2 == 2 )
    {
      v9 = 3LL;
    }
    else
    {
      v9 = 1LL;
      if ( !a2 )
        v9 = 4LL;
    }
    v10 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v23 = v10;
    if ( (ULONG_PTR *)v10 == v6 )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v12 = *(unsigned int *)(CurrentPrcb + 24764);
      if ( v9 <= v12 )
      {
        do
        {
          if ( (_DWORD)v12 == -1 )
            break;
          v14 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24764), v12 - v9, v12);
          v13 = (_DWORD)v12 == v14;
          v12 = v14;
          if ( v13 )
            goto LABEL_14;
        }
        while ( v9 <= v14 );
      }
    }
    result = MiChargePartitionResidentAvailable(v10, v9, 512LL);
    if ( !(_DWORD)result )
      return result;
LABEL_14:
    for ( i = 0; ; ++i )
    {
      if ( i >= v9 )
      {
LABEL_29:
        if ( i != v9 )
        {
          v19 = v9 - i;
          if ( (ULONG_PTR *)v10 == &MiSystemPartition )
            MiReturnResidentAvailable(v19, v12, CurrentPrcb);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 5824), v19);
        }
        return v7;
      }
      v22 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v22);
          while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
        v10 = v23;
      }
      if ( a2 == 1 )
      {
        v8 = 0xFFFFFA8000000000uLL;
        if ( v3 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = &MiSystemPartition;
          v20 = v9 - i;
          if ( (ULONG_PTR *)v10 == &MiSystemPartition )
            MiReturnResidentAvailable(v20, v12, 0x7FFFFFFFFFFFFFFFLL);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 5824), v20);
          goto LABEL_5;
        }
      }
      v16 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v12 = v16 >= 0x10000;
      CurrentPrcb = 0x3FFFFFFFFFFEFDFFLL;
      if ( i )
      {
        if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_21;
      }
      else if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v7 = 0;
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_29;
      }
      *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_21:
      if ( (_DWORD)v12 == 1 )
        goto LABEL_28;
      CurrentPrcb = *(unsigned __int8 *)(v3 + 34);
      v17 = 0LL;
      if ( (CurrentPrcb & 0x10) == 0 )
      {
        LOBYTE(v12) = (*(_QWORD *)(v3 + 16) & 0x400LL) == 0;
        LOBYTE(CurrentPrcb) = v12 & ~((unsigned __int8)CurrentPrcb >> 3);
        if ( (CurrentPrcb & 1) != 0 )
          v17 = MiCapturePageFileInfoInline((_QWORD *)(v3 + 16), 1, 0);
        *(_BYTE *)(v3 + 34) |= 0x10u;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo((struct _KEVENT *)v10, v17, 1);
      v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
  }
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
