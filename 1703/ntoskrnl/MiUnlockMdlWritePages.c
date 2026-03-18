/*
 * XREFs of MiUnlockMdlWritePages @ 0x1400CB2A0
 * Callers:
 *     MiUnlockFlushMdl @ 0x14001505C (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rsi
  signed __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 CachedCommit; // r9
  __int64 v11; // rcx
  struct _KPRCB *v12; // r8
  unsigned __int64 v13; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  BOOL v20; // ebx
  signed __int64 v21; // rtt
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v20 = *a3 < 0;
  while ( (unsigned __int64)v4 < a2 )
  {
    v5 = 48LL * *v4 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
    v8 = *(_QWORD *)(v7 + 4992);
    if ( v8 )
    {
      while ( 1 )
      {
        v21 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 4992), v8 - 1, v8);
        if ( v21 == v8 )
          break;
        if ( !v8 )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( (ULONG_PTR *)v7 == &MiSystemPartition
        && (CurrentPrcb = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
            CachedCommit = CurrentPrcb->CachedCommit,
            (unsigned __int64)(CachedCommit + 1) <= 0x100) )
      {
        while ( 1 )
        {
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                  CachedCommit + 1,
                  CachedCommit);
          if ( v11 == CachedCommit )
            break;
          CachedCommit = v11;
          if ( (unsigned __int64)(v11 + 1) > 0x100 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 6128), 0xFFFFFFFFFFFFFFFFuLL);
        v18 = *(_QWORD *)(v7 + 4960);
        if ( v17 >= v18 && v17 - 1 < v18 || (v19 = *(_QWORD *)(v7 + 4952), v17 >= v19) && v17 - 1 < v19 )
          MiSyncCommitSignals(v7, 0LL);
      }
    }
    if ( (ULONG_PTR *)v7 == &MiSystemPartition )
    {
      v12 = KeGetCurrentPrcb();
      v13 = 1LL;
      CachedResidentAvailable = (int)v12->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v16 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v12->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v15 = (_DWORD)CachedResidentAvailable == v16;
            LODWORD(CachedResidentAvailable) = v16;
            if ( v15 )
              goto LABEL_11;
          }
          while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v13 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403818C0, v13);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 5824), 1uLL);
    }
LABEL_11:
    MiWriteCompletePfn(v5, v20);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    ++v4;
  }
}
