/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01C2914
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01C3B8C (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C005EC34 (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL);
  v3 = *(_WORD *)(v2 + 66);
  DpiForSystem = GetDpiForSystem(v4, v2);
  v7 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v3, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v3, *((__int64 *)&v7 + 1));
  a1[1] = result;
  return result;
}
