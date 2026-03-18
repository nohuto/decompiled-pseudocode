/*
 * XREFs of EtwTraceTouchPadTypeDiscovered @ 0x1C00DAB50
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00DBC78 (Template_q.c)
 */

__int64 __fastcall EtwTraceTouchPadTypeDiscovered(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return Template_q(a1, &TouchPadTypeDiscovered, a3, (unsigned int)a1);
  return result;
}
