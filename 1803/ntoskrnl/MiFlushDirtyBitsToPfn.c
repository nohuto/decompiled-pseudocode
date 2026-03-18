/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1400BDA54
 * Callers:
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r8
  char v7; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+44h] [rbp-BCh]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]

  v18 = 20LL;
  v16 = 1;
  v17 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(a3 + 184) + 1280LL;
  v7 = MiLockWorkingSetShared(v5);
  while ( v3 <= v4 )
  {
    NextPageTable = MiGetNextPageTable(v3, v4, (__int64)&v16, v7, 0, &v15);
    v3 = NextPageTable;
    if ( !NextPageTable )
      break;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = (__int64)(NextPageTable << 25) >> 16;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(v3);
      v14 = v11;
      if ( (v11 & 1) != 0 && (v11 & 0x42) != 0 )
      {
        v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        MiLockPageAtDpcInline(v13);
        *(_BYTE *)(v13 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiWriteValidPteNewProtection(v3, v14 & 0xFFFFFFFFFFFFFFBDuLL);
        MiInsertTbFlushEntry((__int64)&v16, v10, 1LL, 0);
      }
      v10 += 4096LL;
      v3 += 8LL;
    }
    while ( (v10 & 0x1FFFFF) != 0 && v3 <= v4 );
    MiFlushTbList(&v16);
    MiUnlockPageTableInternal(v5, v9);
  }
  return MiUnlockWorkingSetShared(v5, v7, v6);
}
