/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1C00FD2C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

NTSTATUS __fastcall EtwTraceSPIBlockedByFiltering(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &SPIBlockedByFiltering, a3, a1);
  return result;
}
