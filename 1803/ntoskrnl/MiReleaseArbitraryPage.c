/*
 * XREFs of MiReleaseArbitraryPage @ 0x1400AE620
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v6 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  *v6 = ZeroPte;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow((__int64)v6, ZeroPte, a3);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
