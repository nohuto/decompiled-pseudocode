/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0096600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceAuditApiRegisterRawInputDevices(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0q(a1, &AuditApiRegisterRawInputDevices, a3, (unsigned int)a1);
  return result;
}
