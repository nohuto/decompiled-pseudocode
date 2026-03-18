/*
 * XREFs of VerifierRtlCreateUnicodeString @ 0x140781010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViRtlReplaceStringBuffer @ 0x140781564 (ViRtlReplaceStringBuffer.c)
 */

char __fastcall VerifierRtlCreateUnicodeString(__int64 a1)
{
  char v2; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = ((__int64 (*)(void))pXdvRtlCreateUnicodeString)();
  if ( v2 )
  {
    v5 = 0;
    ViRtlReplaceStringBuffer(a1, &v5, retaddr);
    if ( v5 < 0 )
      return 0;
  }
  return v2;
}
