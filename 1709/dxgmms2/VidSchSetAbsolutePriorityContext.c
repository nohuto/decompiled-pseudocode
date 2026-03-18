/*
 * XREFs of VidSchSetAbsolutePriorityContext @ 0x1C00B5210
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetPriorityContext @ 0x1C0010E38 (VidSchiSetPriorityContext.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityContext(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 0x1E )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = v3;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *(_QWORD *)(a1 + 104);
    if ( *(_BYTE *)(v9 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 160), 0, 0) )
    {
      v10 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v10 + 24) = v9;
      *(_QWORD *)(v10 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v10);
      return 3223192064LL;
    }
    else if ( (unsigned int)v3 < 0x10
           || a3
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 8LL) + 305LL)
           || SeSinglePrivilegeCheck((LUID)14LL, 1) )
    {
      VidSchiSetPriorityContext(a1, v3);
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
