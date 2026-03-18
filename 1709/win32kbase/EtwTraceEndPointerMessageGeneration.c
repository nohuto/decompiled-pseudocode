/*
 * XREFs of EtwTraceEndPointerMessageGeneration @ 0x1C00E0290
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     McTemplateK0hh @ 0x1C00E2B0C (McTemplateK0hh.c)
 */

__int64 __fastcall EtwTraceEndPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0hh(a1, &EndPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
