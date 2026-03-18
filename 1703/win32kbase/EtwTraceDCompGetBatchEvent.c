/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C0081770
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0014B78 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return Template_p(a1, &DCompGetBatchEvent, &W32kControlGuid, a1);
  return result;
}
