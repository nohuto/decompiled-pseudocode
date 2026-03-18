/*
 * XREFs of MonitorFromHdev @ 0x1C0028904
 * Callers:
 *     UserGetMonitorDC @ 0x1C0028978 (UserGetMonitorDC.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *((_QWORD *)gpDispInfo + 12); result && *(_QWORD *)(result + 120) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
