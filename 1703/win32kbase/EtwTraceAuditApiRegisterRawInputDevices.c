/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1C008E600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceAuditApiRegisterRawInputDevices(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
    return Template_q(a1, &AuditApiRegisterRawInputDevices, a3, (unsigned int)a1);
  return result;
}
