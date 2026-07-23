/*
 * XREFs of RtlGetExtendedContextLength @ 0x1800724A0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18005C79C (PsspCaptureThreadInformation.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x180072514 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x180072554 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  _DWORD *v4; // r11
  int v5; // ecx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v6);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(v3, &v7, &v8);
    v5 = v7 + 24;
    if ( (v6[0] & 2) != 0 )
      v5 = MEMORY[0x7FFE03E8] - 448 + (~(v8 - 1) & (v8 + v7 + 23)) - v8;
    *v4 = v5 + v8 - 1;
    return 0;
  }
  return result;
}
