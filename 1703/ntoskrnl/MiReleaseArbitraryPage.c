/*
 * XREFs of MiReleaseArbitraryPage @ 0x140016B60
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  v4 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  *v4 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v5);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
