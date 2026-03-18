/*
 * XREFs of VidSchSetPriorityClassProcess @ 0x1C00811F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v3 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 5 )
    {
      v9 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v9 + 24) = v3;
      v8 = -1073741811LL;
    }
    else
    {
      if ( (int)a2 < 5 || a3 || SeSinglePrivilegeCheck((LUID)14LL, 1) )
      {
        *(_DWORD *)(a1 + 16) = v3;
        return 0LL;
      }
      v9 = WdLogNewEntry5_WdWarning(v5);
      *(_QWORD *)(v9 + 24) = v3;
      v8 = -1073741790LL;
    }
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdWarning(v9);
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (unsigned int)v8;
}
