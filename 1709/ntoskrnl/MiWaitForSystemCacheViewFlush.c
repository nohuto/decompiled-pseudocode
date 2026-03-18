/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x140127C20
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 */

__int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  __int64 i; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  for ( i = *(_QWORD *)(a1 + 24); ; i = *(_QWORD *)(a1 + 24) )
  {
    result = MiGetPteLink(i);
    if ( !result )
      break;
    KeYieldProcessorEx(&v4);
  }
  return result;
}
