/*
 * XREFs of MiRemoveLockedPageCharge @ 0x140031840
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140267688 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  int v10; // ecx
  unsigned int v11; // esi
  unsigned __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdi
  struct _KPRCB *v15; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v17; // eax
  signed __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rtt

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( !v3 )
  {
LABEL_3:
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (v5 >> 52) & 1;
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( !v7 )
      {
LABEL_5:
        v8 = 1LL;
        v9 = v6 & 0x3FFFFFFFFFFFFFFFLL;
        v10 = 0;
        if ( !v4 )
        {
          v11 = 1;
LABEL_9:
          v12 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
          if ( (v12 > 0xFFFFF6BFFFFFFF78uLL || v12 < 0xFFFFF68000000000uLL)
            && (v13 = *(_BYTE *)(a1 + 35), (v13 & 0x20) != 0) )
          {
            *(_BYTE *)(a1 + 35) = v13 & 0xDF;
          }
          else
          {
            if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
              || v12 <= 0xFFFFF6BFFFFFFF78uLL && v12 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a1 + 35) & 0x20) != 0
              || v11 == 1 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
            {
              v10 = 1;
            }
            v14 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v5 >> 40) & 0x3FF));
            if ( v10 == 1 )
            {
              v19 = *(_QWORD *)(v14 + 6208);
              if ( v19 )
              {
                while ( 1 )
                {
                  v27 = v19;
                  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 6208), v19 - 1, v19);
                  if ( v27 == v19 )
                    break;
                  if ( !v19 )
                    goto LABEL_27;
                }
              }
              else
              {
LABEL_27:
                if ( (ULONG_PTR *)v14 == &MiSystemPartition
                  && (CurrentPrcb = KeGetCurrentPrcb(),
                      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                      CachedCommit = CurrentPrcb->CachedCommit,
                      (unsigned __int64)(CachedCommit + 1) <= 0x100) )
                {
                  while ( 1 )
                  {
                    v22 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                            CachedCommit + 1,
                            CachedCommit);
                    if ( v22 == CachedCommit )
                      break;
                    CachedCommit = v22;
                    if ( (unsigned __int64)(v22 + 1) > 0x100 )
                      goto LABEL_48;
                  }
                }
                else
                {
LABEL_48:
                  v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 7400), 0xFFFFFFFFFFFFFFFFuLL);
                  v25 = *(_QWORD *)(v14 + 6176);
                  if ( v24 >= v25 && v24 - 1 < v25 || (v26 = *(_QWORD *)(v14 + 6168), v24 >= v26) && v24 - 1 < v26 )
                    MiSyncCommitSignals(v14, 0LL);
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
              _InterlockedExchangeAdd64(&qword_1403CFB00, v8);
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 7104), 1uLL);
            }
          }
          return v11;
        }
        if ( v4 == 1 )
        {
          if ( v9 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          {
LABEL_8:
            v11 = 0;
            goto LABEL_9;
          }
        }
        else if ( v4 == 2 && v9 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
        {
          goto LABEL_8;
        }
      }
    }
    else if ( !v7 )
    {
      goto LABEL_5;
    }
    return 0LL;
  }
  v23 = (*(_QWORD *)(a1 + 40) >> 52) & 1LL;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( !v23 )
      goto LABEL_3;
  }
  else if ( !v23 )
  {
    goto LABEL_3;
  }
  return 1LL;
}
