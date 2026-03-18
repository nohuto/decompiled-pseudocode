/*
 * XREFs of MiLogPageAccess @ 0x1400112C0
 * Callers:
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiAllocateAccessLog @ 0x140011560 (MiAllocateAccessLog.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  unsigned int v5; // r12d
  char v6; // al
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 result; // rax
  __int64 PteShadow; // rax
  __int64 v11; // r9
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  signed __int64 *v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  __int64 *v27; // rdx
  unsigned __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned __int64 *)&unk_1403897A8;
  v5 = 0;
  v6 = *(_BYTE *)(a1 + 192) & 7;
  v29 = 0x300000000LL;
  v7 = a2;
  if ( v6 != 2 )
    v4 = (unsigned __int64 *)(a1 + 240);
  v8 = *v4;
  if ( v8 && (unsigned __int64)(*(_QWORD *)(v8 + 32) + 8LL) <= *(_QWORD *)(v8 + 40)
    || (result = MiAllocateAccessLog(), (v8 = result) != 0) )
  {
    if ( (v7 & 1) != 0 )
    {
      v7 &= ~1uLL;
      v5 = 1;
    }
    PteShadow = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v7, *(_QWORD *)v7);
    v30 = PteShadow;
    v11 = MI_GET_PFN_FROM_PTE(&v30, a2, a3, a4);
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 )
    {
      result = (v7 << 16) | ((unsigned __int64)v5 << 9);
LABEL_32:
      **(_QWORD **)(v8 + 32) = result;
      *(_QWORD *)(v8 + 32) += 8LL;
      return result;
    }
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v11 + 16));
    v13 = *(_QWORD *)(v8 + 48);
    v14 = PrototypePteDirect;
    v28 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
    result = v28;
    v16 = v28 << 16;
    if ( *(_QWORD *)(v8 + 56) > 1uLL )
    {
      v17 = v14;
LABEL_24:
      v26 = *(_QWORD *)(v8 + 40);
      v27 = (__int64 *)(v26 + 8);
      if ( v26 + 8 > v13 )
        goto LABEL_29;
      while ( *v27 != v17 )
      {
        if ( (unsigned __int64)++v27 > v13 )
          goto LABEL_29;
      }
      if ( (unsigned __int64)v27 > v13 )
      {
LABEL_29:
        v27 = *(__int64 **)(v8 + 40);
        *(_QWORD *)(v8 + 40) = v26 - 8;
        *v27 = v17;
      }
      result = v16 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v5 << 9) | ((__int64)(*(_QWORD *)(v8 + 48) - (_QWORD)v27) >> 3) & 0x1FF;
      goto LABEL_32;
    }
    v18 = *(_QWORD *)v14;
    if ( (*(_BYTE *)(v14 + 34) & 2) == 0 || (*(_DWORD *)(v18 + 56) & 0x4000000) == 0 )
    {
      v19 = (signed __int64 *)(v18 + 64);
      v20 = ObFastReferenceObject(v18 + 64);
      if ( !v20 )
      {
        v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v18 + 72));
        v20 = ObFastReferenceObjectLocked(v18 + 64);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
        __writecr8(v21);
      }
      v17 = *(_QWORD *)(v20 + 24);
      _m_prefetchw(v19);
      v22 = *v19;
      if ( (v20 ^ (unsigned __int64)*v19) >= 0xF )
      {
LABEL_22:
        ObDereferenceObjectDeferDelete((PVOID)v20);
      }
      else
      {
        while ( 1 )
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64(v19, v22 + 1, v22);
          if ( v23 == v22 )
            break;
          if ( (v20 ^ (unsigned __int64)v22) >= 0xF )
            goto LABEL_22;
        }
      }
      v24 = MiStartingOffset(v14, v28, 0xFFFFFFFFLL);
      v25 = 32 * *(_DWORD *)(v18 + 56);
      v29 = v24 << *((_BYTE *)&v29 + 4 * ((*(_DWORD *)(v18 + 56) >> 5) & 1));
      LODWORD(v29) = ((unsigned __int16)v29 ^ v25) & 0x400 ^ v29;
      v13 -= 8LL;
      v16 = v29;
      goto LABEL_24;
    }
  }
  return result;
}
