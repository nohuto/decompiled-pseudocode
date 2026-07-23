/*
 * XREFs of RtlpHpStackTraceHeapDisable @ 0x1801007C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDisable(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v1 = 60LL;
    v2 = 320LL;
  }
  else
  {
    v1 = 208LL;
    v2 = 368LL;
  }
  RtlpHpPerHeapStackTraceCleanup((_RTL_RUN_ONCE *)(v2 + a1), *(_WORD *)(v1 + a1) == 0xFFFF, 1);
  return 0LL;
}
