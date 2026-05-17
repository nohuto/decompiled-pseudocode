/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18004A330
 * Callers:
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
