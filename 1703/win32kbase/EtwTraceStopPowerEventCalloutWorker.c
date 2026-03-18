/*
 * XREFs of EtwTraceStopPowerEventCalloutWorker @ 0x1C0065218
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     Template_dxq @ 0x1C00DBF90 (Template_dxq.c)
 */

__int64 __fastcall EtwTraceStopPowerEventCalloutWorker(int a1, char a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_dxq(a1, (unsigned int)&StopPowerEventCalloutWorker, a3, a1, a2, a3);
  return result;
}
