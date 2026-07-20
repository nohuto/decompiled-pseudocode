/*
 * XREFs of SmpConfigureClearTempFiles @ 0x140011C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureClearTempFiles(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax

  v4 = SmpClearTempFiles;
  if ( a4 == 4 )
    v4 = 1;
  SmpClearTempFiles = v4;
  return 0LL;
}
