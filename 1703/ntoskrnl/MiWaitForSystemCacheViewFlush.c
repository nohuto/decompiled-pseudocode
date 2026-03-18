/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x140147314
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
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
