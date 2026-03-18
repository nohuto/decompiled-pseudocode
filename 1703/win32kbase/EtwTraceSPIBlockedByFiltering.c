/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1C00FCEB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00DBC78 (Template_q.c)
 */

NTSTATUS __fastcall EtwTraceSPIBlockedByFiltering(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    return Template_q(a1, &SPIBlockedByFiltering, a3, a1);
  return result;
}
