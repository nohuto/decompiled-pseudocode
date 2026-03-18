/*
 * XREFs of MiUnlockMdlWritePages @ 0x1400A50D0
 * Callers:
 *     MiUnlockFlushMdl @ 0x1400A5008 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14021FAB0 (MiFlushComplete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, _DWORD *a3, __int64 CachedCommit)
{
  _QWORD *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // r8
  __int64 v10; // rdi
  signed __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rtt
  int v21; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v5 = a1;
    v6 = *a3 >> 31;
    do
    {
      v7 = 48LL * *v5 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v9 = 1LL;
      v10 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
      v11 = *(_QWORD *)(v10 + 5120);
      if ( v11 )
      {
        while ( 1 )
        {
          v20 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 5120), v11 - 1, v11);
          if ( v20 == v11 )
            break;
          if ( !v11 )
            goto LABEL_5;
        }
        v9 = 0LL;
      }
      else
      {
LABEL_5:
        if ( (ULONG_PTR *)v10 == &MiSystemPartition
          && (CurrentPrcb = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
              CachedCommit = CurrentPrcb->CachedCommit,
              (unsigned __int64)(CachedCommit + 1) <= 0x100) )
        {
          while ( 1 )
          {
            v13 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                    CachedCommit + 1,
                    CachedCommit);
            if ( v13 == CachedCommit )
              break;
            CachedCommit = v13;
            if ( (unsigned __int64)(v13 + 1) > 0x100 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 6320), 0xFFFFFFFFFFFFFFFFuLL);
          v18 = *(_QWORD *)(v10 + 5088);
          if ( v17 >= v18 && v17 - 1 < v18 || (v19 = *(_QWORD *)(v10 + 5080), v17 >= v19) && v17 - 1 < v19 )
            MiSyncCommitSignals(v10, 0LL, 1LL, CachedCommit);
        }
      }
      if ( (ULONG_PTR *)v10 == &MiSystemPartition )
      {
        v9 = (__int64)KeGetCurrentPrcb();
        CachedCommit = 1LL;
        v14 = *(int *)(v9 + 24604);
        if ( (_DWORD)v14 != -1 )
        {
          if ( (unsigned __int64)(v14 + 1) <= 0x100 )
          {
            do
            {
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24604), v14 + 1, v14);
              v15 = (_DWORD)v14 == v16;
              LODWORD(v14) = v16;
              if ( v15 )
                goto LABEL_12;
            }
            while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
          }
          if ( (int)v14 > 192
            && (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24604), 192, v14) )
          {
            CachedCommit = (int)v14 - 192 + 1LL;
          }
        }
        CachedCommit = _InterlockedExchangeAdd64(&qword_14038B840, CachedCommit);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 6016), 1uLL);
      }
LABEL_12:
      MiWriteCompletePfn(v7, v6, v9, CachedCommit);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v5;
    }
    while ( (unsigned __int64)v5 < a2 );
  }
}
