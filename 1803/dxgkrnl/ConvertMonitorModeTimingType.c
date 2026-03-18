/*
 * XREFs of ConvertMonitorModeTimingType @ 0x1C02389B8
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorModeTimingType(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      *a2 = 1;
      break;
    case 2:
      *a2 = 2;
      break;
    case 3:
      *a2 = 3;
      break;
    case 4:
      *a2 = 4;
      break;
    default:
      v4 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v4 + 24) = v2;
      WdLogEvent5_WdError(v4);
      *a2 = 0;
      return 3223192354LL;
  }
  return 0LL;
}
