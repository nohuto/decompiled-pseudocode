/*
 * XREFs of RtlFreeSid @ 0x180075A20
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

PVOID __cdecl RtlFreeSid(PSID Sid)
{
  PSID v1; // rbx

  v1 = Sid;
  if ( RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid) )
    return 0LL;
  return v1;
}
