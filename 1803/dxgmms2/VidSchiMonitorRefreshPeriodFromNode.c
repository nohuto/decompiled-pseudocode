/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x1C0003748
 * Callers:
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00035B0 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C050 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rdi
  ULONGLONG v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1736);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3032) + 65428LL);
    if ( (_DWORD)result )
      return result;
    v7 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdWarning(v7);
    return 16LL;
  }
  v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 2008) + 96LL)
                       + 488LL);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 40) )
    v4 = 0LL;
  v5 = (unsigned int)v4;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v4 + 3032) + 65428LL);
  if ( !(_DWORD)result )
  {
    v7 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v7 + 24) = v5;
    goto LABEL_9;
  }
  return result;
}
