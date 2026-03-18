/*
 * XREFs of MiAllocateDummyPage @ 0x14082C7C0
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x14082A2CC (MiInitializeDummyPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 v0; // r9
  __int64 Page; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx

  MiChargeResident(&MiSystemPartition, 1uLL);
  MiChargeCommit((__int64)&MiSystemPartition, 1uLL, 1LL, v0);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 0x88u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_14038B750, qword_14038B740, BugCheckParameter3, 0x102uLL);
  v2 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v2, 0LL, 0);
  *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
  MiLockPageInline(v2);
  *(_QWORD *)(v2 + 16) = MiMakeDemandZeroPte(4);
  *(_WORD *)(v2 + 32) = 2;
  *(_BYTE *)(v2 + 34) |= 0x2Fu;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v3);
  return v2;
}
