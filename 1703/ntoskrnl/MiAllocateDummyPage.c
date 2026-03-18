/*
 * XREFs of MiAllocateDummyPage @ 0x14080276C
 * Callers:
 *     MiInitializeDummyPages @ 0x1408002FC (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx

  MiChargeResident(&MiSystemPartition, 1uLL, 0LL);
  MiChargeCommit((unsigned __int64)&MiSystemPartition, 1uLL, 1uLL);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 8u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_1403817D0, qword_1403817C0, BugCheckParameter3, 0x102uLL);
  v1 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)v1 = 0LL;
  MiFinalizePageAttribute(v1, 1u, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  MiLockPageInline(v1);
  *(_QWORD *)(v1 + 16) = MiMakeDemandZeroPte(4);
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) |= 0x2Fu;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return v1;
}
