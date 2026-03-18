/*
 * XREFs of MiEvictPageTableLock @ 0x14003D960
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf

  MiLockPageTableInternal(a1, a2, 0LL);
  if ( (unsigned __int64)MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int16)*(_DWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFLL)
                                     - 0x57FFFFFFFE8LL) != 1 )
      goto LABEL_8;
    if ( (a4 & 1) == 0 )
      goto LABEL_4;
    v11 = RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096;
  }
  else
  {
    v11 = (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16, v8, v9, v10) + 16) & 0x3FF0000) == 0;
  }
  if ( v11 )
  {
LABEL_4:
    MiUnlockNestedPageTableWritePte(a1, a2, a3);
    return 1LL;
  }
LABEL_8:
  MiUnlockPageTableInternal(a1, a2);
  return 0LL;
}
