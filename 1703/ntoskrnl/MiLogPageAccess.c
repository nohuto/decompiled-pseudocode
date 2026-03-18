/*
 * XREFs of MiLogPageAccess @ 0x1400D6220
 * Callers:
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 * Callees:
 *     MiAllocateAccessLog @ 0x1400067F0 (MiAllocateAccessLog.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiLogPageAccess(__int64 a1, __int64 a2)
{
  LONG *v2; // rsi
  unsigned int v3; // r12d
  char v4; // al
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi
  signed __int64 *v21; // r14
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  unsigned __int64 v26; // rax
  unsigned __int16 v27; // dx
  __int64 v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v2 = &dword_14036D4C0;
  v3 = 0;
  v4 = *(_BYTE *)(a1 + 192) & 7;
  v31 = 0x300000000LL;
  if ( v4 != 2 )
    v2 = (LONG *)(a1 + 200);
  v6 = *((_QWORD *)v2 + 5);
  if ( v6 && (unsigned __int64)(*(_QWORD *)(v6 + 32) + 8LL) <= *(_QWORD *)(v6 + 40)
    || (result = (unsigned __int64)MiAllocateAccessLog(a1), (v6 = result) != 0) )
  {
    if ( (a2 & 1) != 0 )
    {
      a2 &= ~1uLL;
      v3 = 1;
    }
    v32 = MI_READ_PTE_LOCK_FREE(a2);
    v13 = MI_GET_PFN_FROM_PTE(&v32, v8, v9, v10);
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
    {
      result = (a2 << 16) | ((unsigned __int64)v3 << 9);
LABEL_29:
      **(_QWORD **)(v6 + 32) = result;
      *(_QWORD *)(v6 + 32) += 8LL;
      return result;
    }
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v13 + 16), v11, v12, v13);
    v15 = *(_QWORD *)(v6 + 48);
    v16 = PrototypePteDirect;
    v30 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
    result = v30;
    v18 = v30 << 16;
    if ( *(_QWORD *)(v6 + 56) > 1uLL )
    {
      v19 = v16;
LABEL_21:
      v28 = *(_QWORD *)(v6 + 40);
      v29 = (__int64 *)(v28 + 8);
      if ( v28 + 8 > v15 )
        goto LABEL_26;
      while ( *v29 != v19 )
      {
        if ( (unsigned __int64)++v29 > v15 )
          goto LABEL_26;
      }
      if ( (unsigned __int64)v29 > v15 )
      {
LABEL_26:
        v29 = *(__int64 **)(v6 + 40);
        *(_QWORD *)(v6 + 40) = v28 - 8;
        *v29 = v19;
      }
      result = v18 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v3 << 9) | ((__int64)(*(_QWORD *)(v6 + 48) - (_QWORD)v29) >> 3) & 0x1FF;
      goto LABEL_29;
    }
    v20 = *(_QWORD *)v16;
    if ( (*(_BYTE *)(v16 + 34) & 2) == 0 || (*(_DWORD *)(v20 + 56) & 0x4000000) == 0 )
    {
      v21 = (signed __int64 *)(v20 + 64);
      v22 = ObFastReferenceObject(v20 + 64);
      if ( !v22 )
      {
        v23 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v20 + 72));
        v22 = ObFastReferenceObjectLocked((_QWORD *)(v20 + 64));
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v20 + 72));
        __writecr8(v23);
      }
      v19 = *(_QWORD *)(v22 + 24);
      _m_prefetchw(v21);
      v24 = *v21;
      if ( (v22 ^ *v21) >= 0xF )
      {
LABEL_19:
        ObDereferenceObjectDeferDelete((PVOID)v22);
      }
      else
      {
        while ( 1 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64(v21, v24 + 1, v24);
          if ( v25 == v24 )
            break;
          if ( (v22 ^ v24) >= 0xF )
            goto LABEL_19;
        }
      }
      v26 = MiStartingOffset((__int64 *)v16, v30, 0xFFFFFFFF);
      v27 = 32 * *(_DWORD *)(v20 + 56);
      v31 = v26 << *((_BYTE *)&v31 + 4 * ((*(_DWORD *)(v20 + 56) >> 5) & 1));
      LODWORD(v31) = ((unsigned __int16)v31 ^ v27) & 0x400 ^ v31;
      v15 -= 8LL;
      v18 = v31;
      goto LABEL_21;
    }
  }
  return result;
}
