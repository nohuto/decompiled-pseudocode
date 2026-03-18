/*
 * XREFs of MiRemoveLockedPageCharge @ 0x140030B80
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x14022C0B0 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x140235F34 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r10d
  unsigned int v11; // ebx
  unsigned __int64 CachedCommit; // r8
  char v13; // al
  __int64 v14; // rdi
  struct _KPRCB *v15; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v17; // eax
  signed __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rtt

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( !v3 )
    goto LABEL_3;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
      return 1LL;
  }
  else if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
  {
    return 1LL;
  }
LABEL_3:
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (v5 >> 62) & 1;
  if ( (v6 & 0x10000000000000LL) == 0 )
  {
    v8 = 1LL;
    v9 = v5 & 0x3FFFFFFFFFFFFFFFLL;
    v10 = 0;
    if ( !v4 )
    {
      v11 = 1;
LABEL_8:
      CachedCommit = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( (CachedCommit > 0xFFFFF6BFFFFFFF78uLL || CachedCommit < 0xFFFFF68000000000uLL)
        && (v13 = *(_BYTE *)(a1 + 35), (v13 & 0x20) != 0) )
      {
        *(_BYTE *)(a1 + 35) = v13 & 0xDF;
      }
      else
      {
        if ( (v6 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
          || CachedCommit <= 0xFFFFF6BFFFFFFF78uLL
          && CachedCommit >= 0xFFFFF68000000000uLL
          && (*(_BYTE *)(a1 + 35) & 0x20) != 0
          || v11 == 1 && (_DWORD)v7 )
        {
          v10 = 1;
        }
        v14 = *(_QWORD *)(qword_140388AF0 + 8 * ((v6 >> 40) & 0x3FF));
        if ( v10 == 1 )
        {
          v19 = *(_QWORD *)(v14 + 5120);
          if ( v19 )
          {
            while ( 1 )
            {
              v25 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 5120), v19 - 1, v19);
              if ( v25 == v19 )
                break;
              if ( !v19 )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            if ( (ULONG_PTR *)v14 == &MiSystemPartition
              && (CurrentPrcb = KeGetCurrentPrcb(),
                  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                  CachedCommit = CurrentPrcb->CachedCommit,
                  CachedCommit + 1 <= 0x100) )
            {
              while ( 1 )
              {
                v21 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                        CachedCommit + 1,
                        CachedCommit);
                if ( v21 == CachedCommit )
                  break;
                CachedCommit = v21;
                if ( v21 + 1 > 0x100 )
                  goto LABEL_43;
              }
            }
            else
            {
LABEL_43:
              v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 6320), 0xFFFFFFFFFFFFFFFFuLL);
              v23 = *(_QWORD *)(v14 + 5088);
              if ( v22 >= v23 && v22 - 1 < v23 || (v24 = *(_QWORD *)(v14 + 5080), v22 >= v24) && v22 - 1 < v24 )
                MiSyncCommitSignals(v14, 0LL, CachedCommit, 1LL);
            }
          }
        }
        if ( (ULONG_PTR *)v14 == &MiSystemPartition )
        {
          v15 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v15->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v17 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v15->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v3 = (_DWORD)CachedResidentAvailable == v17;
                LODWORD(CachedResidentAvailable) = v17;
                if ( v3 )
                  return v11;
              }
              while ( v17 != -1 && (unsigned __int64)(v17 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v8 = (int)CachedResidentAvailable - 192 + 1LL;
            }
          }
          _InterlockedExchangeAdd64(&qword_14038B840, v8);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 6016), 1uLL);
        }
      }
      return v11;
    }
    if ( v4 == 1 )
    {
      if ( v9 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
LABEL_7:
        v11 = 0;
        goto LABEL_8;
      }
    }
    else if ( v4 == 2 && v9 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
    {
      goto LABEL_7;
    }
  }
  return 0LL;
}
