/*
 * XREFs of BapdpKsrCancelScenario @ 0x1402B80F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrCancelScenario(int a1, int a2)
{
  __int64 v2; // rcx

  v2 = a1 & 0x3000000;
  if ( (_DWORD)v2 && (a2 & 0x3000000) == 0 && xmmword_1403A1710 )
    return xmmword_1403A1710(v2, 0LL, 0LL, 0LL);
  else
    return 3221225659LL;
}
