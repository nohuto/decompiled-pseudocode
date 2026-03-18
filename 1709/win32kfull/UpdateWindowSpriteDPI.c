/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C009103C
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01C44F0 (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C00916F8 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0092178 (InitializeDPIINFO.c)
 */

__int64 __fastcall UpdateWindowSpriteDPI(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 66) & 8) != 0 )
    {
      InitializeDPIINFO(v5, *(unsigned int *)(a1 + 368), a2, a1);
      return GreDwmNotifySpriteDPIChange(v3, *(_QWORD *)a1, 0LL, v5);
    }
  }
  return result;
}
