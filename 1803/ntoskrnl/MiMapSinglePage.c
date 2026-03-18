/*
 * XREFs of MiMapSinglePage @ 0x140138578
 * Callers:
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140142764 (MiInitializeForkMaps.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rdi
  ULONG_PTR result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  int ProtectionPfnCompatible; // eax
  __int64 v12; // r9
  unsigned __int64 ValidPte; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) )
    {
      *v9 = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        MiWritePteShadow(v18, v17, v19);
      KeFlushSingleTb(v7, 0, 1u);
    }
LABEL_4:
    v10 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (a3 & 0x40000000) != 0 )
      v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, 48 * a2 - 0x58000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000, v12);
    goto LABEL_7;
  }
  result = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) == 0 )
    goto LABEL_4;
  ValidPte = ZeroPte;
LABEL_7:
  *v9 = ValidPte;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
    MiWritePteShadow(v15, v14, v16);
  return v7;
}
