/*
 * XREFs of PopGenerateScratchMdl @ 0x140241C68
 * Callers:
 *     PopGenerateUnHibernatedMdl @ 0x140433288 (PopGenerateUnHibernatedMdl.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x14011CC10 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateScratchMdl(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  PMDL PagesForMdl; // rax
  PMDL v5; // r8
  unsigned __int64 v6; // rax

  v3 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(
                  (PHYSICAL_ADDRESS)0x1000000LL,
                  (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
                  0LL,
                  a2 << 12,
                  MmCached,
                  0xDu);
  v5 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(BugCheckParameter4 + 128);
    *(_QWORD *)(BugCheckParameter4 + 128) = PagesForMdl;
    *(_QWORD *)(BugCheckParameter4 + 136) += a2;
  }
  v6 = __rdtsc();
  qword_140365C68 += (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) - v3;
  return v5;
}
