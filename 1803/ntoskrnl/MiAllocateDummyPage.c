/*
 * XREFs of MiAllocateDummyPage @ 0x14089BBF0
 * Callers:
 *     MiInitializeDummyPages @ 0x140899A78 (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAllocateDummyPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Page; // rax
  __int64 v5; // rbx
  __int64 DemandZeroPte; // rax
  char v7; // cl
  unsigned __int64 v8; // rdx

  MiChargeResident(&MiSystemPartition, 1uLL, 0LL, a4);
  MiChargeCommit((__int64)&MiSystemPartition, 1uLL, 1u);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 0x208u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_1403CFA10, qword_1403CFA00, BugCheckParameter3, 0x102uLL);
  v5 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v5, 0, 0);
  *(_QWORD *)(v5 + 8) = 0xFFFFF68000000000uLL;
  MiLockPageInline(v5);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = *(_BYTE *)(v5 + 34) | 7;
  *(_QWORD *)(v5 + 16) = DemandZeroPte;
  *(_WORD *)(v5 + 32) = 2;
  *(_BYTE *)(v5 + 34) = v7;
  *(_BYTE *)(v5 + 34) |= 0x20u;
  *(_BYTE *)(v5 + 34) |= 8u;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return v5;
}
