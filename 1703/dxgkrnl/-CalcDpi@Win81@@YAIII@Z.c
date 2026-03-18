/*
 * XREFs of ?CalcDpi@Win81@@YAIII@Z @ 0x1C01BF89C
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFAF8 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win81::CalcDpi(Win81 *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  *(_QWORD *)(v4 + 24) = 170LL;
  WdLogEvent5_WdAssertion(v4);
  return 0LL;
}
