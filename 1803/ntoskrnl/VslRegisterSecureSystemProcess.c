/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x1402301F8
 * Callers:
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  NTSTATUS result; // eax
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]
  ULONG_PTR v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]

  v0 = PsSecureSystemProcess;
  v3 = *(_QWORD *)(PsSecureSystemProcess + 736);
  v4 = PsSecureSystemProcess;
  result = VslpEnterIumSecureMode(2u, 4LL, 0, (__int64)v2);
  if ( result >= 0 )
  {
    *(_QWORD *)(v0 + 720) = v5;
    *(_QWORD *)(v0 + 720) = v5 | 1;
  }
  return result;
}
