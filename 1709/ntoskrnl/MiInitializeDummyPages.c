/*
 * XREFs of MiInitializeDummyPages @ 0x14082A2CC
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
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
  qword_1403891A0 = (v1 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1403891A0);
  qword_140389180 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140389180 + 16) = DemandZeroPte;
  qword_140389188 = (qword_140389180 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_140389188);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = DemandZeroPte;
  v3 = (DummyPage + 0x58000000000LL) / 48;
  qword_140389208 = v3;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_1403891A0, 1);
  MxFillPhysicalPage(v3);
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_1403891A0,
               134217729);
  qword_140389210 = (ValidPte ^ (qword_140389208 << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
  v5 = MiAllocateDummyPage();
  *(_QWORD *)(v5 + 16) = DemandZeroPte;
  v6 = (v5 + 0x58000000000LL) / 48;
  qword_140389218 = v6;
  MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140389188, 1);
  MxFillPhysicalPage(v6);
  v7 = MiMakeValidPte(
         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
         qword_140389188,
         134217729);
  result = (v7 ^ (qword_140389218 << 12)) & 0xFFFFFFFFF000LL ^ v7;
  qword_140389220 = result;
  return result;
}
