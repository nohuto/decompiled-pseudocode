/*
 * XREFs of MiMapSinglePage @ 0x1400CD194
 * Callers:
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x1401321C4 (MiInitializeForkMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // r15d
  unsigned __int64 v7; // rdi
  ULONG_PTR result; // rax
  __int64 *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 PteShadow; // rax
  __int64 v12; // rcx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax

  v5 = a3;
  v7 = a1;
  if ( a1 )
  {
    v9 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v9);
    if ( PteShadow )
    {
      *v9 = 0LL;
      if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
      KeFlushSingleTb(v7, 0, 1u);
    }
LABEL_15:
    v12 = (((v5 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (v5 & 0x40000000) != 0 )
      v12 = ((v5 >> 31) & 0xFFFFFFFD) + 4;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v12, 48 * a2 - 0x58000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000);
    *v9 = ValidPte;
    if ( (unsigned __int64)v9 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v9 > 0xFFFFF6FB7DBED7F8uLL )
      return v7;
    v10 = ValidPte;
    goto LABEL_20;
  }
  result = MiReservePtes((__int64)&qword_140389360, 1uLL, a3);
  v9 = (__int64 *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) == 0 )
    goto LABEL_15;
  *(_QWORD *)result = 0LL;
  if ( result < 0xFFFFF6FB7DBED000uLL || result > 0xFFFFF6FB7DBED7F8uLL )
    return v7;
  v10 = 0LL;
LABEL_20:
  MiWritePteShadow(v9, v10);
  return v7;
}
