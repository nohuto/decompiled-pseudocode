/*
 * XREFs of MmReadProcessPageTables @ 0x14026153C
 * Callers:
 *     KiMonitorCacheErrata @ 0x140249BD0 (KiMonitorCacheErrata.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1402BA640 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MmReadProcessPageTables(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned int v8; // r14d
  unsigned __int64 v9; // r15
  volatile __int64 *v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx

  ValidPte = MiMakeValidPte(0LL, 0LL, 2684354564LL, a4);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = ValidPte;
  __wbinvd();
  result = ExTryAcquireSpinLockSharedAtDpcLevel(&dword_1403CE000);
  v8 = 0;
  if ( (_DWORD)result )
  {
    v9 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v10 = (volatile __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = _InterlockedExchange64(v10, ZeroPte);
    KeFlushSingleCurrentTb(v9, 0);
    v12 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      while ( 1 )
      {
        v13 = v12[2 * v8 + 2];
        v14 = 48 * v13 - 0x58000000000LL;
        v15 = 48 * (v13 + v12[2 * v8 + 3]) - 0x58000000000LL;
        if ( v14 < v15 )
          break;
LABEL_16:
        v12 = MmPhysicalMemoryBlock;
        if ( ++v8 >= *(_DWORD *)MmPhysicalMemoryBlock )
          goto LABEL_17;
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
        {
          v16 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
          if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v17 = (__int64)(v16 << 25) >> 16;
            if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v18 = *(_QWORD *)(v14 + 40);
              if ( ((v18 >> 54) & 7) != 1
                && (v18 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && (*(_BYTE *)(v14 + 34) & 0xC0) == 0x40 )
              {
                v6 ^= (v6 ^ (((__int64)(v14 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
                _InterlockedExchange64(v10, v6);
                KeFlushSingleCurrentTb(v9, 0);
                v19 = v9;
                v20 = 64LL;
                do
                {
                  v19 += 64LL;
                  --v20;
                }
                while ( v20 );
                v21 = KiCacheErrataMonitor;
                v22 = CurrentPrcb->Number + 16LL;
                CurrentPrcb->ClockKeepAlive = 1;
                _InterlockedExchange64((volatile __int64 *)(v21 + 16 * v22), -1LL);
                if ( (*(_QWORD *)(v21 + 16 * (*(unsigned int *)(a1 + 36) + 16LL)) & CurrentPrcb->GroupSetMember) != 0 )
                  break;
              }
            }
          }
        }
        v14 += 48LL;
        if ( v14 >= v15 )
          goto LABEL_16;
      }
    }
LABEL_17:
    _InterlockedExchange64(v10, v11);
    KeFlushSingleCurrentTb(v9, 0);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CE000);
    return 1LL;
  }
  return result;
}
