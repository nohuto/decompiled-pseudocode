/*
 * XREFs of EtwUpdateEvent @ 0x1C007F160
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

__int64 __fastcall EtwUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xq(a1, &UpdateEvent, a3, a1, a2);
  return result;
}
