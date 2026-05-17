/*
 * XREFs of RtlFreeSid @ 0x18005BC00
 * Callers:
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall RtlFreeSid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  if ( (unsigned int)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1) )
    return 0LL;
  return v1;
}
