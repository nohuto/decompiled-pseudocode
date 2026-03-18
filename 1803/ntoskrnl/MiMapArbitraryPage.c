/*
 * XREFs of MiMapArbitraryPage @ 0x1400323B0
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 *a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned __int64 *v7; // rdi
  unsigned __int8 CurrentIrql; // r13
  int v12; // eax
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // r8
  unsigned __int64 ValidPte; // rax
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[8];
  v7 = (unsigned __int64 *)a2[9];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v12 = MiCombineCandidate(a1, a3, v5);
  if ( !a4 )
  {
    if ( v12 )
      goto LABEL_4;
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( v12 != a4 )
    goto LABEL_20;
LABEL_4:
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
    goto LABEL_20;
  v14 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v14 == 3 )
    goto LABEL_20;
  v15 = 1LL;
  if ( v14 )
  {
    if ( v14 == 2 )
      v15 = 25LL;
  }
  else
  {
    v15 = 9LL;
  }
  LODWORD(v15) = v15 | 0x20000000;
  ValidPte = MiMakeValidPte((unsigned __int64)v7, (v5 + 0x58000000000LL) / 48, v15, v13);
  a2[7] = v7;
  a2[6] = v5;
  *v7 = ValidPte;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, ValidPte);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return 1LL;
}
