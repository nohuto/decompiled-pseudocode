/*
 * XREFs of EtwTraceMouseInputCoalesced @ 0x1C009B6E0
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0015ADC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceMouseInputCoalesced(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0(a1, &MouseInputCoalesced, &W32kControlGuid);
  return result;
}
