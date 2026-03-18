/*
 * XREFs of MiMapArbitraryPage @ 0x1400A39B0
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 *a1, _QWORD *a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // di
  int v11; // eax
  unsigned __int8 v13; // cl
  int v14; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = a2[8];
  v6 = (unsigned __int64 *)a2[9];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v11 = MiCombineCandidate(a1, v4);
  if ( a3 )
  {
    if ( v11 != a3 )
      goto LABEL_6;
  }
  else if ( !v11 )
  {
LABEL_6:
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( a4 == 1 && (unsigned __int8)((*(_BYTE *)(v4 + 34) & 7) - 2) > 1u )
    goto LABEL_6;
  v13 = *(_BYTE *)(v4 + 34);
  if ( v13 >> 6 == 3 )
    goto LABEL_6;
  if ( v13 >= 0x40u )
  {
    v14 = 1;
    if ( v13 >> 6 == 2 )
      v14 = 25;
  }
  else
  {
    v14 = 9;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v6, (v4 + 0x58000000000LL) / 48, v14 | 0x20000000u);
  a2[7] = v6;
  a2[6] = v4;
  *v6 = ValidPte;
  if ( (unsigned int)MiPteInShadowRange(v6) )
    MiWritePteShadow(v16);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return 1LL;
}
