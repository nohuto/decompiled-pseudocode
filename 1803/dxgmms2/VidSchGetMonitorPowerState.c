/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C00796B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // rax

  if ( a1 )
  {
    v3 = (struct _ERESOURCE *)(a1 + 1264);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1264), 1u);
    v4 = *(_DWORD *)(a1 + 2008);
    ExReleaseResourceLite(v3);
    return v4;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
    return 0LL;
  }
}
