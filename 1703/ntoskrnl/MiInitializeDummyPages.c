/*
 * XREFs of MiInitializeDummyPages @ 0x1408002FC
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  __int64 DemandZeroPte; // rbx
  __int64 v1; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v3; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  MiAllocateDummyPage();
  DemandZeroPte = MiMakeDemandZeroPte(1);
  *(_QWORD *)(v1 + 16) = DemandZeroPte;
  qword_14036CEE0 = (v1 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_14036CEE0);
  qword_14036CEC0 = MiAllocateDummyPage();
  *(_QWORD *)(qword_14036CEC0 + 16) = DemandZeroPte;
  qword_14036CEC8 = (qword_14036CEC0 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_14036CEC8);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = DemandZeroPte;
  v3 = (DummyPage + 0x58000000000LL) / 48;
  qword_14036CF48 = v3;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_14036CEE0, 1);
  MxFillPhysicalPage(v3);
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_14036CEE0,
               134217729);
  qword_14036CF50 = (ValidPte ^ (qword_14036CF48 << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
  v5 = MiAllocateDummyPage();
  *(_QWORD *)(v5 + 16) = DemandZeroPte;
  v6 = (v5 + 0x58000000000LL) / 48;
  qword_14036CF58 = v6;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_14036CEC8, 1);
  MxFillPhysicalPage(v6);
  v7 = MiMakeValidPte(
         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
         qword_14036CEC8,
         134217729);
  result = (v7 ^ (qword_14036CF58 << 12)) & 0xFFFFFFFFF000LL ^ v7;
  qword_14036CF60 = result;
  return result;
}
