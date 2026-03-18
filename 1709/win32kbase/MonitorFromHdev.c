/*
 * XREFs of MonitorFromHdev @ 0x1C005A908
 * Callers:
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 96); result && *(_QWORD *)(result + 232) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
