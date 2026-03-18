/*
 * XREFs of VidSchSetInProcessPriorityHwContext @ 0x1C00BEB50
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00BF11C (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityHwContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 v6; // rax

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v4 + 188) && !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 184), 0, 0) )
    {
      *(_DWORD *)(a1 + 64) = a2;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
    v6 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v6 + 24) = v4;
    v3 = -1071775232;
    *(_QWORD *)(v6 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v6);
  }
  else
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL, a2);
    v3 = -1073741811;
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return v3;
}
