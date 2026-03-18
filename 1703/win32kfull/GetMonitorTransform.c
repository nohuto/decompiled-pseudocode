/*
 * XREFs of GetMonitorTransform @ 0x1C01C04A0
 * Callers:
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 368) & 0xF;
  if ( v2 == 2 )
    return 0LL;
  if ( v2 == 1 )
    return *(_QWORD *)(a1 + 528);
  return *(_QWORD *)(a1 + 520);
}
