/*
 * XREFs of MiUnlockMdlWritePages @ 0x14002F4C0
 * Callers:
 *     MiUnlockFlushMdl @ 0x1400B5F10 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14025B3B0 (MiFlushComplete.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *i; // rsi
  ULONG_PTR v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdi
  signed __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 CachedCommit; // r9
  __int64 v10; // rcx
  struct _KPRCB *v11; // r8
  unsigned __int64 v12; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rtt
  int v20; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    for ( i = a1; (unsigned __int64)i < a2; ++i )
    {
      v4 = 48LL * *i - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v6 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL));
      v7 = *(_QWORD *)(v6 + 6208);
      if ( v7 )
      {
        while ( 1 )
        {
          v19 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 6208), v7 - 1, v7);
          if ( v19 == v7 )
            break;
          if ( !v7 )
            goto LABEL_5;
        }
      }
      else
      {
LABEL_5:
        if ( (ULONG_PTR *)v6 == &MiSystemPartition
          && (CurrentPrcb = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
              CachedCommit = CurrentPrcb->CachedCommit,
              (unsigned __int64)(CachedCommit + 1) <= 0x100) )
        {
          while ( 1 )
          {
            v10 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                    CachedCommit + 1,
                    CachedCommit);
            if ( v10 == CachedCommit )
              break;
            CachedCommit = v10;
            if ( (unsigned __int64)(v10 + 1) > 0x100 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7400), 0xFFFFFFFFFFFFFFFFuLL);
          v17 = *(_QWORD *)(v6 + 6176);
          if ( v16 >= v17 && v16 - 1 < v17 || (v18 = *(_QWORD *)(v6 + 6168), v16 >= v18) && v16 - 1 < v18 )
            MiSyncCommitSignals(v6, 0LL);
        }
      }
      if ( (ULONG_PTR *)v6 == &MiSystemPartition )
      {
        v11 = KeGetCurrentPrcb();
        v12 = 1LL;
        CachedResidentAvailable = (int)v11->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v15 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v11->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v14 = (_DWORD)CachedResidentAvailable == v15;
              LODWORD(CachedResidentAvailable) = v15;
              if ( v14 )
                goto LABEL_12;
            }
            while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v11->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v12 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_1403CFB00, v12);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7104), 1uLL);
      }
LABEL_12:
      MiWriteCompletePfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
}
