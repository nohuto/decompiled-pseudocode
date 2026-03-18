/*
 * XREFs of PopGenerateScratchMdl @ 0x14013F344
 * Callers:
 *     PopGenerateUnHibernatedMdl @ 0x14040E09C (PopGenerateUnHibernatedMdl.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140077240 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateScratchMdl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  PMDL PagesForMdl; // r8
  SIZE_T v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdx
  PHYSICAL_ADDRESS v9; // rcx
  unsigned __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 248);
  PagesForMdl = 0LL;
  v5 = a2 << 12;
  v6 = 0LL;
  v7 = __rdtsc();
  if ( *(_DWORD *)(v2 + 8) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v2 + 48 * v6 + 32) << 12;
      if ( *(_DWORD *)(v2 + 48 * v6 + 60) == -268435455
        && (*(_QWORD *)(v2 + 48 * v6 + 32) + *(_QWORD *)(v2 + 48 * v6 + 48)) << 12 >= v5 + 0x1000000 )
      {
        if ( v8 > 0x100000000LL )
          goto LABEL_12;
        v9.QuadPart = 0x1000000LL;
        if ( v8 > 0x1000000 )
          v9.QuadPart = *(_QWORD *)(v2 + 48 * v6 + 32) << 12;
        if ( 0x100000000LL - v9.QuadPart >= v5 )
        {
          PagesForMdl = MmAllocatePagesForMdlEx(v9, (PHYSICAL_ADDRESS)0x100000000LL, 0LL, v5, MmCached, 0xDu);
          if ( PagesForMdl )
            break;
        }
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v2 + 8) )
        goto LABEL_12;
    }
    PagesForMdl->Next = *(struct _MDL **)(qword_14034B1C0 + 128);
    *(_QWORD *)(qword_14034B1C0 + 128) = PagesForMdl;
    *(_QWORD *)(qword_14034B1C0 + 136) += a2;
  }
LABEL_12:
  v10 = __rdtsc();
  qword_14034B5E8 += (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) - v7;
  return PagesForMdl;
}
