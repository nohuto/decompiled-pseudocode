/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140071DE8
 * Callers:
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  int v8; // r9d
  KIRQL v9; // r15
  __int64 NextPageTable; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v21; // [rsp+54h] [rbp-ACh]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]

  v23 = 0;
  v21 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 1;
  v22 = 20;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = *(_QWORD *)(a3 + 184) + 1280LL;
  v5 = v19;
  SharedVm = MiGetSharedVm(v19);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = v7;
  if ( v3 <= v4 )
  {
    do
    {
      LOBYTE(v8) = v9;
      NextPageTable = MiGetNextPageTable(v3, v4, (unsigned int)&v20, v8, 4, (__int64)v18);
      v3 = NextPageTable;
      if ( !NextPageTable )
        break;
      v11 = NextPageTable << 25 >> 16;
      do
      {
        v12 = MI_READ_PTE_LOCK_FREE(v3);
        v17 = v12;
        if ( (v12 & 1) != 0 && (v12 & 0x42) != 0 )
        {
          v13 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v17) - 0x58000000000LL;
          v14 = MiLockPageInline(v13);
          *(_BYTE *)(v13 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v14);
          MiWriteValidPteNewProtection(v3, v17 & 0xFFFFFFFFFFFFFFBDuLL);
          MiInsertTbFlushEntry(&v20, v11, 1LL, 0LL);
        }
        v11 += 4096LL;
        v3 += 8LL;
      }
      while ( (v11 & 0x1FFFFF) != 0 && v3 <= v4 );
    }
    while ( v3 <= v4 );
    v5 = v19;
  }
  MiFlushTbList(&v20);
  LOBYTE(v15) = v9;
  return MiUnlockWorkingSetExclusive(v5, v15);
}
