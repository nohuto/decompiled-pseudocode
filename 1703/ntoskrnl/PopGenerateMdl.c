/*
 * XREFs of PopGenerateMdl @ 0x14013F1A8
 * Callers:
 *     PopAllocatePages @ 0x14040DF10 (PopAllocatePages.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140077240 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateMdl(__int64 a1)
{
  unsigned __int64 v2; // rdi
  PMDL PagesForMdl; // rax
  PMDL v4; // r8
  unsigned __int64 v5; // rax

  v2 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, a1 << 12, MmCached, 0xDu);
  v4 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(qword_14034B1C0 + 128);
    *(_QWORD *)(qword_14034B1C0 + 128) = PagesForMdl;
    *(_QWORD *)(qword_14034B1C0 + 136) += a1;
  }
  v5 = __rdtsc();
  qword_14034B5E8 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v2;
  return v4;
}
