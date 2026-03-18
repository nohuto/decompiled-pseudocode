/*
 * XREFs of MiMapArbitraryPage @ 0x140008F00
 * Callers:
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rsi
  __int64 *v7; // r14
  unsigned __int8 v11; // bp
  int v12; // eax
  unsigned int v13; // edx
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rax

  v5 = a2[8];
  v7 = (__int64 *)a2[9];
  v11 = MiLockPageInline(v5);
  v12 = MiCombineCandidate(a1, a3, v5);
  v13 = 0;
  if ( a4 )
  {
    if ( v12 != a4 )
      goto LABEL_3;
  }
  else if ( !v12 )
  {
LABEL_3:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    return 0LL;
  }
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
    goto LABEL_3;
  if ( (*(_BYTE *)(v5 + 34) & 0xC0) != 0xC0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, v5);
    ValidPte = MiMakeValidPte(v7, (v5 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0x20000000u);
    a2[7] = v7;
    a2[6] = v5;
    *v7 = ValidPte;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v7, ValidPte);
    v13 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  return v13;
}
