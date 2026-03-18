/*
 * XREFs of MiRemoveLockedPageCharge @ 0x1400A2B50
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140220B00 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x140225E74 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // r10
  bool v3; // zf
  __int16 v4; // dx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v15; // eax

  v1 = *(_WORD *)(a1 + 32);
  v2 = a1;
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v3 && (unsigned int)MiIsPfnFileOnly(a1) )
    return 1LL;
  v5 = *(_QWORD *)(v2 + 40);
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v5 & 0x10000000000000LL) != 0 )
      return 0LL;
  }
  else if ( (v5 & 0x10000000000000LL) != 0 )
  {
    return 0LL;
  }
  v6 = 1LL;
  v7 = *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v8 = 0;
  if ( !v4 )
  {
    v9 = 1;
LABEL_9:
    v10 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
    if ( (v10 > 0xFFFFF6BFFFFFFF78uLL || v10 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v2 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v2 + 35) &= ~0x20u;
    }
    else
    {
      if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v2 + 16) & 0x400LL) != 0
        || v10 <= 0xFFFFF6BFFFFFFF78uLL
        && v10 >= 0xFFFFF68000000000uLL
        && ((*(unsigned __int8 *)(v2 + 35) >> 5) & 1) != 0
        || v9 == 1 && (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
      {
        v8 = 1;
      }
      v11 = (v5 >> 40) & 0x3FF;
      v12 = *(_QWORD *)(qword_14036C8F8 + 8 * v11);
      if ( v8 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v11), 1LL);
      if ( (ULONG_PTR *)v12 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v15 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v3 = (_DWORD)CachedResidentAvailable == v15;
              LODWORD(CachedResidentAvailable) = v15;
              if ( v3 )
                return v9;
            }
            while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v6 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_1403818C0, v6);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 5824), 1uLL);
      }
    }
    return v9;
  }
  if ( v4 == 1 )
  {
    if ( v7 || (*(_BYTE *)(v2 + 34) & 8) != 0 )
    {
LABEL_8:
      v9 = 0;
      goto LABEL_9;
    }
  }
  else if ( v4 == 2 && v7 && (*(_BYTE *)(v2 + 34) & 8) != 0 )
  {
    goto LABEL_8;
  }
  return 0LL;
}
