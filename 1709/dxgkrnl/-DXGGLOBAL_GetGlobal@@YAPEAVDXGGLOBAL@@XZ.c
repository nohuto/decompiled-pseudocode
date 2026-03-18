/*
 * XREFs of ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000E060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGGLOBAL *__fastcall DXGGLOBAL_GetGlobal(__int64 a1)
{
  __int64 v2; // rax

  if ( !DXGGLOBAL::m_pGlobal )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 1950LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return (struct DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
}
