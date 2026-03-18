/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00F18E0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F1870 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01E7B90 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 DwmDependentMetric; // ax
  __int64 result; // rax

  EtwTraceChangeDisplayModeBroadcast(0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v9 = (unsigned __int16)GetDwmDependentMetric(1LL, 0LL, v7, v8) << 16;
  DwmDependentMetric = GetDwmDependentMetric(0LL, 0LL, v10, v11);
  result = xxxBroadcastMessageEx(
             v6,
             0x7Eu,
             *(unsigned __int16 *)(gpsi + 8676LL),
             (struct _LARGE_STRING *)(v9 | (unsigned __int64)DwmDependentMetric),
             1u,
             0LL,
             1,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a3);
  }
  return result;
}
