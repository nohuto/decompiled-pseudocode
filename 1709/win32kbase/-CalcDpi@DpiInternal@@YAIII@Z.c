/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C009A23C
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C009A1F8 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  WdLogEvent5_WdAssertion(v5);
  return 0LL;
}
