/*
 * XREFs of EtwLogicalSurfCreateEvent @ 0x1C0090D60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C00E2F1C (McTemplateK0xq.c)
 */

__int64 __fastcall EtwLogicalSurfCreateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xq(a1, &LogicalSurfCreateEvent, a3, a1, a2);
  return result;
}
