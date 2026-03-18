/*
 * XREFs of MiMapSinglePage @ 0x140025508
 * Callers:
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140003028 (MiInitializeForkMaps.c)
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int ProtectionPfnCompatible; // eax

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( MI_READ_PTE_LOCK_FREE(v9) )
    {
      *v9 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v9) )
        MiWritePteShadow(v11);
      KeFlushSingleTb(v7, 0LL, 1LL);
    }
    goto LABEL_10;
  }
  result = MiReservePtes(&qword_14036D0A0, 1LL);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = result << 25 >> 16;
  if ( (a4 & 2) == 0 )
  {
LABEL_10:
    v12 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (a3 & 0x40000000) != 0 )
      v12 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v12, 48 * a2 - 0x58000000000LL);
    *v9 = MiMakeValidPte(v9, a2, ProtectionPfnCompatible | 0xA0000000);
    if ( !(unsigned int)MiPteInShadowRange(v9) )
      return v7;
    goto LABEL_13;
  }
  *(_QWORD *)result = 0LL;
  if ( (unsigned int)MiPteInShadowRange(result) )
LABEL_13:
    MiWritePteShadow(v10);
  return v7;
}
