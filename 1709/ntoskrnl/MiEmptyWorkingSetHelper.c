/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x140010BF0
 * Callers:
 *     MiEmptyPte @ 0x140010BA0 (MiEmptyPte.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 *     MiUpdateOldPteWorker @ 0x14021EA1C (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  BOOL v11; // r9d
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0xFFFFF68000000000uLL;
  PteShadow = *(_QWORD *)a2;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  v13 = PteShadow;
  v9 = MI_GET_PFN_FROM_PTE(&v13, a2, a3, v3);
  v11 = v8 < v10 || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(a1, a2, v9, v11, (__int64)&v13)
    || *(_WORD *)(v9 + 32) > 1u && (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140388C68 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  MiInsertTbFlushEntry(a3, v8, 1LL, 0LL);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
  {
    MiFreeWsleList(a1, a3, 0LL);
    *(_DWORD *)(a3 + 12) = 0;
  }
  return 1LL;
}
