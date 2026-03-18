/*
 * XREFs of EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C009C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTracexxxUserResetDisplayDeviceEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &xxxUserResetDisplayDeviceEnd, a3, (unsigned int)a1);
  return result;
}
