/*
 * XREFs of SmIoRequestComplete @ 0x140054C54
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1400533F8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiStoreFreeWriteSupport @ 0x140054EB0 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x140054EDC (MiStoreModifiedWriteDereference.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140220C60 (MiStoreLogWriteCompleteFailure.c)
 */

LONG __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // rbx
  unsigned __int8 v8; // al

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  v4 = a3 | 0x8000000000000000uLL;
  v5 = *(_QWORD *)(*(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38) + 192LL);
  if ( *(int *)((a3 | 0x8000000000000000uLL) + 0x10) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v7 = 48LL * *(_QWORD *)(v4 + 112) - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    *(_BYTE *)(v7 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    *(_DWORD *)(v5 + 1204) = 32;
  }
  MiStoreModifiedWriteDereference(*(_QWORD *)(v4 + 56));
  return MiStoreFreeWriteSupport(v4, &MiSystemPartition);
}
