/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x1C00135B4
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0006A70 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001343C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rdi
  ULONGLONG v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1704);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3008) + 60948LL);
    if ( (_DWORD)result )
      return result;
    v8 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdWarning(v8);
    return 16LL;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 1976) + 96LL)
                 + 464LL);
  v5 = 0LL;
  if ( v4 <= *(_DWORD *)(v1 + 40) )
    v5 = v4;
  v6 = (unsigned int)v5;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v5 + 3008) + 60948LL);
  if ( !(_DWORD)result )
  {
    v8 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v8 + 24) = v6;
    goto LABEL_9;
  }
  return result;
}
