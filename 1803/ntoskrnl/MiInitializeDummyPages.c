/*
 * XREFs of MiInitializeDummyPages @ 0x140899A78
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  __int64 DemandZeroPte; // rbx
  __int64 v1; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  unsigned __int64 ValidPte; // rax
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 result; // rax

  MiAllocateDummyPage();
  DemandZeroPte = MiMakeDemandZeroPte(1);
  *(_QWORD *)(v1 + 16) = DemandZeroPte;
  qword_1403CC420 = (v1 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1403CC420);
  qword_1403CC400 = MiAllocateDummyPage();
  *(_QWORD *)(qword_1403CC400 + 16) = DemandZeroPte;
  qword_1403CC408 = (qword_1403CC400 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1403CC408);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = DemandZeroPte;
  v3 = (DummyPage + 0x58000000000LL) / 48;
  qword_1403CC488 = v3;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_1403CC420, 1LL, v4);
  MxFillPhysicalPage(v3);
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_1403CC420,
               134217729LL,
               v5);
  qword_1403CC490 = (ValidPte ^ (qword_1403CC488 << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = DemandZeroPte;
  v8 = (v7 + 0x58000000000LL) / 48;
  qword_1403CC498 = v8;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_1403CC408, 1LL, v9);
  MxFillPhysicalPage(v8);
  v11 = MiMakeValidPte(
          (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          qword_1403CC408,
          134217729LL,
          v10);
  result = (v11 ^ (qword_1403CC498 << 12)) & 0xFFFFFFFFF000LL ^ v11;
  qword_1403CC4A0 = result;
  return result;
}
