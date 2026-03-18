/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C0091554
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0091510 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, __int64 a2)
{
  __int64 v3; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v3 = WdLogNewEntry5_WdAssertion(this, a2);
  WdLogEvent5_WdAssertion(v3);
  return 0LL;
}
