/*
 * XREFs of ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C01A9958
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall GetLaptopSpecialCaseFlags(
        const struct CCD_TOPOLOGY *a1,
        const struct _LUID *a2,
        __int64 a3,
        __int64 a4,
        const struct MONITORSCOUNT_CALLBACK_CONTEXT *a5)
{
  __int64 v5; // rax
  int v6; // ebp
  int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v5 = *((_QWORD *)a1 + 8);
  v6 = a4;
  v7 = a3;
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  if ( (_WORD)v5 != 1 || *((_DWORD *)a5 + 1) != 2 )
    return 0LL;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a1, 0LL, a3, a4);
  if ( !PathDescriptor )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
    *(_QWORD *)(v14 + 24) = 3928LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)PathDescriptor + 7) == v7
    && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
    && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
  {
    return 0LL;
  }
  if ( IsInternalVideoOutput(*((_DWORD *)PathDescriptor + 22)) )
    return 8LL;
  return IsInternalVideoOutput(v6);
}
